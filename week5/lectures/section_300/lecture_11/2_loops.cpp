// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 11: while loop

#include<iostream>

using namespace std;

/*
repeat until the condition becomes false
while(condition)
{
    cout << ....
    // some change that will make the condition to become false
}

*/

int main()
{
    // accept a +ve number from the user;
    int var = 0;
    cout << "Enter a +ve number: ";
    cin >> var;

    while(var <= 0)
    {
        cout << "Not a valid input" << endl;
        // prompt them to enter the input again
        cout << "Enter a +ve number: ";
        cin >> var; // this statement ensures that our loop doesn't run infinitely
    }

    // some computation
    cout << var * 10 << endl;
    return 0;
}