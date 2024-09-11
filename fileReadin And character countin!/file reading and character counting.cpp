#include <iostream>

#include<fstream> //friver fcreek (what is a "stream" -> of bytes)

#include<string> 

using namespace std;

void doSomething(int a)
{
    //asdfasdf

    cout << a << "\n";
}

void doSomething(int a, int b)
{
    cout << a << "\t" << b << "\n";
}




int main()
{

    //doSomething()

    ifstream fin{ "C:/Users/Work/Downloads/LotRSong.txt" }; //cin -> fin (file input) (app means "append") 
 
    ofstream fout( "LotRSong_Analytics.txt", ios::app ); //this calls the "constructor function"
                                                //of the ofstream "class" 


    if (!fin.is_open())
    {
        cout << "File not found!\n";
        return -1; 
    }

    else
    {
        string currentLine; 

        int lineCount = 0; 

        int charCount = 0; 

        int wordCount = 0; 

        while (!fin.eof()) //end of file -> exclamation mark in programming often means NOT
        {
            getline(fin, currentLine);

            lineCount++; 
            
            charCount = charCount + currentLine.size(); 
            
            cout << currentLine << "\n";
        }

        //go back to the beginning of the input file 
        fin.seekg(ios::beg);

        string currentWord; 
        cout << "\n\n\n\n\n";
        while (!fin.eof())
        {
            //count the number of words
            getline(fin, currentWord, ' ');

            //cout << currentWord << "\n";

            wordCount += 1; 
        }

        fout << "Total number of lines: " << lineCount << "\n";
        fout << "Total number of characters: " << charCount << "\n";
        fout << "Total number of WORDS: " << wordCount << "\n";
    }

    fin.close();


    //cout << "Hello World";

    return 0;
}