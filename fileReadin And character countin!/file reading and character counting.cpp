#include <iostream>

#include<fstream> //friver fcreek (what is a "stream" -> of bytes)

#include<string> 

using namespace std;

int main()
{
    ifstream fin{ "C:/Users/Work/Downloads/LotRSong.txt" }; //cin -> fin (file input) (app means "append") 
 
    ofstream fout{ "LotRSong_Analytics.txt", ios::app };

    //cout << "Hello?\n";
    //fout << "helloasdfasdfasdfa output file?\n";


    if (!fin.is_open())
    {
        cout << "File not found!\n";
        return -1; 
    }

    else
    {
        string currentLine; 

        int lineCount = 0; 

        while (!fin.eof()) //end of file -> exclamation mark in programming often means NOT
        {
            getline(fin, currentLine);
            lineCount++; 


            cout << currentLine << "\n";
        }

        fout << "Total number of lines: " << lineCount << "\n";
    }

    fin.close();


    //cout << "Hello World";

    return 0;
}