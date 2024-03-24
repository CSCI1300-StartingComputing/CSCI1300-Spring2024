#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Challenge 4 - Week of February 12, 2024**

These exercises for this week will give you practice working with variables and operators. The first three questions can be done with only this information, however the "Added Challenge" for each problem will require learning and using conditional statements. 

# Exercises

## Question 1: Last Digit
Create a function, that takes in 3 numbers: a, b, c and returns true if the last digit of a * b = the last digit of c. Check the example below for an explanation.

Example:
```
lastDigit(15, 41, 125) ➞ true
// The last digit of 15 is 5, the last digit of 41 is 1, and the last digit of 125 is 5, and the last digit of 5*1 = 5, which is equal to the last digit of 125(5).
```

*Added Challenge:* If the user provides invalid input, prompt the user to input a valid input until the user does so.

### Question 2: Reverse of a number

Write a function to reverse the digits of a 4-digit number (4-digit numbers cannot start with 0) provided by the user. **Reverse** means reverse the position of all digits of any number. For example, the reverse of 2516 is 6152.

**Note:** The reversed number is not necessarily a 4-digit number.

Example output 1: (**bold** indicates user input)
<pre>
Enter the input number:
<b>1234</b>
The reverse of the number is : 4321
</pre>

Example output 2: (**bold** indicates user input)
<pre>
Enter the input number:
<b>1300</b>
The reverse of the number is : 31
</pre>
You must get the input as a positive integer and reverse the digits of the number. 

**Input Format:**
Enter a positive number of type Integer.

**Output Format:**
Output the reverse of the positive number of type Integer.

*Added Challenge:* Instead of reversing only 4-digit numbers, implement your program so that it is able to reverse any number of digits. 


## Question 3: Lowercase and Smallest ASCII value
Create a function, that takes in 3 characters and converts each of the characters to lowercase and prints them out. The function should then return the character with the smallest ASCII value after converting to lowercase. Check the example below for an explanation.

**Note:** You should not use any built-in functions.

Example output 1: (**bold** indicates user input)
<pre>
Enter the three input characters:
<b>T
i
P</b>
The characters T i P in lowercase are: t i p //(this comes from the function)
The character with the smallest ASCII value is: i //(this comes from main)
</pre>

Example output 2: (**bold** indicates user input)
<pre>
Enter the three input characters:
<b>z
i
g</b>
The characters z i g in lowercase are: zig //(this comes from the function)
The character with the smallest ASCII value is: g //(this comes from main)
</pre>
*Added Challenge:* Instead of limiting the program to three characters, modify your program so that it is able to request the user for up to four (one to four) characters.
