// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 17: copying arrays

#include<iostream>
using namespace std;

int main()
{   
    // creates an array of doubles that can store 12 elements/pieces of information
    const int SIZE = 2;
    double sales_2023[SIZE] = {12, 23}; // declaring a double array of size 12
    // you have to list the size at the time of declaration
    // size cannot be modified after declaration

    int x = 10;
    int y;

    y = x; // copy value stored in x into y

    double sales_2024[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        cout << sales_2024[i] << endl;
    }

    // sales_2024 = sales_2023; // cannot copy an entire array with the assignment operator (=)

    cout << sales_2023 << endl; // prints the address of the sales_2023 array

    // copying arrays -> use a loop, traverse through the array and copy each element over to the new array

    for(int i = 0; i < SIZE; i++)
    {
        sales_2024[i] = sales_2023[i];
    }

    // print array to verify if copy operation was successful
    for(int i = 0; i < SIZE; i++)
    {
        cout << sales_2024[i] << endl;
    }

    return 0;
}