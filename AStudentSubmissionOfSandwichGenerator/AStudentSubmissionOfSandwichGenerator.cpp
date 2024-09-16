#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdlib>

std::string ing = "";
char answer = 'a';
int numOfIng = 0;

int main()
{
    std::string ingredient[16] = { "spinach", "ham", "cheddar cheese","turkey","lettuce","bolonge","salami","tomato", "onion","american cheese","pepper jack cheese", "colby cheese","Mayonaise","mustard","vinegar","ketchup" };
    std::cout << "Enter number of ingredients you want on your sandwich(16 max!): ";
    std::cin >> numOfIng;

    for (int i = 0; i < numOfIng; i++)
    {
        srand(time_t(0));
        std::cout << ingredient[ing[rand() % 16]] << std::endl;
    }
    std::cout << "Would you like this sandwich?(Y/N):";
    std::cin >> answer;
    if (answer == 'n' || answer == 'N')
    {
        main(); //!
    }

    else
    {
        std::cout << "Enjoy your sandwich!";
        std::cout << std::endl;
    }
}
