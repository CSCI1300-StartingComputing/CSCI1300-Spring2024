// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 5: using || opearator in if condition

#include<iostream>

using namespace std;

// check if user input is a vowel: a, e, i, o, u

/**
 * 1. Declare varaible of type char called var
 * 2. Prompt user for input
 * 3. Store user input into variable var
 * 4. Check if var is a vowel; valid vowels are a, e, i, o and u
 *      1. print "It is a vowel"
 * 5. Otherwise
 *      1. print" Not a vowel"
 */

int main()
{
    char var;
    
    cout << "Enter a letter: ";
    cin >> var;
    // var = b;
    // (var == 'a' || 'e' || 'i') -> 0 || 1 || 1
    // a, e, i , o, u
    if(var == 'a' ||  var == 'e' || var == 'i' || var == 'o' || var == 'u')
    {
        cout << "It is a vowel" << endl;
    }
    else
    {
        cout << "Not a vowel" << endl;
    }
    return 0;
}