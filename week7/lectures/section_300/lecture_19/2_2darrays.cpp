// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 19: 2D arrays

#include<iostream>
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLS = 4;

    int arr[ROWS][COLS];// declared a 2D array

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << "   ";
        }
        // go to a new line after printing each row
        cout << endl;
    }

    int arr1[ROWS][COLS] = { { }, { }, { } }; // declare and initialize array with all 0's

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << arr1[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;

    // internally a 2D array is made up of multiple 1D arrays
    int arr2[ROWS][COLS] = {  {2, 3, 5, 6}, // row 0
                            {4, 6, 10, 2}, // row 1
                            {3, 2, 1, 8}}; // row 2

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << arr2[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;

    int arr3[ROWS][COLS] = { {1, 2, 3, 4},
                            {}, {}};

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << arr3[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;

    int arr4[ROWS][COLS] = { };
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << arr4[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;

    int arr20[10][10][10]; // 3 dimensional array
    return 0;
}