// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 20: 2D arrays

#include<iostream>
#include<iomanip>
using namespace std;

// can only process char arrays with 8 columns of data
int countEmptySpots(char arr[][8], int rows)
{
    int count = 0;
    // approach 1
    for (int i = 0; i < 8; i++) // process each column
    {
        for (int j = 0; j < rows; j++) // process each row
        {
            if(arr[j][i] == 'e')
            {
                count++;
            }
        }
    }
    
    // approach 2
    // for (int i = 0; i < 8; i++) // process each row
    // {
    //     for (int j = 0; j < rows; j++) // process each column
    //     {
    //         if(arr[i][j] == 'e')
    //         {
    //             count++;
    //         }
    //     }
    // }

    return count;
}

int main()
{
    const int ROWS = 3;
    const int COLS = 8;
    char parking[ROWS][COLS] = {
        { 'e', 'p', 'e', 'e', 'e', 'p', 'e', 'e'},
        { 'e', 'p', 'e', 'p', 'e', 'e', 'e', 'e'},
        { 'e', 'p', 'e', 'e', 'p', 'p', 'p', 'e'}
    };
    // call function to count empty parking spots
    int value = countEmptySpots(parking, ROWS);
    cout << value << endl;
    return 0;
}