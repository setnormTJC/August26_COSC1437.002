#include<iostream> 
#include <string>
#include <vector>


//#include<string> 

using namespace std;

string doSomething()
{
	cout << "Doing something ...\n"; //vaguely menacing 

	return "something that was returned"; 

}


int main()
{

	//functions 
	//doSomething(); 

	//string stringVariable = doSomething(); 
	//cout << "The value of stringVariable is : " << stringVariable << "\n";

	//string name = "Seth";

	//cout << name.length() << "\n";

	

	//review of Progr. Fun. I: 
	//basic output: 
	//cout << "adsfadsf\n";
	//cout << "tabs\t\t\n";
	//cout << "Huzzah!\n";

	//basic input: 
	//prompt user for some data: 
	//cout << "Enter username: \n";
	//string username; //const char* 
	//getline(cin,  username); 
	//cout << "You entered: " << username << "\n";
	
	//if statements (conditionals) also use `switch`

	//_debugbreak
	//std::_debugbreak()
	//if (1 > 3)
	//{
	//	cout << "1 was greater than 3 \n";
	//}

	//else if (1 == 1)
	//{
	//	cout << "The else if condition evaluated to TRUE\n";
	//}

	//else //(1 < 1 )
	//{
	//	cout << "Else body got executed\n";
	//}

	//arrays
	//int nums[5] = { 111, 222, 333, 4444, 5555 }; //C-style 

	//for (int i = 0; i <= 5; i++)
	//{
	//	cout << nums[i] << "\n";
	//}
	//be wary: vectors require more RAM/hard drive space than C-style arrays 
	//2011 
	vector<int> credit_card_number=
	{
		4, 	5, 	5, 	6, 	7, 	3, 	7, 	5, 	8, 	6, 	8, 	9, 	9, 	8, 	5, 	5
	};

	//step 1: 
	//credit_card_number.
	credit_card_number.pop_back(); 

	cout << "Did it (removing the \"last\" element) work?\n";

	for (auto& number : credit_card_number) //range-based for loop
	{
		cout << number << " ";
	}

		
		
		//dynamic array (



	return 0; 
}