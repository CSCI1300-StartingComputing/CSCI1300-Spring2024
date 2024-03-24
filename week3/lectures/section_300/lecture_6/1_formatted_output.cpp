// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 6: formattted output

#include<iostream>
#include<iomanip> // input and output manipulators; setprecsion()
using namespace std;

int main()
{
    // double data type has 15 digit precision
    double x = 23, y = 3;
    cout << 23/4.0 << endl;
    cout << fixed << setprecision(2); // applicable after line 14

    cout <<"Demo: " << x/y << endl;

    cout << setprecision(5) << 23.0/4 << endl;
    return 0;
}