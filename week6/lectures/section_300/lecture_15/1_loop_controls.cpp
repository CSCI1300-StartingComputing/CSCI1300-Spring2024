// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 15: loop controls

#include<iostream>
using namespace std;

// break and continue

int main()
{
    for(int i = 0; i < 6; i++)
    {   // i = 0, 1, 2
        if(i == 2)
        {
            break; // terminate the loop; only inside the loop, switch
        }
        cout << i << endl; // 0 1
    }

    for(int i = 0; i < 6; i++)
    {   // i = 0, 1, 2, 3, 4
        if(i == 2)
        {
            continue; // terminates the current iteration of the loop
            // any line after continue will be skipped and the update statement will be executed
        }
        cout << i << endl; // 0 1 3 4 5 
    }

    return 0;
}