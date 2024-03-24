// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 4: integer division examples

#include<iostream>

using namespace std;

int main()
{
    int x = 11, y = 2;
    double z = x / y; // int divide by int will result in an integer
    cout << z << endl;

    double a = 11, b = 2; // double / double will result in a double
    cout << a/b << endl;

    double c = 11;
    int d = 2;
    cout << c/d << endl; // double/int will result in a double
    
    double result = 0;

    result = 2 + 31 / 4; // pemdas - division operation first; int / int will result in an int + int.
    cout << result << endl;

    result = 2 + 31.0 / 4; // adding .0 to numbers will result in double
    cout << result << endl;



    return 0;
}