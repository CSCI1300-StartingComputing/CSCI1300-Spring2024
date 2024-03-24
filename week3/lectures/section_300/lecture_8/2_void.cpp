// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 8: void data type

#include<iostream>

using namespace std;

// void is a data type that can only be used with functions
// returns nothing

// when a function prints something on the terminal
void areaOfCircle(double radius)
{
    double area = 3.14 * radius * radius;
    // prints the computed area
    cout << "Area: " << area << endl;
    // void return type as function prints the area instadof returning back to calling function
}

int main()
{
    double radius = 12;
    areaOfCircle(radius); // functions with void return type cannot called within cout
    areaOfCircle(8);
    return 0;
}