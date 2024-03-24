// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 10: FizzBuzz with asserts

#include<iostream>

using namespace std;

/*
1. if number is divisible by 3 -> return fizz
2. if number is divisible by 5 -> return buzz
3. if number is divisible by 3 and 5 -> return fizzbuzz
4. otherwise we'll return the number
*/

/**
 * @brief function for the "FizzBuzz Test"
 * 
 * @param number (int)
 * @return string - Fizz, Buzz, FizzBuzz, number
 */
string fizzbuzz(int number)
{
    // sequence of the conditional branches matter
    if(number % 3 == 0 && number % 5 == 0)
    {
        return "FizzBuzz";
    }
    else if(number % 3 == 0)
    {
        return "Fizz";
    }
    else if(number % 5 == 0)
    {
        return "Buzz";
    }
    else 
    {
        return to_string(number);
    }
}

// to_string(int/double) -> returns the string version of the numeric input

int main()
{
    // test case 1
    assert(fizzbuzz(3) == "Fizz");
    cout << "function works for input of 3" << endl;

    // test case 2
    assert(fizzbuzz(5) == "Buzz");
    cout << "function works for input of 5" << endl;

    // test case 3
    assert(fizzbuzz(9) == "Fizz");
    cout << "function works for input of 9" << endl;

    // test case 4
    assert(fizzbuzz(10) == "Buzz");
    cout << "function works for input of 10" << endl;

    // test case 5
    assert(fizzbuzz(7) == "7");
    cout << "function works for input of 7" << endl;

    // test case 6
    assert(fizzbuzz(15) == "FizzBuzz");
    cout << "function works for input of 15" << endl;
    return 0;
}