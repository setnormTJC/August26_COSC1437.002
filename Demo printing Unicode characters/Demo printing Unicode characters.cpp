
#include <iostream>

//using namespace std; 

int main()
{
    //system("chcp 65001");

    std::locale::global(std::locale("en_US.UTF-8"));
    std::wcout.imbue(std::locale());

    std::wcout << L"こんにちは世界\n"; //ko-nee-chee-wa, se-kai
    std::wcout << L"नमस्ते, संसार\n"; //namaste, sansara 
    std::cout << "Hello World!\n";
}
