// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 9: function prototypes

#include<iostream>

using namespace std;

// function prototypes are used to specify the function name, return type and parameter type
double area(double radius);
double volume(double, double);

int main()
{
    double result = area(3);
    cout << result << endl;
}

// function definition implements the function prototypes listed above main
double area(double radius)
{
    return 3.14 * radius * radius;
}

double volume(double radius, double height)
{
    return 3.14 * radius * radius * height;
}