// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 7: functions

// function - assign a math expression, takes an input and gives an output

// f(x)

#include<iostream>
#include<iomanip> // setprecision()
#include<cmath> // <math.h>
using namespace std;

// function - set of instructions and has a name; can take input(s) and can also return ouput(s)

// 2 types of functions
// 1. built-in functions -> that are written by someone else and we import them into our program using external libraries
// setprecision()

// ()

/*

*/
int main()
{
    // sqrt() -> numeric data type and returns the sqrt of the input
    int x = 10;
    // function output = function_name(input);
    // data type var = function_name(var/value); // function call
    double result = sqrt(78.2);
    cout << result << endl;
    cout << sqrt(x) << endl; // not recommended

    // pow(base, exponent)
    // 2 ^ 4 = 2 * 2 * 2 * 2
    int answer = pow(1, 2);
    cout << answer << endl;
    return 0;
}