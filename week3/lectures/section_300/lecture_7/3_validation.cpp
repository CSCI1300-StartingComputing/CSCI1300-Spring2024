// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 7: input validation

#include<iostream>

using namespace std;

// function to check if input is valid

bool isValidInput(int num)
{
    if(num > 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int x = 10;
    bool val = isValidInput(x);
    return 0;
}