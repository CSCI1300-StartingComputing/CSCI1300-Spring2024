// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 8: scope

#include<iostream>

using namespace std;

double value = 200; // GLOBAL VARIABLE/SCOPE -> DANGEROUS
// can be accessed anywhere/inside any function within this program

// scope = area within which we have access to something (variable)

// when a function prints something on the terminal
double areaOfCircle(double radius)
{
    // radius has local scope within areaOfCircle
    double area = 3.14 * radius * radius;
    return area;
    // area and radius can only be accessed inside this function
    // cout << x << endl;
}

int main()
{
    // radius = 10; // cannot access radius in main() as radius is defined inside areaOfCircle(0)
    double r = 12;
    int x = 10; // only accessible from line 27 to end of this function
    // x has local scope within main
    cout << areaOfCircle(r) << endl;
    // you cannot call a void function inside cout
    if ( x >= 10)
    {
        cout << "inside if" << endl;
        int z = 20; // z has local scope within the if condition
        int x = 20;
        // new variable called x within the if condition -> different scope than the x variable defined in line 27
        x = 15;
        cout << x << endl; 
        
    }
    cout << x << endl; // 15 or 10
    // cout << z << endl; // cannot access z here as z is defined inside the if condition
    return 0;
}