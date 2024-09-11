//Hayden Beck
//A00567244

#include <iostream>
#include <vector>
using namespace std;

void printCCN(const vector<int>& CCN)
{
	for (auto& digit : CCN)
	{
		cout << digit << " "; 
	}
	cout << "\n";
}

//To check validation of the credit card number
bool LuhnAlgorithm(vector<int>& CCN)
{
	int rightDigit{}; //brace initialization 
	//cout << "right digit: " << rightDigit << "\n";
	int sum{};

	//cout << "BEFORE setting back = rightDigit: " << CCN.back() << "\n";

	//Store rightmost digit for use later
	rightDigit = CCN.back(); 
	//cout << "AFTER setting back = rightDigit: " << CCN.back() << "\n";

	//Get rid of rightmost digit
	CCN.pop_back();

	//Reverse Digits?
	reverse(CCN.begin(), CCN.end());
	


	//Multiply digits in odd positions by 2?
	for (int i = 0; i < CCN.size(); i++)
	{
		//int currentValue = CCN[i]; //x = x - 5; 0 != 0 - 5 

		if (i % 2 == 0) //be wary of 0-based counting 
		{
			CCN[i] = CCN[i] * 2;
		}

		//subtract 9 from any digit greater than 9
		if (CCN[i] > 9) 
		{
			CCN[i] = CCN[i] - 9;
		}


	}


	//Add up all values
	for (int i = 0; i < CCN.size(); i++)
	{
		sum += CCN[i];
	}

	//cout << "Sum: " << sum << "\n";

	//check if sum%10 is equal to rightmost digit
	//cout << "Right digit! " << rightDigit << "\n";
	if (sum % 10 == rightDigit)
	{
		return true;
	}
	else
	{
		return false;
	}


}





int main()
{
	//CCN stands for credit card number
	vector<int> CCN = { 4, 5, 5, 6, 7, 3, 7, 5, 8, 6, 8, 9, 9, 8, 5, 5 };


	if (LuhnAlgorithm(CCN) == true)
	{
		cout << "Valid Credit Card Number!" << endl;
	}
	else
	{
		cout << "Invalid Credit Card Number!" << endl;
	}


	return 0;



}