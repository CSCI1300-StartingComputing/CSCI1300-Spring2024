// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 5: logical operators demo

#include<iostream>

using namespace std;

// > < != == <= >=

// logical/boolean operators - && || !

int main()
{
    int x = 10, y = 22, z = 20;
    bool var = false;

    var = (x < y) && (y > z) && 1 < 2 && 8 > 9; // 1 && 1 && 1 && 0 = 0
    cout << var << endl;

    var = (x < y) || (y < z); // 1 || 0 = 1
    cout << var << endl;

    // ! NOT negation
    bool a = false;
    cout << !a << endl; // true
    var = !((x < y) || (y < z)); // !(1 || 0) = !1 = 0
    cout << var << endl;

    cout << (0 < 200 < 100) << endl; // incorrect syntax
    cout << ((0 << 200) && (200 < 100)) << endl;
    // (0 < 200) < 100 = 1 < 100 = 1
    return 0;
}