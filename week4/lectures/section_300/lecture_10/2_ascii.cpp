// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 10: ascii codes

#include<iostream>

using namespace std;

int main()
{
    char var_1 = 'J';
    char var_2 = var_1 + 8; 
    cout << var_2 << endl; // ascii value
    cout << var_1 + 8  << endl; // numeric value

    // always store the result in a character variable to print its equivalent ascii value

    char var_3 = 98; // will store 'b' in var_3
    cout << var_3 << endl;
    
    return 0;
}