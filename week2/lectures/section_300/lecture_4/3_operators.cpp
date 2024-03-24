// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 4: relational operators

#include<iostream>

using namespace std;

// relational operators -> >, <, ==, !=, >=, <=

int main()
{
    // boolean variables will evaluate to true/1 or false/1
    int x = 100, y = 20 , z = 20;

    bool var = 0;
    
    var = y >= z; 
    cout << var << endl;

    var = y == z; 
    cout << var << endl;

    var = y != x; 
    cout << var << endl;

    var = x < z; 
    cout << var << endl;

    return 0;
}