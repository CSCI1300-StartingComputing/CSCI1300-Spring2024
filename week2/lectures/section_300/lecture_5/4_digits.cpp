// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 5: using && opearator in if condition

#include<iostream>

using namespace std;

// 0, 1, 2, .....9 -> single digit

// 10, 11, 12, ... 19 -> double digits

int main()
{
    int num_1 = 0;

    cout << "Enter a number: ";
    cin >> num_1;

    if(num_1 >= 0 && num_1 < 10)
    {
        cout << "Single digit number" << endl;
    }
    else if(num_1 >= 10 && num_1 < 20)
    {
        cout << "Double digit number" << endl;
    }
    return 0;
}