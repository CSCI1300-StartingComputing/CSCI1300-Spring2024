// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 3: console input

#include <iostream>

using namespace std;

int main()
{
    // cout - print stuff -> <<
    // accept input
    // cin -> console input -> >> extraction operator
    
    // 1. create a variable to store the info you are accepting from the user

    int num_1; // define/declare a variable
    int num_2, num_3;
    int num_4 = 10; // initialize a variable

    // prompt for input with cout
    cout << "Enter 4 numbers: ";
    cin >> num_1; // cin process data until it sees a whitespace -> space or enter
    cin >> num_2;
    cin >> num_3 >> num_4;

    cout << num_1 << endl << num_2 << "         " << num_3  << "   "<< num_4 << endl;

    return 0;
}