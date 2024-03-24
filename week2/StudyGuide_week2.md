#### **CSCI 1300 CS1: Starting Computing: Study Guide: week 2**
#### **Naidu/Godley - Spring 2024**

# Table of contents
1. [Data Types](#data_types)
2. [Naming and Variables](#naming_convention)
3. [Input and Output](#input_output)
4. [Comments](#comments)
5. [Pseudocode](#pseudocode)
6. [Vocabulary](#vocab)
7. [Recitation 1: pre-quiz](#pre-quiz)

## Data Types <a name="data_types"></a>

When programming, we store the variables in our computer's memory, but the computer needs to know what kind of data we want to store in them since it is not going to occupy the same amount of memory to store a simple number as store a single letter or a large number, and they are not going to be interpreted the same way. Some commonly used data types in C++ are:

1. `int`: for integers
    ```cpp
    int my_int = 5;
    int number = 10;
    int y_value = -3;
    ```
2. `char`: for characters
    ```cpp
    char my_char = 'c';
    char letter = 'A';
    char digit = '4';
    ```
3. `bool`: for true or false values
    ```cpp
    bool my_bool = false;
    bool result = true;
    ```
4. `float`: for floating-point numbers (7 decimal digits)
    ```cpp
    float my_float = 4.4531;
    float temp = -11.15;
    ```
5. `double`: for double-precision floating-point numbers (15 decimal digits)
    ```cpp
    double my_double = 8.4531;
    double score = -10.67836786432;
    ```
6. `string`: for strings of characters
    ```cpp
    string my_string = “Hello World”;
    string title = “CSCI 1300: Starting Computing”;
    ```

-----
## Naming and variables <a name="naming_convention"></a>
**Names:** Give variables descriptive names, such as first_name or homework_score. Avoid one-letter names like "a" or "x", except for loop counter variables such as "i".

Bad Example:
```cpp
int thing = 16;
double a = 2.2;
string x = "Michael";
```

Good Example:
```cpp
int cups_per_gallon = 16;
double lbs_per_kilo = 2.2;
string first_name = "Michael";
```
**Variable** names are all lowercase with underscores between words.

Bad Example:
```cpp
int numberbananas = 10;
double NumberFish = 7;
string AGEOFPERSON = "Michael";
```
Good Example:
```cpp
int number_bananas = 10;
double number_fish = 7;
string age_of_person = "Michael";
```
-----
## Input & Output <a name="input_output"></a>
The ability to display information to the user and receive input from them is key to making your programs useful. In C++, we can achieve this exchange of information by using **cout** (console out) and **cin** (console in) from the iostream library. Whenever you use **cout** or **cin**, you must include the **iostream** (input output stream) library and use the **std** (standard) namespace.

To provide a more readable and organized output, **endl** is often used. The **endl** manipulator is used to start a new line. It will allow the cursor to move to the beginning of the following line. See the example below.

Example Input (User input in **bold**)
```cpp
#include <iostream>
using namespace std;

int main()
{
   int number_1;
   int number_2;
   cout << "Please enter the first number:" << endl;
   cin >> number_1;
   cout << "Please enter the second number:" << endl;
   cin >> number_2;
   cout << "Sum of numbers: " << number_1 + number_2 << endl;
}
```
<pre>
Please enter the first number:
<b>1</b>
Please enter the second number:
<b>2</b>
Sum of numbers: 3
</pre>

-----
## Comments <a name="comments"></a>
* Your code should be well-commented. Use comments to explain your code, especially if you have a complex code section. These comments are intended to help other developers understand how your code works. Single-line comments should begin with two forward slashes (//). Multi-line comments begin with one forward slash and an asterisk (/* ... comments here ... */).

* Examples:
    *  Single-line:
    ```cpp
    // CSCI 1300 Spring 2024
    ```
    * Multi-line:
    ```cpp
    /*
    Algorithm:
    Input: two numbers
    Output: sum of input numbers

    1. Ask the user to enter a number
    Save in variable number_1
    2. Ask the user to enter a number
    Save in variable number_2
    3. Compute sum
    sum = number_1 + number_2
    4. Display sum to user
    */
   ```
-----
## Pseudocode <a name="pseudocode"></a>

Pseudocode is used to develop algorithms. An algorithm is a procedure for solving a problem.

An algorithm describes actions to be executed and the order. In other words, an algorithm is merely the sequence of steps taken to solve a problem, like a recipe. An algorithm is not computer code. Algorithms are just the instructions that provide a clear path for you to write the computer code.

An algorithm for adding two numbers together:

```
Step 1: Start
Step 2: Declare variables num1, num2, and sum.
Step 3: Read values num1 and num2.
Step 4: Add num1 and num2 and assign the result to sum.
Step 5: Display sum
Step 6: Stop
```

The main difference between an algorithm and a pseudocode is that an algorithm is a step-by-step procedure to solve a given problem, while a pseudocode is a method of writing an algorithm.

| **Algorithm**                        | **Pseudocode**                       |
| ------------------------------------ | ------------------------------------ |
| An unambiguous specification of how to solve a problem. | An informal high-level description of the operating principle of a computer program or other algorithm. |
| Helps to simplify and understand the problem.           | A method of developing an algorithm.                                                                    |

Pseudocode is an informal language that helps programmers develop algorithms (or recipes). Although there are no hard and fast rules for pseudocode, there are some suggestions to help make pseudocode more understandable and easy to read.

For instance, consider indenting all statements showing a “dependency”, like statements that use: While, do, for, if.


### Common Action Keywords for Pseudocode
Several keywords are often used to indicate common input, output, and processing operations.
```
Input:		READ, OBTAIN, GET
Output:		PRINT, DISPLAY, SHOW
Compute:		COMPUTE, CALCULATE, DETERMINE
Initialize:		SET, INITIALIZE
```

### Example
pseudocode:
```
Read the length of the rectangle
Read the width of the rectangle
Compute the area of the rectangle as length times width.
```
C++ Source Code:
```cpp
double length = 0;
double width = 0;

cout << "What is the rectangle length?: " << endl;
cin >> length;

cout << "What is the rectangle width?: " << endl;
cin >> width;

cout << "The rectangle area is: " << length * width;
```
-----
## Vocabulary <a name="vocab"></a>
* **syntax** - Rules that define how to form instructions in a particular programming language.
* **compile** - Translating code in a high-level language (such as C++) to machine instructions.
* **input** - Information that is provided to a program for processing.
* **output** - Information the program displays.
* **execution** - The computer performs the specified set of instructions from the program to achieve the desired result.

-----
## Recitation 1: pre-quiz <a name="pre-quiz"></a>

1. What is a variable?

2. Consider a variable tracking changing cost of an item in a supermarket. What would be a good name for this variable?

3. Consider a variable that tracks the temperature outside. What data type should you use? Are there multiple types that would work?

4. Consider a variable that represents the roll of a 6-sided die. What possible values could this variable hold?
