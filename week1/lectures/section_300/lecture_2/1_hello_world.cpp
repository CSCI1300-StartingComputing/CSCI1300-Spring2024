// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 2: our first program

#include<iostream>
// single line comments -> add any info, small notes; whatever you want to jot down notes on? to help you remember what you wrote 2 days ago?

// #include -> directive -> include libraries that have existing code

// iostream -> input and ouput stream

using namespace std;
// organized code - input/output

// main -> program actually begins it execution
int main()
{
    // cout -> console output -> print/show messages to the user
    // << -> insertion operator
    // endl -> adds a new line on the terminal
    // ; -> what a period is in english

    cout << "Hello World!" << endl;
    cout << "hello csci 1300" << endl;
    cout << "too early in the morning" << endl;
    return 0;

    // return is an indicator that we have reached the end of the program
    // no code after the reurn statement
}