// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 5: if else if statement

#include<iostream>

using namespace std;

// if else if statememt/block/conditional
// if(condition 1) 
// {
//     condition evaluates to true
//     do something
// }
// else if(condition 2)
// {
//     do something else
// }
// else if(condition 3)
// {
//     do something else
// }
// else 
// {
    
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
    else if(credit_hours > 20)
    {
        // 6. Print message if credit hours is over than limit
        cout << "You are enrolled above the limit!" << endl;
    }
    else
    {
        // 7. Print message if credits enrolled meets the criteria
        cout << "You have enough credit hours!" << endl;
    }

    // variation 2
    // test values: 12, 20, 21, 10, 15

    // if(credit_hours < 12 && credit_hours > 20) // 1 && 0 = 0
    // {
    //     cout << "do not meet the limit. read the instructions" << endl;
    // }
    // else
    // {
    //     cout << "You have enough credit hours!" << endl;
    // }
    
    return 0;
}