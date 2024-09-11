

#include <iostream>

#include<array> 
#include <vector>

using namespace std; 

void printTheGrid(const vector<vector<char>>& theGrid)
{
	for (auto& row : theGrid)
	{
		for (auto& character : row)
		{
			cout << character;
		}
		cout << "\n";
	}
}

promptPlayerXForMove(vector<vector<)


int main()
{

	//vector<vector<char>> theGrid; 
	vector<vector<char>> theGrid =
	{
		{'a', 'b', 'c'},
		{'d', 'e', 'f'},
		{'g', 'h', 'i'}
	};

	bool gameWon = false; 

	while (!gameWon) //begin main game loop 
	{
		printTheGrid(theGrid);

		promptPlayerXForMove(theGrid); 


	}





}

