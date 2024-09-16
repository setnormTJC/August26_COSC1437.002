#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <random>
#include <chrono>

using namespace std;

int main()
{
    vector<string> ingredintsList = 
    { 
        "spianch, ",
        "chedder cheese, ", 
        "american cheese, ", 
        "rost beef, ", 
        "chicken, ", 
        "Ham, " 
    };

    //unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    //shuffle(ingredintsList.begin(), ingredintsList.end(), std::default_random_engine(seed));

    //std::cout << "shuffled elements:";
    //for (string& x : ingredintsList) std::cout << ' ' << x;

    srand(time(0)); 

    int randomNumberOfIngredients = (rand() % ingredintsList.size()) + 1; 


    cout << "random number is: " << randomNumberOfIngredients << "\n";

    cout << "Sandwich is ... \n";
    string sandwichIngredients = ""; 

    for (int i = 0; i < randomNumberOfIngredients; i++)
    {
        sandwichIngredients = sandwichIngredients + ingredintsList[i]; 

    }

    cout << sandwichIngredients << "\n";
}
