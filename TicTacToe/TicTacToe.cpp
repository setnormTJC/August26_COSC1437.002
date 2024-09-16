

#include <iostream>

#include<array> 
#include <vector>

using namespace std; 

void printTheGrid(const vector<vector<char>>& theGrid)
{
	for (auto& row : theGrid)
	{
		//cout << "=";
		for (auto& character : row)
		{
			cout << character;
		}
		cout << "\n";
	}
}

//ampersand -> &
void promptPlayerForMove(vector<vector<char>>& theGrid, string playerID)
{
	//do something!
	if (playerID == "X")
	{
		cout << "Enter the row and column at which you would like to put an X\n";
		int chosenRow, chosenColumn;

		cin >> chosenRow >> chosenColumn;

		//assume a "good" user
		//if (chosenRow > 2 || chosenRow < 0)
		//{
		//	cout << "Can't do that - no update made\n"
		//}

		theGrid[chosenRow][chosenColumn] = 'X';
	}

	else
	{
		cout << "Enter the row and column at which you would like to put an O\n";
		int chosenRow, chosenColumn;

		cin >> chosenRow >> chosenColumn;

		theGrid[chosenRow][chosenColumn] = 'O';
	}

}

bool checkIfGameWon(const vector < vector<char>> & theGrid)
{
	//theGrid[1][1] = 'a'; //illegal

	//horizontal win
	for (int currentRow = 0; currentRow < 3; currentRow++)
	{
		if (theGrid[currentRow][0] == theGrid[currentRow][1] && theGrid[currentRow][1] == theGrid[currentRow][2])
		{
			cout << "WON!\n";
			cout << "On row number: " << currentRow << "\n";
			return true;
		}
	}

	cout << "NOT won :(\n";
	return false; 

	//vertical win

	//two diagonal wins: 
}
int main()
{

	//vector<vector<char>> theGrid; 

	//a grid - > a 2D array 



	vector<char> row1 = { 'a', 'b', 'c'};
	//row1[2] = 'Z';

	//cout << "Row 1 contains the following 3 characters: \n";
	//for (int currentColumn = 0; currentColumn < 3; currentColumn++)
	//for (auto theCurrentCharacter : row1) //"range-based" for loop 
	//{
	//	cout << theCurrentCharacter << " "; 
	//}

	//cout << "Row 1, column 1 contains: " << row1[0] << "\n";

	vector<vector<char>> theGrid =
	{
		row1,
		{'d', 'e', 'f'},
		{'g', 'h', 'i'}
	}; 

	//theGrid.

	bool gameWon = false; 

	while (!gameWon) //begin main game loop 
	{
		printTheGrid(theGrid);
		
		string playerX = "X";
		string playerO = "O";

		promptPlayerForMove(theGrid, playerX); 


		printTheGrid(theGrid);
		gameWon = checkIfGameWon(theGrid); //an example of one "win" condition:
					//theGrid[0][0] == theGrid[0][1] == theGrid[0][2]

		//prompt player O
		promptPlayerForMove(theGrid, playerO);

		//check if won again 

	}





}

