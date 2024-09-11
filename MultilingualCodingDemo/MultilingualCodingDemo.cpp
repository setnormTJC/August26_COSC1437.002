

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

#include<fstream>

#include<string>

using namespace std;

int main() {

    ifstream fin{ "Text.txt" };

    //string line;
    //while (!fin.eof())
    //{
    //    getline(fin, line); 
    //    cout << line << "\n";
    //}

    //fin.seekg(fin.beg);

    //cout << "Going back to beginning...?\n";
    //getline(fin, line);
    //cout << line << "\n";

    // 1. 各課題の平均をユーザーから取得
    double labAverage, quizAverage, exam1Average, finalExamAverage;

    //https://www.google.com/search?client=firefox-b-1-d&q=spaces+in+japanese

    double 各 = 3; 
    cout << "here:"<<  各 << endl;


    cout << "Enter the average score for Labs: ";
    cin >> labAverage;
    cout << "Enter the average score for Quizzes: ";
    cin >> quizAverage;
    cout << "Enter the average score for Exam 1: ";
    cin >> exam1Average;
    cout << "Enter the average score for the Final Exam: ";
    cin >> finalExamAverage;

    // 2. 各課題の重みを使用して総合スコアを計算
    double finalScore = (labAverage * 0.60) +
        (quizAverage * 0.15) +
        (exam1Average * 0.10) +
        (finalExamAverage * 0.15);

    char grade;

    // 3. 総合スコアを表示
    cout << fixed << setprecision(2);
    cout << "Your final score is: " << finalScore << endl;

    // 4. 文字による等級を表示
    if (finalScore >= 90)
    {
        grade = 'A';
    }
    else if (finalScore >= 80)
    {
        grade = 'B';
    }
    else if (finalScore >= 70)
    {
        grade = 'C';
    }
    else if (finalScore >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "Your final grade is: " << grade << endl;

    return 0;
}
