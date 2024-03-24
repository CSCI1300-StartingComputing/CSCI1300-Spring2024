// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 3: other data types - bool, char and string

#include <iostream>

using namespace std;

int main()
{
    // boolean -> true/1 and false/0
    bool check = true; // 1
    bool valid = 0; // false

    cout << check << endl << valid << endl;

    // character -> 1 character - w, 3, *,  , ; enclosed in single quotes
    char grade = 'A';
    char letter = 'v';
    char num_1 = '3';
    char symbol = '#';
    // char a = '34'; // not allowed

    cout << grade << endl << letter << endl << num_1 << endl << symbol << endl;

    // string -> multiple characters and enclosed in double quotes
    string word = "Hello!";
    string text = "This is CSCI 1300";

    cout << word << endl << text << endl;

    return 0;
}