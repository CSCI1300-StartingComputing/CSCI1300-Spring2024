// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 4: integer division

#include<iostream>

using namespace std;

int main()
{
    // Dividing two variables of type int:
    int a = 20;
    int b = 17;

    cout << "Dividing two integer variables: " << a / b << endl; // 1

    // Dividing two variables of type double:
    double x = 20;
    double y = 17;

    cout << "Dividing two double variables: " << x / y << endl; // 1.something

    // Dividing two variables of different types:

    cout << "Dividing two variables of different types:" <<  a / y <<  endl; // 1.


    cout << "Dividing two variables of different types:" <<  x / b << endl; // 1.

    // int a,b;
    double c;

    a = 23;
    b = 3;
    c = static_cast<double>(a/b); // 7
    cout << "23/3 = " << a/b << endl; // 7
    cout << "23.0/3 = " << static_cast<double>(a)/b << endl; // 7.
    cout << "23/3.0 = " << a / static_cast<double> (b) << endl; // 7.66
    cout << "23/3 = " << static_cast<double> (a/b) << endl; // 7
    cout << "c = " << c << endl;
    cout << "c/2 = " << c/2 << endl; // 3.5
    cout << "(a/b) / 2 = " << static_cast<double>(a/b) / 2 << endl; // 3.5
    cout << "(a/b) / 2 = " << static_cast<double>((a/b) / 2) << endl; // 3
    cout << "a/b/2 = " << a/b/2 << endl; // 3
    cout << "(5/6/2.0/4) = " << 5/6/2.0/4 << endl; // 0 
    return 0;
}
