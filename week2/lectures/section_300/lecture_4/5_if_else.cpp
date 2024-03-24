// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 4: if else statement

#include<iostream>

using namespace std;

// if else statememt/block/conditional
// if(condition) 
// {
//     condition evaluates to true
//     do something
// }
// else
// {
//     do something else
// }

// program to check if you are a full time student
int main()
{
    // 1. Create variable to store credit hours
    int credit_hours = 0;

    // 2. Get input -> prompt user for number of enrolled credit hours
    cout << "Enter your credit hours: ";

    // 3. Store user input in credit_hours variable
    cin >> credit_hours;

    // 4. Check if enrolled hours meets the limit
    if(credit_hours < 12)
    {
        // 5. Print message if credit hours is less than limit
        cout << "You don't have enough credit hours!" << endl;
    }
    else
    {
        // 6. Print message if credits enrolled meets the criteria
        cout << "You have enough credit hours!" << endl;
    }
    
    return 0;
}