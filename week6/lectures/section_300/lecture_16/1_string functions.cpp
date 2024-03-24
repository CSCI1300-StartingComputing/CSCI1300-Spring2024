// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 16: string functions

#include<iostream>
using namespace std;

// stoi, stod, isdigit .... 

int main()
{
    // int choice;
    // // cin >> choice;

    // string temp;
    // getline(cin, temp); // 2nd argument shoudl always be a string variable

    // // int variable_name = stoi(string_var)
    // choice = stoi(temp); // convert the numeric data stored in string form into an int

    // temp = 123, -3, 5, 46788;
    // temp != 123!, 34right, 

    // stod

    // isdigit(char) -> return a bool
    // 0 - 9

    
    string temp = "abc1";
    bool value = isdigit(temp[3]);
    cout << value << endl;
    return 0;
}