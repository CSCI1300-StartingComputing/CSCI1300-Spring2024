// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 11: pre/post increment and decrement

#include<iostream>

using namespace std;

// section 2.2.2
// pre/post increment

int main()
{
    int var1 = 10;
    var1 = var1 * 10; 
    cout << var1 << endl;
    var1 *= 10; // same as line 8
    cout << var1 << endl;
    var1 += 100; // var1 = var1 + 100;
    cout << var1 << endl;
    // + - * ? %

    // loops -> adding or subtrracting 1 is a common operation
    int var2 = 10;
    cout << var2 << endl;
    var2 += 1; // 11
    cout << var2 << endl;
    var2++; // same as line 18 // 12
    cout << var2 << endl;
    ++var2; // 13
    cout << var2 << endl;

    // variable_name++ -> post increment
    // ++variable_name -> pre increment

    // variable_name-- -> post decrement
    // --variable_name -> pre decrement

    int result = 0;
    var1 = 10;
    var2 = 10;


    result = var2++ * 2; // 20
    // 1. var2 * 2 = 20
    // 2. var2 = var2 + 1 = 11
    // 3. result = 20
    cout << result << endl;

    result = ++var1 * 2; // 22
    // 1. var1 = var1 + 1 = 11
    // 2. var1 * 2 = 22
    // 3. result = 22
    cout << result << endl;

    var2 = 11;
    var1 = 11;
    result = (var2++ * 2) + 10 + (2 * --var1);
    // 22 + 10 + 20 
    cout << result << endl;

    var2 = 11;
    var1 = 11;
    result = (var2++ * 2) + 10 + (2 * --var1) + var2;
    // 22 + 10 + 20 + 12 = 
    cout << result << endl;
    return 0;
}