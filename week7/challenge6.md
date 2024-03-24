#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Challenge 6 - Week of February 26, 2024**

These exercises for this week will give you practice working with nested loops and arrays. The questions can be done with only this information, however the "Added Challenge" for each problem will require learning and using 2D arrays. 

# Exercises

## Question 1 - Pattern

Create a program that creates a pattern in the shape of an equilateral triangle using numbers as shown in the example below.

Example output (**bold** is user input)
<pre><code>Enter the number of rows: 
<b>3</b>
    1
  2 3 2
3 4 5 4 3
</code></pre>

*Added Challenge*: Modify your program so that you can create a diamond instead of stopping at a triangle.    
Example:
<pre>    1
  2 3 2
3 4 5 4 3
3 4 5 4 3
  2 3 2
    1
</pre>

-----------------------------

## Question 2 - Largest Three

Write a program to find the largest three elements in an array of integers and print them out in descending order. Make sure that the array has at least three elements.

Example output: given array {5,6,3,0,9}
<pre><code>The three largest numbers are: 9, 6, 5
</code></pre>

*Added Challenge*: Modify your program so that you can find the largest three elements a 2D array and print them out in descending order.

-----------------------------

## Question 3 - Mystery

Given the following function, explain what it is doing and the expected end result.

```cpp
int mystery(int a, int b) 
{ 
 
    int number = min(a, b); 
    while (number > 0) { 
        if (a % number == 0 && b % number == 0) 
        { 
            break; 
        } 
        number--; 
    } 
  
    return number; 
} 
```

-----------------------------

## Question 4 - Valid Double

Design a function `validateDouble` that accepts a string input and determines if it represents a valid double upto one decimal place by checking if each character in the string is a valid value. Your program should ask the user to input an double, store it as a string and then invoke the `validateDouble` function to check its validity. The program should then print whether the string is a valid double or not. (Negative doubles are also valid doubles).


Example output1 (**bold** indicates user input)
 <pre>
    Enter the integer :
    <b>-12.0</b>
    The entered string is a valid double!
</pre>

-----------------------------
