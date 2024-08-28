#include<iostream> 
#include <string>


//#include<string> 

using namespace std;

int doSomething()
{
	cout << "Doing something...\n";

	return 1; 
}

 

int main()
{
	string name = "Seth";

	cout << name.length() << "\n";

	

	//review of Progr. Fun. I: 
	//basic output: 
	cout << "adsfadsf\n";
	cout << "tabs\t\t\n";
	cout << "Huzzah!\n";

	//basic input: 
	//prompt user for some data: 
	cout << "Enter username: \n";
	string username; //const char* 
	getline(cin,  username); 
	cout << "You entered: " << username << "\n";
	
	//if statements (conditionals) also use `switch`

	


	//functions 

	//arrays




	return 0; 
}