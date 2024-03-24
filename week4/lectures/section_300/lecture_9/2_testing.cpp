// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 9: testing with assert statements

#include<iostream>
#include<cassert> //assert.h

// assert( function return == expected value)

using namespace std;

// unit testing - testing 1 block of code

/**
 * @brief function to compute volume of the cylinder
 * 
 * @param radius - double; radius of cylinder
 * @param height 
 * @return double - volume of cylinder
 */
double cylinderVolume(double radius, double height)
{
    // pi r r h
    if(radius <=0  || height <= 0)
    {
        return 0;
    }
    else
    {
        const double PI = 3.14;
        double volume = PI * radius * radius * height;
        return volume;
    } 
}

int main()
{
    // variation 1
    // test case 1: valid radius and height
    double result = cylinderVolume(2, 3); // result = 37.68 
    assert( result == 37.68);
    cout << "Test case 1: passed" << endl;

    // variation 2
    // test case 2: invalid radius
    assert(cylinderVolume(0, 3) == 0); 
    cout << "Test case 2: passed" << endl;

    // test case 3: invalid height
    assert(cylinderVolume(2, 0) == 0);
    cout << "Test case 3: passed" << endl;
    // asserts can only test functions that don't have void return type

    // Program will be terminated if an assertion fails
    return 0;
}