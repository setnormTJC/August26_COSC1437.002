#include<iostream>
#include<vector> //a vector is an array whose size can change (grow/shrink) 
#include<algorithm>
#include <list>

#include<array> //this is a STATIC C++ implementation of an array

using namespace std;

void printCCN(const vector<int>& CCN) //pass by constant reference 
{
	//CCN[0] = 1; 

	for (auto& digit : CCN)
	{
		//digit = 3234; 
		cout << digit << " ";
	}
	cout << "\n";
}

int doSteps4Through6(vector<int>&  CCN)
{
	for (int i = 0; i < CCN.size(); i++)
	{
		if (i % 2 == 0)
		{
			CCN[i] = CCN[i] * 2;
		}

		if (CCN[i] > 9)
		{
			CCN[i] = CCN[i] - 9;
		}

	}

	int sum = 0; 
	for (int i = 0; i < CCN.size(); i++)
	{
		sum = sum + CCN[i]; 
	}

	cout << "Sum is: " << sum << "\n";
	return sum; 
}

int main()
{


	//int staticArrayOfNums[5] = { 1, 2, 3, 4, 5 }; //C-Style ("unsafe") static array 
	//staticArrayOfNums[0] = 123; 

	////static means (in this instance) "unchanging" -> the number of items in the list
	//														//cannot change
	////staticArrayOfNums[5] = 123456; 

	//array<int, 3> staticCPPArray = { 11, 22, 33 }; 
	//cout << staticCPPArray[4] << "\n"; //

	//vector<int> nums; 
	////cout << staticArrayOfNums[4759] << "\n";

	//step 1: 
	vector<int> CCN =
	{
		4,9,1,6,4,4,2,0,7,9,0,0,3,5,6,1
	};

	int lastDigit = CCN.back(); 
	cout << "Back: " << lastDigit << "\n";

 	//step 2 (drop the rightmost digit) 
	CCN.pop_back(); 
	printCCN(CCN); 

	//step 3: (reverse) 
	std::reverse(CCN.begin(), CCN.end());

	cout << "After REVERSING the CCN: \n";
	printCCN(CCN); 
	//int CstyleArray[16] = {1, 2, 3, 4, ...}


	int sum = doSteps4Through6(CCN); 
	cout << "After step 4 and step 5: \n";
	printCCN(CCN);

	cout << "Sum mod 10 = " << sum % 10 << "\n";

	//final step 
	if (sum % 10 == lastDigit)
	{
		cout << "Valid\n";
	}
	else
	{
		cout << "INVALID :[\n";
	}


	return 0;
}