// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 8: vowels with functions

#include<iostream>

using namespace std;

// check if the input is a vowel or not
// make it do one thing
bool isVowel(char var) // char var is called function parameter
{
    // use a bool variable to store value that will be returned 
    bool result = false;
    if(var == 'a' ||  var == 'e' || var == 'i' || var == 'o' || var == 'u')
    {
        result = true;
    }
    return result;
}

// variation 2
/*
bool isVowel(char var) 
{
    // return statement within the if else block
    if(var == 'a' ||  var == 'e' || var == 'i' || var == 'o' || var == 'u')
    {
        return true;;
    }
    else
    {
        return false;
    }
}
*/

int main()
{
    char var;   
    cout << "Enter a letter: ";
    cin >> var;

    bool result_1 = isVowel(var); // what is var? - function argument
    if(result_1 == true)
    {
        cout << var << " is a vowel" << endl;
    }
    cout << result_1 << endl;
    bool result_2 = isVowel('q'); // q is the function argument
    cout << result_2 << endl;

    // only for functions that return a value
    cout << isVowel('q') << endl; // 0
    
    return 0;
}


// x = 10; y = 20, z = 9;
// Evaluate the following expression if a = 1, b = 12, c = 3, d = 10 and e = 0.

// !( a && ( ( b < d && !e ) || c > 1 ) )
// !( a && ( (0 && 1)) || 1 ) 
// !( a && ( 0 || 1)  ) = !( 1 && 1) =  !(1) = 0