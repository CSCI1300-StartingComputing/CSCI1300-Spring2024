// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 13: do while loop

#include<iostream>

using namespace std;

// do while loop

/*
while(condition)
{
    loop body
}

do
{
    // loop body -> executed at least 1 time
}while(condition);
*/

// accept user input until user enters 0

int main()
{
    int num_1 = -1; 

    // using while loop -> num_1 has to be initizalized to a non-zero value
    while(num_1 != 0)
    {
        cout << "Enter a number. Enter 0 to stop" << endl;
        cin >> num_1;
    }

    // using while loop - num_1 can be initizalized to any value
    do
    {
        cout << "Enter a number. Enter 0 to stop" << endl;
        cin >> num_1;
    }while (num_1 != 0);
    
    cout << "end of program" << endl;
    return 0;
}