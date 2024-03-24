// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 9: testing with asserts inside a function

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

// write a function to test your functions
void testCylinderVolume()
{
    // valid case
    assert(cylinderVolume(2, 3) == 37.68);
    assert(cylinderVolume(12, 30) == 13564.8); //large input values

    // invalid case
    assert(cylinderVolume(-2, 3) == 0);
    assert(cylinderVolume(2, -3) == 0);
    assert(cylinderVolume(0, 3) == 0); 
    assert(cylinderVolume(2, 0) == 0);
}


int main()
{
    testCylinderVolume();
    cout << "All test cases have passed for cylinderVolume()" << endl;

    return 0;
}