// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 3: working with variables - recap

#include <iostream>

using namespace std;

int main()
{
    // int, float, double
    // = -> assignment operator
    int x = 0;
    // int y = -10;

    // re-assign a value to an existing variable

    x = 100;
    x = -200;

    // float x = 0; // not allowed to re-use an existing variable name
    
    // num_1 = 20; // error: undefined variable

    // compile time error -> syntax is not followed
    // run time error -> when you run the program

    // cout << num_1 << endl; // compile time error
    // cout << "Hollo" << endl; // run time error
    // cout << 1/0 << endl; // run time error
    return 0;
}