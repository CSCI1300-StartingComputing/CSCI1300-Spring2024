// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 10: vowels with multiple functions, lower and upper case input

#include<iostream>

using namespace std;

// function to convert a uppercase letter to its equivalent lower case form
// A -> a
// d -> d
char convertLowerCase(char letter)
{
    // when do we convert -> if variable letter is between A through Z
    if(letter >= 65 && letter <= 90)
    {
        // convert to lower case
        letter = letter + 32;
    }
    // if condition input is not between A through Z then we return the original input back to the calling function
    return letter; 
}

void testConvertLowerCase()
{
    // valid successful cases
    assert(convertLowerCase('S') == 's');
    assert(convertLowerCase('Z') == 'z');

    // invalid/boundary cases
    assert(convertLowerCase('w') == 'w');
    assert(convertLowerCase('5') == '5');
    assert(convertLowerCase('%') == '%');
    cout << "All test cases have passed for convertLowerCase" << endl;
}

bool isVowel(char var)
{
    // call lower case to convert any upper case input
    var = convertLowerCase(var);
    if(var == 'a' || var == 'e' || var == 'i' || var == 'o' || var == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void testIsVowel()
{
    // valid successful cases
    assert(isVowel('A') == true);
    assert(isVowel('e') == true);

    // invalid/boundary cases
    assert(isVowel('q') == false);
    assert(isVowel('D') == false);
    assert(isVowel('4') == false);
    assert(isVowel('%') == false);
    cout << "All test cases have passed for isVowel" << endl;
}

int main()
{
    testConvertLowerCase();
    testIsVowel();
    return 0;
}