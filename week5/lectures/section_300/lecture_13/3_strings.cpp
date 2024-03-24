// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 13: intro to strings

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name; 
    cout << "enter your name" << endl;
    // cin >> name; 
    // cin cannot accopt space separated input because cin breaks on space or enter

    // getline() -> function is used to accept space separated string input and breaks on enter key
    getline(cin, name); // cin, string_variable
    cout << name << endl;
    

    // length() returns the length of the string - number of characters in a string variable -> int

    // syntax for calling length
    // int var_name = string_variable.functionName(arguments);

    string name = "Rainbow Dash";
    int len = name.length();
    cout << len << endl;

    // R a i n b o w   D a s  h  // 
    // 0 1 2 3 4 5 6 7 8 9 10 11 // -> indices

    // string_variable[index_value]

    cout << name[2] << endl;
    cout << name[7] << endl;
    cout << name[8] << endl;
    cout << name[len - 1] << endl;

    return 0;
}