#include<iostream> 
#include <string>


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
	doSomething(); 

	string stringVariable = doSomething(); 
	cout << "The value of stringVariable is : " << stringVariable << "\n";

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


	//doSomething(); //function "call" 



	//arrays
	int nums[5] = { 111, 222, 333, 4444, 5555 };

	for (int i = 0; i <= 5; i++)
	{
		cout << nums[i] << "\n";
	}

	vector<int> //dynamic array (



	return 0; 
}