//
// Written by Aiden Sayre
// Last modified 8/29/2024
//
// A simple terminal app that
// displays the content of a
// text file and analyzes it,
// saving those results to a
// local file.
// 
// Based off a heavily modified
// Lab6b with elements of Lab7a.
//

using namespace std;
#include <iostream>
#include <fstream>
#include <string>

ifstream userFile;
ofstream resultsFile("results.txt");
string theText;
int countChars = 0,
countChars_noSpace = 0,
countWords = 0,
countLines = 0;

static void reviewLine(string text)
{
	string line_cache = ""; // for handling the line without spaces

	// makes sure all characters in the line are ascii by replacing the non-ascii ones with '?'
	// easier then converting the string to a wide string with UTF support
	for (int position = 0; position < theText.length(); position++)
	{
		if (theText[position] < 0 || theText[position] > 127) // ascii char range
		{
			theText[position] = '?';
			theText.erase(position + 1, 1); // utf is two characters wide, so we remove the extra one
		}
	}

	countChars += theText.length();

	// my word scanner algorithim, simplified and repurposed
	while (theText.length() != 0)
	{
		int wordspot = 0;
		for (int loop = 0; !isspace(theText[loop]) && loop < theText.length(); loop++)
			// scans each position for a space, escaping upon finding one and saving that position
			wordspot++;
		line_cache += theText.substr(0, wordspot); // copies the extracted word to another string
		countWords++;
		theText.erase(0, wordspot + 1); // removes the extracted word from the original string (and the space after it)
	}

	countChars_noSpace += line_cache.length();
}

int main()
{
	string file_name;

	cout << "\nPlease input the name of the text file to scan: ";
	cin >> file_name;
	if (file_name.substr(file_name.length() - 4, file_name.length()) != ".txt")
		file_name.append(".txt");

	// open the user file (must be in same dir)
	userFile.open(file_name);
	if (!userFile.is_open())
	{
		cout << "ERROR: Unable to locate file \"" << file_name << "\".\n";
		return 1; // error! [EXIT]
	}

	cout << endl; // spacer

	// display and analyze the contents of the file
	while (!userFile.eof())
	{
		getline(userFile, theText);
		countLines++;
		cout << theText << endl;
		reviewLine(theText);
	}

	// to file
	resultsFile << "====== Analysis of \"" << file_name << "\" ======\n";
	resultsFile << "Line count: " << countLines << endl;
	resultsFile << "Character count: " << countChars << endl;
	resultsFile << "Character count (no spaces): " << countChars_noSpace << endl;
	resultsFile << "Word count: " << countWords << endl;
	// to terminal
	cout << "\nFile analysis saved to \"results.txt\"";

	// close the files
	userFile.close();
	resultsFile.close();

	return 0; // finish! [EXIT]
}