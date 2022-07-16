/*
Prolog
   a. 	Program Description: Grade Letter Conversion
   b. 	Author: Brandon Wu
   c. 	Date: 06-28-22
   d. 	Input variables: letter_grade
   e. 	Process Flow: Operations, string manipulation, conditional statements
   f. 	Output variables: score_sum
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <list>

using namespace std;

int main()
{
    string letter_grade;
    int grade_number = 0;
    cout << "What is your grade: ";
    cin >> letter_grade;
    int len = letter_grade.length();
    int counter = 0;
    double score_sum = 0;
    while (counter <= len){
        string letter = letter_grade.substr(counter, 1);
        counter += 1;
        if (letter == "A"){
            score_sum += 4;
        }
        else if (letter == "B"){
            score_sum += 3;
        }
        else if (letter == "C"){
            score_sum += 2;
        }
        else if (letter == "D"){
            score_sum += 1;
        }
        else if (letter == "F"){
            score_sum += 0;
        }
        else if (letter == "+"){
            score_sum += 0.3;
        }
        else if (letter == "-"){
            score_sum += -0.3;
        }
        else {
            score_sum = 0;
        }
    }
    if (score_sum < 0.5){
        score_sum = 0;
    }
    else if (score_sum > 4){
        score_sum = 4;
    }
    if (score_sum > 0){
        cout << fixed << setprecision(1) << "Your number score is : " << score_sum << endl;
    }
    else{
        cout << "Not a valid grade" << endl;
    }
    return (0);
}