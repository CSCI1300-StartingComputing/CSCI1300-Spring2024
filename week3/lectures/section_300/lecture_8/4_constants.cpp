// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 8: constant variables

#include<iostream>

using namespace std;

int main()
{
    int var1 = 100;
    var1 = 200;
    var1 = 78;
    // a variable can be re-assigned a value 
    double stamp_cost = 0.55;
    stamp_cost = 0.56;
    
    const double STAMP_COST = 0.55; // has to have a value at the time of definition

    STAMP_COST = 1.5; // a constant variable cannot be modified after initialization; syntax error

    // const keyword acts as an explicit check to make sure you don't accidentally change the value of something you shouldn't

    return 0;
}