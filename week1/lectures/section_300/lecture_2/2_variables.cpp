// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 2: working with variables

#include<iostream>

using namespace std;

int main()
{
    // a variable is used to store info
    // a variable must have a type and a name. 
    // you can assign it an initial value but it's not mandatory

    // syntax for creating variables
    // data_type variable_name; -> variable definition/declaration
    // data_type variable_name = initial_value; -> variable initialization
    
    // numeric, words, sentences, binary, decimals etc...

    
    // int course_number; // snake case naming convention for variable names
    // always use _ if you have multiple words

    // int - integer
    int score = 100;
    int temp = -11;

    cout << score << endl;
    cout << temp << endl;

    // decimal -> float and double
    float cost = 2.99; // 4 bytes of data
    double price = 24.456789876556; // 8 bytes of data

    cout << cost << endl;
    cout << price << endl;

    return 0;
}