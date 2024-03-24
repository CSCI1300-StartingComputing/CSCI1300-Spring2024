// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 12: while loop

#include<iostream>
using namespace std;

/*
event controlled loop
repeat until the condition becomes false
while(condition)
{
    cout << ....
    // some change that will make the condition to become false
    // user input or some variable condition check
}
*/

/*
count controlled loop - 
// loop variable is initialized
while(condition with a loop variable)
{
    // change/update the loop variable -> increment/decrement
}
*/

int main()
{
    // i and j are typical loop varaibles
    // print the first 10 numbers
    int i = 0;
    while(i < 10) 
    {
        cout << i << endl;
        i++; // incrementing the loop variable
    }

    // print the first 10 positive numbers (ascending)
    i = 1;
    while(i <= 10) 
    {
        cout << i << endl;
        i++; // incrementing the loop variable
    }

    // print the first 10 positive numbers (descending)
    i = 10; // loop variable
    while(i > 0) 
    {
        cout << i << endl;
        i--; // decrementing the loop variable
    }

    // print any 10 numbers
    i = 114; // loop variable
    while(i < 125) 
    {
        cout << i << endl;
        i++; // incrementing the loop variable
    }

    int min = 3;
    int max = 17;
    
    // print all the odd numbers between min and max - v1
    while( min <= max) // min < max + 1
    {
        if(min % 2 != 0)
        {
            cout << min << endl;
        }
        // loop update outside your conditional
        // typically the last statement in your loop
        min++; // min += 1;
    }

    // print all the odd numbers between min and max - v2
    min = 3;
    while(min < max)
    {
        cout << min << endl;
        min += 2;
    }
    
    return 0;
}