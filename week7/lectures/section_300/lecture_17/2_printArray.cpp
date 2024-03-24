// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 17: arrays in functions

#include<iostream>
using namespace std;

// a function can never return an array
// a function that accepts an array will always have 2 parameters -> array and its size

// prints the elements in array
// can only accept integer arrays
// always have empty [] after array in function parameter
void printArray(int arr[], int num_elements)
{
    for(int i = 0; i < num_elements; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return;
}

// create another function that accepts a double array and print it
// print double array
void printArray(double arr[], int num_elements)
{
    for(int i = 0; i < num_elements; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return;
}


/* function overloading - functions can have the same name if:
1. Same number of parameters but they different data types
2. Different number of parameters
*/

int main()
{  
    int arr1[4] = {1, 2, 3, 4};

    const int SIZE = 5;
    int arr2[SIZE];

    // calls the printArray function that accepts a double array
    printArray(arr1, 4); // don't use [] when passing an array in function call
    printArray(arr2, SIZE);

    // int arr3[] = {1, 2}; // automatically assigns a size of 2 to arr3

    double arr3[3];
    // calls the printArray function that accepts a double array
    printArray(arr3, 3);

    return 0;
}