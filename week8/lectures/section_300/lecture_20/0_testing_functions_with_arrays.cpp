// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 12: testing function that modify arrays

#include<iostream>
using namespace std;



// 1. Print all elements in an array
void printArray(int arr[], int num_elements)
{
    for(int i = 0; i < num_elements; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return;
}

// 2. Inserting an element into an array
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

// 3. test the insertElement function
void testInsertElement1()
{
    const int MAX_SIZE = 12;
    int curr_size = 10;
    int arr[MAX_SIZE] = {23, 3, 11, 18, 34, 47, 9, 18, 10, 18};

    curr_size = insertElement(arr, curr_size, MAX_SIZE, 100, 5);

    // 1. check for size after insert
    assert(curr_size == 11);
    // 2. chack a few elements in the array
    assert(arr[5] == 100);
    assert(arr[curr_size - 1] == 18);
    return;
}

void testInsertElement2()
{
    const int MAX_SIZE = 4;
    int curr_size = 4;
    int arr[MAX_SIZE] = {23, 3, 11, 18};

    curr_size = insertElement(arr, curr_size, MAX_SIZE, 100, 1);

    // 1. check for size after insert
    assert(curr_size == 4);
    // 2. chack a few elements in the array
    assert(arr[1] != 100);
    assert(arr[curr_size - 1] == 18);
    return;
}

void testInsertElement3()
{
    const int MAX_SIZE = 4;
    int curr_size = 4;
    int arr[MAX_SIZE] = {23, 3, 11, 18};

    curr_size = insertElement(arr, curr_size, MAX_SIZE, 100, 9);

    // 1. check for size after insert
    assert(curr_size == 4);
    // 2. chack a few elements in the array
    assert(arr[1] != 100);
    assert(arr[curr_size - 1] == 18);
    return;
}

int main()
{
    // valid insert
    testInsertElement1();
    // array full
    testInsertElement2();
    // invalid position
    testInsertElement3();

    return 0;
}



