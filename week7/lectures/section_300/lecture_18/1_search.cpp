// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 18: array operation - finding element(s) in an array

#include<iostream>
using namespace std;

// 1. Searching for an element in an array
int findElement(int arr[], int num_elements, int value);

// 2. Searching for all occurrences of an element in an array 
bool findAllOccurrences(int arr[], int num_elements, int value, int positions[]);

// 3. Print all elements in an array
void printArray(int arr[], int num_elements);

int main()
{
    // size and capacity
    const int MAX_SIZE = 12;
    int curr_size = 10;
    int arr[MAX_SIZE] = {23, 3, 11, 18, 34, 47, 9, 18, 10, 18};
    int pos[5] = { }; // create an empty array to store ouput from findAllOccurrences

    int index = findElement(arr, curr_size, 47);
    cout << "Element found at " << index << endl;

    bool value = findAllOccurrences(arr, curr_size, 18, pos);

    cout << "  " << value << "   " << endl; // returns true if 18 is present in the array

    printArray(pos, 3);

    return 0;
}


int findElement(int arr[], int num_elements, int value)
{
    // 1. create variable to track status of task
    int position = -1; 

    // 2. loop through the array
    for(int i = 0; i < num_elements; i++)
    {
        // 3. check if the current element is what we are looking for
        if(arr[i] == value)
        {
            // 4. update position if match is found
            position = i; 
            // 5. break the loop
            break;
        }
    }
    // 6. return to calling function; -1 if element not found and value between 0 and num_elements - 1 if element is found
    return position;
}

// int arr[MAX_SIZE] = {23, 3, 11, 18, 34, 47, 9, 18, 10, 18};
// output parameter -> int positions[]
bool findAllOccurrences(int arr[], int num_elements, int value, int positions[])
{
    // 1. create variable for returning value
    bool flag = false;
    // 2. loop through the array
    int j = 0; // variable to track for positions/indices of the elements
    for(int i = 0; i < num_elements; i++) 
    {
        // 3. check if the current element is what we are looking for
        if(arr[i] == value)
        {
            // 4. update variable tracking status of tasks
            flag = true;
            // 5. add index of the element to the array
            positions[j] = i;
            // 6. increment the index for the positions array
            j++;
        }
    }
    // return true if we found at least one occurrence of the element in the array and false otherwise
    return flag;
}

void printArray(int arr[], int num_elements)
{
    for(int i = 0; i < num_elements; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return;
}