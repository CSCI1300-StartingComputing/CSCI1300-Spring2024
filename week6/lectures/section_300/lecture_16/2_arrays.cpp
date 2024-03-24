// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 16: arrays

#include<iostream>
using namespace std;

int main()
{
    double sales; // declaring a double variable
    sales = 90; // initializing the variable defined in line 10
    
    // creates an array of doubles that can store 12 elements/pieces of information
    const int SIZE = 12;
    double sales_2023[SIZE]; // declaring a double array of size 12
    // you have to list the size at the time of declaration
    // size cannot be modified after declaration

    cout << sales_2023[0] << endl; // print the first element in sales_2023

    sales_2023[0] = 56.4; // assign 56.4 to the first element in sales_2023 array

    cout << sales_2023[0] << endl; // print the first element in sales_2023

    cout << sales_2023 << endl; // prints the address of the sales_2023 array

    // need a loop to print the elements of an array
    for(int i = 0; i < SIZE; i++)
    {
        cout << sales_2023[i] << endl;
    }

    // initialize all elements in an array
    int num = 10; // declare an int variable and initialize it to 10

    // declare an int array of size 3 and initialize the elements
    int arr1[3] = {1, 2, 3};

    // numeric arrays can contain garbage values if uninitialized
    // print elements in the array
    cout << "Array 1" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr1[i] << endl;
    }

    // initialize all elements to 0
    // method 1
    int arr2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // declare an int array and initialzie all elements to 0 within { }

    // print elements in the array
    cout << "Array 2" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i] << endl;
    }

    // method 2
    int arr3[10]; // decalre an int array of size 10
    // var_name[index] = value
    // use a loop to initialize all elements to 0
    for(int i = 0; i < 10; i++)
    {
        arr3[i] = 0;
    }

    // print elements in the array
    cout << "Array 3" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr3[i] << endl;
    }

    // method 3
    int arr4[3] = { }; // declare an int array of size 3 and initialize all elements to 0 with { }
    // can only be used at the time of declaration

    // print array
    cout << "Array 4" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr4[i] << endl;
    }

    // declare an int array of size 15 and only initialze the first 2 elements
    int arr5[15] = {1, 2};
    cout << "Array 5" << endl;
    // print array
    for (int i = 0; i < 15; i++)
    {
        cout << arr5[i] << endl;
    }

    char letters[26] = {'a', 'b'};
    // range of letters -> 0 to 25
    letters[2] = 'c';
    letters[0] = 'A';

    // array of strings
    string course_codes[4] = {"csci", "appm", "phys", "geol"};
    cout << course_codes[0] << endl; // csci or c

    // array of booleans
    bool check[2] = {1, 0};
    bool check1[2] = {true, false};

    // bounds error -> segmentation fault

    int arr10[5];
    for(int i = 0; i < 10000; i++)
    {
        cout << arr10[i] << endl;
    }

    return 0;
}