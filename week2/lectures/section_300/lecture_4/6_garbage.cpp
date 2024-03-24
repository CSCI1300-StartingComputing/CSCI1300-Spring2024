// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 4: garbage values

#include<iostream>

using namespace std;

int main()
{
    int x; // declaring a variable
    cout << x << endl;  // can print 0 or garbage value
    // numeric data types such as int, float and double may contain garbage values if uninitialzied
    
    int y = 10; // initializing a variable
    cout << y << endl;



    return 0;
}