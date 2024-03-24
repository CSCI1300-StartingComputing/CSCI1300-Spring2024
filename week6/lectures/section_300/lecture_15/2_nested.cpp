// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 15: patterns with nested loops

#include<iostream>
using namespace std;

// if()
// {
//     if()

// }

// while()
// {
//      while()
// }

// for()
// {
//     while()
// }

// do
// {
//     for()
// } while ();


// tabular data -> 4.8

// patterns

int main()
{
    // outer loop -> number of rows
    // inner loop -> number of columns (in each row)
    cout << "Pattern 1" << endl;
    for(int i = 0; i < 4; i++) // outer loop -> 4 times
    { 
        for(int j = 0; j < 4; j++) // inner loop -> 4 times
        {
            cout << "* "; 
        }
        cout << endl; // newline in the outer loop
    }
    cout << endl << endl;

    cout << "Pattern 2" << endl;
    for(int i = 0; i < 4; i++) // outer loop -> 4 times
    { 
        for(int j = 0; j < 4; j++) // inner loop -> 4 times
        {
            if(j % 2 == 0) // print * if we have an even column
            {
                cout << "* ";
            }
            else // print - if we have an odd column
            {
                cout << "- "; 
            }      
        }
        cout << endl; // newline in the outer loop
    }
    cout << endl << endl;

    cout << "Pattern 3" << endl;
    for(int i = 0; i < 4; i++) // outer loop -> 4 times
    { 
        for(int j = 0; j < 4; j++) // inner loop -> 4 times
        {
            if(j % 2 == 0) // print - if we have an even row
            {
                cout << "- ";
            }
            else // print * if we have an odd row
            {
                cout << "* "; 
            }      
        }
        cout << endl; // newline in the outer loop
    }
    cout << endl << endl;

    cout << "Pattern 4" << endl;
    for(int i = 0; i < 4; i++) // outer loop -> 4 times
    { 
        for(int j = 0; j < 4; j++) // inner loop -> 4 times
        {
            if(i == j) // print # if it is on the diagonal
            {
                cout << "# ";
            }
            else // print * otherwise
            {
                cout << "- "; 
            }      
        }
        cout << endl; // newline in the outer loop
    }
    cout << endl << endl;

    cout << "Pattern 5" << endl;
    for(int i = 1; i <= 4; i++) // outer loop -> ? times
    { 
        for(int j = 1; j <= 4; j++) // inner loop -> ? times
        {
            cout << j << " "; 
        }
        cout << endl; // newline in the outer loop
    }
    cout << endl << endl;

    cout << "Pattern 6" << endl;
    for(int i = 1; i <= 4; i++) // outer loop -> ? times
    { 
        for(int j = 1; j <= 4; j++) // inner loop -> ? times
        {
            cout << i << " "; 
        }
        cout << endl; // newline in the outer loop
    }
    cout << endl << endl;

    cout << "Pattern 7" << endl;
    for(int i = 1; i <= 4; i++) // outer loop -> ? times
    { 
        for(int j = 1; j <= i; j++) // inner loop -> ? times
        {
            cout << i << " "; 
        }
        cout << endl; // newline in the outer loop
    }
    cout << endl << endl;

    cout << "Pattern 8" << endl;
    for(int i = 1; i <= 4; i++) // outer loop -> ? times
    { 
        for(int j = 1; j <= i; j++) // inner loop -> ? times
        {
            cout << j << " "; 
        }
        cout << endl; // newline in the outer loop
    }
    cout << endl << endl;

    cout << "Pattern 9" << endl;
    int num = 0;
    for(int i = 0; i < 4; i++) // outer loop -> ? times
    { 
        for(int j = 0; j <= i; j++) // inner loop -> ? times
        {
            cout << num << " "; 
        }
        num++;
        cout << endl; // newline in the outer loop
    }


    return 0;
}