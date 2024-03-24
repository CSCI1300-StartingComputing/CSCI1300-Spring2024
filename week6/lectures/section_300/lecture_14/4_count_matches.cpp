// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 14: string traversal using for loop

#include<iostream>
#include<string>
using namespace std;

// function to count number of instances of a character in the specified string

int countMatches(string var, char search)
{
    unsigned int len = var.length();
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(var[i] == search)
        {
            count++; // count += 1;
        }
    }
    return count;
}

int main()
{
    string state = "mississippi";
    assert(countMatches(state, 's') == 4);
    assert(countMatches("example", 'e') == 2);
    assert(countMatches("example", 'l') == 1);
    assert(countMatches("example", '2') == 0);

    return 0;
}