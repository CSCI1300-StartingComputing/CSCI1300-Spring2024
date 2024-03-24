// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 4: implicit vs. explicit casting

#include<iostream>

using namespace std;

int main()
{
    int x = -10.5; // implicit casting to an int
    // will cause an error when compiled with the flags -Wall -Werror and -Wpedantic
    cout << x << endl;

    // explicit casting
    double y = 100.56;
    int z = int(y); // old c style syntax
    int a = static_cast<int>(y); // c++ syntax (preferred)

    double b = static_cast<double>(x); /// -10.00

    return 0;
}