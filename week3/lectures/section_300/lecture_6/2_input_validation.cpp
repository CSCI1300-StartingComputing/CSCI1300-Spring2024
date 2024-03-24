// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 6: input validation

#include<iostream>

using namespace std;

int main()
{
    int credit_hours = 0;
    cout << "Enter your credit hours: ";
    cin >> credit_hours;

    // input validation -> 1st check
    // greater than 0
    if(credit_hours <= 0)
    {
        cout << "Please read the instructions. You need to enroll for at least 1 credit hour. Goodbye!" << endl;
        return 1;
        // return code 1 indicates that there was an error in the program
    }
    
    if(credit_hours < 12)
    {
        cout << "You don't have enough credit hours!" << endl;
    }
    else if(credit_hours > 20)
    {
        cout << "You are enrolled above the limit!" << endl;
    }
    else
    {
        cout << "You have enough credit hours!" << endl;
    }
    return 0;
    // return code 0 indicates that the program ran successfully
}