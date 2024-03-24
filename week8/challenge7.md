#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Recitation 7 - Week of March 4, 2024**

These exercises for this week will give you practice working with 2D arrays and functions with arrays. The questions can be done with only this information, however the "Added Challenge" for each problem will require learning and using Filestreams. 

# Exercises

## Question 1 - Matrix Multiplication

Write a program to calculate the product of two input matrices. The first one is a 2X3 matrix and the second one is a 3X2 matix.

Example output (**bold** is user input)
<pre><code>
Enter the elements of the first matrix:
<b>1 2 3 
4 5 6</b>
Enter the elements of the second matrix:
<b>7 8
9 10
11 12</b>
The product of the two matrices is:
58  64
139 154
</code></pre>

*Added Challenge*: Modify your program to write the result matrix in to an output file.

-----------------------------

## Question 2 - Magic Sum

Write a program to determine whether, in a given 3x3 matrix the sum of each row and column is the same.

Example output (**bold** is user input)
<pre><code>
Enter the elements of the 3X3 matrix:
<b>2 7 6 
9 5 1
4 3 8</b>
The sum of each row and column is the same for the given matrix.
</code></pre>

*Added Challenge*: Modify your program to write the alternate rows of the matrix into two seperate output files.

-----------------------------

## Question 3 - Mystery

Given the following function, explain what it is doing and the expected end result.

```cpp
void mystery(int A[4][4]) 
{
    int rows = 4;
    int cols = 4;
    for (int i = 0; i < rows; ++i) 
    {
        cout << A[i][i] << " ";
    }
    cout << endl;
    for (int i = 0; i < cols; ++i) 
    {
        cout << A[i][cols - 1 - i] << " ";
    }
} 
```
## Question 4 - Movie Theater

You are organizing a movie premier to raise funds for charity among your friends. You've secured a small movie theater that can accomodate 20 individuals, in 4 rows and 5 columns. To simplify the ticketing process, the first row is charged at a flat rate of $10, and each subsequent row is charged $2 more than the previous row. Attendees can book their desired seats by specifying the row and seat number. Utilize a 2D array of strings to store attendee names at each seat and facilitate accurate billing based on the chosen seat prices.

Example output (**bold** is user input)
<pre><code>
Enter the name of the attendee at row 1 seat 1
<b>Jamie</b>
Enter the name of the attendee at row 1 seat 2
<b>Alice</b>
.
.
.
Enter the name of the attendee at row 4 seat 5
<b>Alex</b>
The charges for each person are as follows:
Jamie : $10
Alice : $10
.
.
.
Alex : $16
</code></pre>

*Added Challenge*: Imagine you booked a bigger theater and the list of attendes are given to you as a file in the order in which they are seated. Modify your program to read the content of this and organize it into a 2D array. Additionally, write final charges for each attendee based on the seating prices in to an output file.