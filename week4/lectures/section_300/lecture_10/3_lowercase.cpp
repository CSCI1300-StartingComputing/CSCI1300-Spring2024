// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 10: convert to lower case

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


int main()
{
    testConvertLowerCase();
    return 0;
}