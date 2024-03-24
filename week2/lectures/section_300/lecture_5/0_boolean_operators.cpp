// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 5: operator evaulation examples

#include <iostream>
using namespace std;

// boolean operators

int main()
{
    int y = -23;
    int x = 17;

    bool var1 = ( x < y || x != 0); // 
    cout << "the value of var1 is: " << var1 << endl;

    cout << "example evaluations" << endl;

    cout << "(0 < 200 && 200 < 100) = " << (0 < 200 && 200 < 100) << endl; // 
    cout << "(0 < 200 || 200 < 100) = " << (0 < 200 || 200 < 100) << endl; // 
    cout << "(0 < 200 || 100 < 200) = " << (0 < 200 || 100 < 200) << endl; // 
    cout << "(0 < 200 < 100) = " << (0 < 200 < 100) << endl; // 
    // 
    cout << "!(0 < 200) = " << !(0 < 200) << endl; // 

    x = 1; // update value of x
    cout << "(x == 1 && 10 > 0) = " << (x == 1 && 10 > 0) << endl; // 1
    cout << "((0 < x && x < 100) || x == -1) = " << ((0 < x && x < 100) || x == -1) << endl; // 
    cout << "(((!0) < x && x < 100) || x == -1) = " << (((!0) < x && x < 100) || x == -1) << endl; // 

    
    return 0;
}