// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 11: testing functions that return double

#include<iostream>
#include<cmath>
#include<cassert>
#include<iomanip>

using namespace std;

// default parameter - defined in the parameter list
bool doublesEqual(double a, double b, const double epsilon = 1e-14) 
{
    double c = a - b;
    return c < epsilon && -c < epsilon;
}

// common error 3.3

int main()
{
    double var = sqrt(2); // 1.41...
    double result = var * var; // 2
    cout << fixed << setprecision(16) << var << "   " << result << endl;

    assert(result == 2); // will fail as 2.0000000000000004 != 2

    assert(doublesEqual(result, 2)); // will pass
    return 0;
}


