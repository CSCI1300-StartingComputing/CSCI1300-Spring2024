// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 9: volume of a cylinder

#include<iostream>

using namespace std;

// volume of a cylinder
/*
1. accept inputs
2. send user input to function
3. function calculates and returns volume 
4. main checks returned value and prints output
*/


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
    if(radius <= 0  || height <= 0)
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
    double radius = 0, height = 0;

    cout << "Enter radius of cylinder: ";
    cin >> radius;

    cout << "Enter height of cylinder: ";
    cin >> height;

    double result = cylinderVolume(radius, height);
    if(result > 0)
    {
        cout << "Volume of cylinder: " << result << endl;
    }
    else
    {
        cout << "Invalid radius or height"<< endl;
    }

    return 0;
}