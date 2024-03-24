// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 7: functions: area of a circle

#include<iostream>

using namespace std;

// program to calculate area of circle = pi * r * r

// function definition
/*
return type functionName(function parameter(s) // can be optional)
{
    function code
    return value; // can be optional
    data type of turn value shoudl match teh return type for function
}
*/

// create a function to compute area of a circle
// function definition
double areaOfCircle(double radius) // radius is formal parameter
{
    double area = 3.14 * radius * radius;
    return area; // return the computed area
}

// functions as black boxes
// advantages:
// re-usability
// readability
// put functions in a its own file

int main()
{
    double radius = 0;

    cout << "Enter radius of circle: ";
    cin >> radius;

    double area = areaOfCircle(radius); // function call
    // radius is called function argument/actual parameter
    cout << area << endl;
    return 0;
}