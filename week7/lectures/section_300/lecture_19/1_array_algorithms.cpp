// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 19: array operations - remove and insert

#include<iostream>
using namespace std;

// 1. Searching for an element in an array
int findElement(int arr[], int num_elements, int value);

// 2. Print all elements in an array
void printArray(int arr[], int num_elements);

// 3. Removing an element in an array
// return the updated size
int removeElement(int arr[], int num_elements, int value);

// 4. Inserting an element into an array
int insertElement(int arr[], int num_elements, const int MAX_SIZE, int value, int position);

int main()
{
    // size and capacity
    const int MAX_SIZE = 12;
    int curr_size = 10;
    int arr[MAX_SIZE] = {23, 3, 11, 18, 34, 47, 9, 18, 10, 18};

    curr_size = removeElement(arr, curr_size, 18);

    cout << curr_size << endl;
    printArray(arr, curr_size);

    curr_size = insertElement(arr, curr_size, MAX_SIZE, 100, 5);

    cout << curr_size << endl;
    printArray(arr, curr_size);


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

void printArray(int arr[], int num_elements)
{
    for(int i = 0; i < num_elements; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return;
}

 // 1. find the element
 // 2. remove it
int removeElement(int arr[], int num_elements, int value)
{
    // 1. check if the element exists in the array; 
    int position = findElement(arr, num_elements, value);

    // 2. check if the position is a valid value
    if(position >= 0 && position < num_elements)
    {
        // 3. move up elements by 1 position
        for(int i = position; i < num_elements - 1; i++)
        {
            arr[i] = arr[i+1];
        }
        // 4. update size to reflect that we have one less element in the array
        num_elements--;
    }  
    // 5. return the current size of the array back to the calling function
    return num_elements;
}


int insertElement(int arr[], int num_elements, const int MAX_SIZE, int value, int position)
{
    // 1. check if the array has space to store an element
    if(MAX_SIZE == num_elements)
    {
        cout << "Array is at capacity. No space to insert a new element." << endl;
    }
    else
    {
        // 2. move the elements down by 1 position
        for(int i = num_elements; i >= position; i--)
        {
            arr[i + 1] = arr[i];
        }
        // 3. insert element into the specified position
        arr[position] = value;
        // 4. increase size to reflect that we have added a new element
        num_elements++;
    }
    // 5. return the current size of the array back to the calling function
    return num_elements;
}