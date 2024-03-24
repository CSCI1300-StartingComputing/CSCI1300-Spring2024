// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 13: do while loop

#include<iostream>

using namespace std;

// while loop - > event controlled loop or count controlled loop
// for loop -> count controlled loop

/*
initialization
while(condition)
{
    loop body
    update -> increment/decrement
}

for(initialization; condition; update)
{
    // loop body
}
*/

int main()
{
    cout << "while loop demo" << endl;
    int i = 0; // initialization -> stmt 1

    while(i < 4) // condition -> stmt 2
    {
        cout << i << endl; // loop body -> stmt 3
        i++; // update -> stmt 4
    }
    // code tracing
    // i = 0, 
    // 1, 2, 3, 4,
    // i = 1
    // 2, 3, 4,
    // i = 2,
    // 2, 3, 4,
    // i = 3,
    // 2, 3, 4,
    // i = 4
    // 2

    // section 4.3
    cout << endl << endl << "for loop demo" << endl;
    // int j = 0; -> executed exactly one time -> stmt 1
    // j < 4; -> stmt 2
    // j++ -> stmt 3
    for(int j = 0; j < 4; j++)
    {
        cout << j << endl; // stmt 4
    }
    
    // code tracing
    // j = 0
    // 1, 2, 4, 3
    // j = 1
    // 2, 4, 3
    // j = 2
    // 2, 4, 3
    // j = 3
    // 2, 4, 3
    // j = 4
    // 2

    return 0;
}