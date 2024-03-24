// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 3: arithmetic operators

#include <iostream>

using namespace std;

int main()
{
    // initialize variables x and y
    int x = 10, y = 20;
    // + - * / %

    int sum = 100 + 200;
    cout << "Sum: " << sum << endl;

    sum = x + y;
    cout << "Sum: " << sum << endl;

    int result = x - y;
    cout << "result: " << result << endl;

    result = x * y; // assigning new value to the result variable defined in line 21
    cout << "result: " << result << endl;

    // / -> this division operator computes the quotient
    result = 200 / 10;
    cout << "result: " << result << endl;

    // 200 / 10 -> quotient = 20, remainder = 0
    // % -> mod operator to compute the remainder
    result = 204 % 10;
    cout << "result: " << result << endl;

    // PEMDAS when evaluating expressions
    // x = 10, y = 20
    result = x + y - 10 * 10; 
    cout << "result: " << result << endl;

    result = x + (y - 10) * 10; 
    cout << "result: " << result << endl;

    return 0;
}