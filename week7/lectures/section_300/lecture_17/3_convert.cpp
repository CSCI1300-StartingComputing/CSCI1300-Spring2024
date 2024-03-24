// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 17: functions that modify arrays (passed by reference)

#include<iostream>
using namespace std;

// function that accepts array of celsius values and converts to fahrenheit

int convertTemperature(double arr1[], double arr2[], int num_elements)
{
    int val = 1;
    // check if array has any elements
    if(num_elements <= 0)
    {
        val = -1;
    }
    else // if array has elements then traverse through it and convert celsius values to fahrenhiet; then store them in arr2
    {
        for(int i = 0; i < num_elements; i++)
        {
            // f = (c * 1.8)+ 32
            arr2[i] = (arr1[i] * 1.8)+ 32;
        }
        val = 0;
    }
    return val;
}

int main()
{
    const int SIZE = 4;
    double celsius[SIZE] = {23.4, 11, -2, 6};

    double fahrenheit[SIZE];

    // print fahrenheit array before function call
    for(int i = 0; i < SIZE; i++)
    {
        cout << fahrenheit[i] << endl;
    }
     
    int val = convertTemperature(celsius, fahrenheit, SIZE); // function call
    cout << val <<endl;

    // if val is -1 then print an appropriate statement to the user

    // print fahrenheit array after function call -> array is modified as arrays are passed by reference
    for(int i = 0; i < SIZE; i++)
    {
        cout << fahrenheit[i] << endl;
    }
    return 0;
}