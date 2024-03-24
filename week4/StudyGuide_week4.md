#### **CSCI 1300 CS1: Starting Computing: Study Guide: Week 3**
#### **Naidu/Godley - Spring 2024**

# Table of contents
1. [Relational Operators](#relationaloperators)
2. [Logical Operators](#logicaloperators)
3. [Conditional Statements](#conditionals)
4. [Switch Statements](#switchstatement)
5. [Rounding To Required Decimal Places](#rounding)
6. [Functions](#functions)
7. [Coding Style](#codingstyle)
8. [Vocabulary](#vocabulary)
9. [Pre-Quiz](#prequiz)
## Relational Operators <a name="relationaloperators"></a>

A relational operator is a feature of a programming language that tests or defines some kind of relation between two entities. These include numerical equality (e.g., 5 == 5) and inequalities (e.g., 4 ≥ 3). Relational operators will evaluate to either True or False based on whether the relation between the two operands holds or not. When two variables or values are compared using a relational operator, the resulting expression is an example of a boolean condition that can be used to create branches in the execution of the program. Below is a table with each relational operator’s C++ symbol, definition, and an example of its execution.

| Operators | Definition | Example |
|-----|-----|-----|
| >  | greater than | 5 > 4 is TRUE |
| <  | less than | 4 < 5 is TRUE |
| >= | greater than or equal | 4 >= 4 is TRUE |
| <= | less than or equal | 3 <= 4 is TRUE |
| == | equal to | 5 == 5 is TRUE |

## Logical Operators <a name="logicaloperators"></a>

Logical operators are used to compare the results of two or more conditional statements, allowing you to combine relational operators to create more complex comparisons. Similar to relational operators, logical operators will evaluate to `true` or `false` based on whether the given rule holds for the operands. Below are some examples of logical operators and their definitions.

| Operators | Definition | Example |
|----|----|----|
| && | AND | returns true if and only if both operands are true
| \|\| | OR | returns true if one or both operands are true
| ! | NOT | returns true if the operand is false and false if the operand is true

### Truth tables

Every logical operator will have a corresponding truth table, which specifies the output that will be produced by that operator on any given set of valid inputs. Below are truth tables for each of the logical operators specified above.

**AND ( && ):**
These operators return true if and only if both operands are True. This can be visualized as a venn diagram where the circles are overlapping.

![and](images/and.png)

**OR ( || ):**
These operators return True if one or both of the operands are True. This can be visualized as the region of a venn diagram encapsulated by both circles.

![or](images/or.png)

**NOT ( ! ):**
This operator returns the opposite of the operand. This can be visualized as the region of a venn diagram outside the circle. Unlike AND and OR, the NOT operator has only one operand.

![not](images/not.png)

## Conditional Statements <a name="conditionals"></a>
Conditional statements, also known as decision statements or branching statements, are used to make a decision based on condition. A condition is an expression that evaluates to a boolean value, either true or false. [Conditional Execution in C++](https://cal-linux.com/tutorials/conditionals.html) is a good online resource for learning about conditionals in C++.

**IF Statements:** An if statement in C++ is composed of a condition and a body. The body is executed only if the condition is true. The condition appears inside a set of parentheses following the keyword “if”, and the body appears within a set of curly brackets after the condition:

The general format for **if statements** is:
```
if ( <CONDITION> )
{
	<BODY>
}
```

It is good practice to vertically align the open `"{"` and closed `"}"` curly brackets and to indent the body.

The condition is interpreted as a boolean value, either true or false. Be careful; most expressions in C++ have a boolean interpretation. For instance, non-zero numeric values are true. Assignment operations (single equal sign) are interpreted as true as well. A common mistake is to use a single equals sign inside a condition when a double equals sign is intended.

Unintended behavior when accidentally using assignment operation (= instead of ==) in conditional:
```cpp
// INCORRECT CODE
int x = 5;
if (x = 1) // one equal sign: changes value of x, will always evaluate to true
{
	cout << “The condition is true.” << endl;
}
cout << "x is equal to " << x << endl;
```
Example output:
<pre>
The condition is true.
x is equal to 1
</pre>

What you **actually** mean to do:
```cpp
// CORRECT CODE
int x = 5;
if (x == 1) // two equal signs, performs comparison
{
	cout << “The condition is true.” << endl;
}
cout << "x is equal to " << x << endl;
```
Example output:
<pre>
x is equal to 5
</pre>

Remember, “=” is for assignment and “==” is for checking equality.

**IF-ELSE Statements:** If statements may be paired with else statements in C++. If the condition associated with the if statement is false, the body associated with the else statement is executed. The else statement body is enclosed in a set of curly brackets:
```cpp
if ( <CONDITION> )
{
	<BODY>
    // executed when CONDITION is true
}
else
{
	<BODY>
    // executed when CONDITION is false
}
```
An if statement does not need an else statement, but there must be an if statement before every else statement.

**ELSE-IF Statements:** Finally, an if statement may also be associated with any number of else-if statements. These statements each have an associated condition and an associated body. The body is executed if the condition is true and the conditions for all preceding if- and else-if statements in the same group are false. An else statement may be included at the end of the group but is not required. The else statement will be executed if all the previous conditions are false.

```cpp
if ( <CONDITION> )
{
	<BODY>
}
else if ( <CONDITION> )
{
	<BODY>
}
else if ( <CONDITION> )
{
	<BODY>
}
else
{
	<BODY>
}
```

**Some examples:**

- If the int `num` is negative, print “Changing sign” and make it positive.
```cpp
if (num < 0)
{
	cout << “Changing sign” << endl;
	num = -1 * num;
}
```
- If the int `num` is 0, print “Can’t divide by 0!”. Otherwise, set num to 1000 divided by num.
```cpp
if (num == 0) //notice the double equals!
{
	cout << “Can’t divide by 0!” << endl;
}
else
{
	num = 1000 / num; //integer arithmetic
}
```
- If the int `num` is greater than 0 and less than 10, set num to 5 times itself. Otherwise, if num is greater than 100, set num to itself divided by 10.
```cpp
if (num > 0 && num < 10)
{
	num = 5 * num;
}
else if (num > 100)
{
	num = num / 10;
}
```
- Print “Positive” if the int num is positive, “Zero” if it is 0, and “Negative” if it is negative. Both of the approaches below work. Why? Can you think of other ways to achieve the same result?

Approach 1:
``` cpp
if ( num > 0 )
{
	cout << “Positive” << endl;
}
else if ( num == 0 )
{
	cout << “Zero” << endl;
}
else if ( num < 0 )
{
	cout << “Negative” << endl;
}
```
Approach 2:
```cpp
if ( num > 0 )
{
	cout << “Positive” << endl;
}
else if ( num == 0 )
{
	cout << “Zero” << endl;
}
else
{
	cout << “Negative” << endl;
}
```
- Let score be an int between 0 and 100. Print the letter grade associated with score (A: 90-100, B: 80-89, C: 70-79, D: 60-69, F: 0-59). Both of the approaches below work.

Approach 1:
```cpp
if (score >= 90 && score <= 100)
{
	cout << “A” << endl;
}
else if (score >= 80 && score <= 89)
{
	cout << “B” << endl;
}
else if (score >= 70 && score <= 79)
{
	cout << “C” << endl;
}
else if (score >= 60 && score <= 69)
{
	cout << “D” << endl;
}
else if (score >= 0 && score <= 59)
{
	cout << “F” << endl;
}
```

Approach 2:
```cpp
if (score >= 90 && score <= 100)
{
	cout << “A” << endl;
}
else if (score >= 80)  // this condition is checked only if the first condition fails, so score must be less 90
{
	cout << “B” << endl;
}
else if (score >= 70)
{
	cout << “C” << endl;
}
else if (score >= 60)  // this condition is check only if all the above conditions fail, so the score must be less than 70
{
	cout << “D” << endl;
}
else if (score >= 0)
{
	cout << “F” << endl;
}
```
## Switch Statements <a name="switchstatement"></a>

Switch case statements are a substitute for long if statements that compare a variable to several values.

![switch statements diagram](images/switchdiagram.png)

### Syntax
With the switch statement, the variable name is used once in the opening line. A case keyword is used to provide the possible values of the variable, which is followed by a colon and a set of statements to run if the variable is equal to a corresponding value.

An example of a simple switch statement:
```cpp
switch (n)
{
     case 1:
          // code to be executed if n == 1;
          break;
     case 2:
          // code to be executed if n == 2;
          break;
     default:
          // code to be executed if n doesn’t match any cases
}
```

**Important notes to keep in mind when using switch statements :**
- The expression provided in the switch should result in a constant value; otherwise, it would not be valid.
    - switch(num)
        - allowed (num is an integer variable)
    - switch(‘a’)
        - allowed (takes the ASCII Value)
    - switch(a+b)
        - allowed, where a and b are int variables, which are defined earlier
- The **break** statement is used inside the switch to terminate a statement sequence. When a break statement is reached, the switch terminates, and the flow of control jumps to the next line following the switch statement.
- The break statement is optional. If omitted, execution will continue on into the next case. The flow of control will fall through to subsequent cases until a break is reached.
- The **default** statement is optional. Even if the switch case statement does not have a default statement, it would run without any problem.

## Rounding to required Decimal places <a name="rounding"></a>
We use the `<iomanip>` library in C++, which helps in manipulating the output of the program. The two functions that we are going to be using here are `setprecision` and `fixed`.

**setprecision:** This function is mainly used in displaying significant digits and rounds off the last displayed digit. It takes in a parameter that defines how many digits are to be displayed in the output.

**fixed:** This function is used to display decimal numbers in fixed point notation. It enforces a consistent number of decimal places irrespective of their actual precision.

For example:
 Here's a snippet to print the speed of a sprinter in the Olympics up to 3 decimal places.
 ```cpp
 #include <iostream>
 #include <iomanip> // first we import the library

 using namespace std;

 int main()
 {
    double sprint_time = 19.1886;

    cout << fixed << setprecision(3) << "The sprint time in seconds : " << sprint_time << endl;
    return 0;
 }
 ```
Correct Output:
<pre>
The sprint time in seconds : 19.189
</pre>

If we **do not** use the `fixed` function in our `cout` statement, then
Wrong Output:
<pre>
The sprint time in seconds : 19.2
</pre>
Note: Please use `fixed` function to set the number of decimal places to be output and use `setprecision(x)` (here, `x` is the number of decimal places) to round to the last digit.

## Functions <a name="functions"></a>
A function in C++ is a block of code that performs a specific task. It is a way to group related code together and make it easier to read and understand. Functions can also be used to reuse code, which can make your programs shorter and easier to maintain.

Here is the syntax for a function declaration in C++:

```return_type functionName(parameter_list);```

  * ```return_type``` is the data type of the value that the function returns. If the function does not return a value, then ```void``` is used as the return type.
  * ```functionName``` is the name of the function.
  * ```parameter_list``` is a list of variables that are passed to the function. The variables in the parameter list are called parameters.

Here is an example of **defining** a function in C++ that adds two numbers and returns the result:

```cpp
int addNumbers(int a, int b)
{
  int c = a + b;
  return c;
}
```
The function ```addNumbers()``` takes two parameters, both of data type `int`. It adds the two parameters and returns the result.

To call a function, you use its name followed by a list of ```arguments``` enclosed in parentheses. The arguments are the values that are passed to the function. For example, the following code calls the ```addNumbers()``` function to add 10 and 5:

```cpp
int result = addNumbers(10, 5);
```

In the above code, 10 and 5 are called arguments. The ```variable``` will now contain the 15.

### Function prototype

A function prototype in C++ is a declaration of a function. It tells the compiler the name of the function, its ```return type```, and the ```types of its parameters```. **The prototype does not contain the body of the function, only its signature**.

The following is a function prototype for a function that adds two numbers:

```cpp
int addNumbers(int a, int b);
```
This prototype tells the compiler that the function ```addNumbers()``` takes two parameters, a and b, which are integers, and returns an integer. **The body of the function is not specified in the prototype**.

Function prototypes are used for a variety of purposes. They can be used to:

  * Declare functions that are defined in other files.
  * Check the types of arguments passed to a function.
  * Allow the compiler to generate more efficient code.

Below is an example that uses function prototypes and functions.

```cpp
#include <iostream>
using namespace std;

int addNumbers(int a, int b); // function prototype

int main()
{
    int c = addNumbers(10, 5); // calling the function

    cout << "The sum of 10 and 5 :" << c << endl;
    return 0;
}

// function definition
int addNumbers(int a, int b)
{
  int c = a + b;
  return c;
}

```

### Function Flowchart

This is the flowchart for the `addNumbers()` function described above.

![addNumbers flowchart](./images/add_function_flowchart.png)

A function call is depicted by the rectangle with extra lines on the sides. To also show what the function is doing, a flowchart dedicated to the function is drawn on the side as shown in the image above.

## Coding Style <a name="codingstyle"></a>

### Whitespace and indentation

**Whitespaces:** Whitespaces can set things off and reduce the strain on the reader's eyes. Because the compiler ignores whitespace, you can place things anywhere and format them however you want. Whitespace can come in several forms, including indentation.

**Indenting:** Increase your indentation by one increment of each brace "{" and decrease it once on each closing brace "}". Place a line break after every "{" or "}". Use Tab to increase indent and Shift+Tab to decrease indentation.

**Bad Example:** There is no indentation, and it is difficult to see where different portions of the code start and stop.
```cpp
int main(){int number = 0;
    while(number < 10){
    if(number < 5){
    cout << "Less than 5" << endl;
    }else{
    cout << "Greater than 5" << endl;
    }
    number++;
    }
}
```
Good Example: There is proper indentation, and the code is easier to read.
```cpp
int main()
{
    int number = 0;
    while(number < 10)
    {
        if(number < 5)
        {
            cout << "Less than 5" << endl;
        }
        else
        {
            cout << "Greater than 5" << endl;
        }
        number++;
    }
}
```

### Naming and variables
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
**Capitalization:** Name **functions** with “camel-casing”, where the first letter is lowercase and all subsequent words in the name start with a capital letter. **Variables** names are all lowercase with underscores between words.

Bad Example:
```cpp
int numberbananas = 10;
double NumberFish = 7;
string AGEOFPERSON = "Michael";
void play_GAME (int Players)
{
    . . .
}
```
Good Example:
```cpp
int number_bananas = 10;
double number_fish = 7;
string age_of_person = "Michael";
void playGame (int players)
{
    . . .
}
```


### Comments
* Your code should be well-commented. Use comments to explain what you are doing, especially if you have a complex code section. These comments are intended to help other developers understand how your code works. Single-line comments should begin with two forward slashes (//). Multi-line comments begin with one forward slash and an asterisk (/* ... comments here ... */).

* Examples:
    *  Single-line:
    ```cpp
    // CSCI 1300 Fall 2023
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

### Compiling a C++ program
The first program that we usually write in any programming language we’re learning is "Hello, World!". Create a program that prints “Hello, World!” to the screen (the output window in VS Code).

Expected output
```
Hello, World!
```
The file should be named _helloWorld.cpp_

![Files](images/files5.png)

The .cpp extension on the filename tells VS Code that the file should be read in the C++ programming language. Once you save it, the lines you write in the file should be color-coded to reflect what they do in the program. This is called syntax highlighting.

Here are some suggested steps:

**Step 1: Write Your Code** <br/>
In VS Code, enter the following hello world program:

```cpp
#include <iostream>
using namespace std;

int main(){
    cout << "Hello, World!" << endl;
    return 0;
}
```

**Step 2: Running Your Code from Command Line** </br>
Move to the “terminal” tab. Make sure you are inside the hmwk1 directory (you can type _pwd_ to see where you are). Type: </br>
``g++ -Wall -Werror -Wpedantic -std=c++17 helloWorld.cpp``

the ``-std=c++17`` option makes sure that the C++ version used to run the program is C++ 17. If you don’t give this option, then the default version (which is usually C++98) is used.

The ``-Wall -Werror -Wpedantic`` will ensure that our code does not violate any standards.

<img src="../week2/homework1/images/files6.png" width="200" height="200" />

This creates an executable called "a.out" (or "a.exe" for Windows). You can run it by typing:

``./a.out `` or ``./a.exe``

Since no executable name was specified to g++, a.out is chosen by default. You can alternatively use the "-o" option to change the name :

``g++ -Wall -Werror -Wpedantic -std=c++17 helloWorld.cpp -o hello``

creates an executable called "hello" (see figure below). You can run it by typing

``./hello``

Notice the output looks the same: "Hello, World!", followed by the return of the prompt, for new commands. (The blue text is the output from running the file.)

![Terminal](../week2/homework1/images/Q1_terminal.png)

**Step 3: Submit to CodeRunner**<br/>
Head over to Canvas to the assignment **Homework 1 - Coderunner** in the Week 2 Module. Submit your solution for the first problem and press the Check button. You will see a report on how your solution passed the tests and the resulting score for the first problem. You can modify your code and re-submit (press “Check” again) as many times as you need to.

![CodeRunner](../week2/homework1/images/coderunner1.png)

If the code runner says “incorrect”, click the “show difference” button.
![CodeRunner](../week2/homework1/images/coderunner_ShowDifference.png)

It will highlight the differences between the expected output and the output your program produced. These outputs should be exactly the same, including upper/lower case, punctuation, and spaces. Otherwise, it’ll be marked as incorrect.
![CodeRunner](../week2/homework1/images/coderunner2.png)

## Vocabulary <a name="vocabulary"></a>
* **function prototype** - The declaration of a function that specifies its name, return type, and parameter types, informing the compiler about the function's existence.
* **function definition** - The complete specification of a function including its name, return type, parameter types, and the body of the function.
* **function call** - A statement that invokes (starts) a function and causes the function statements to execute
* **arguments** - Variables or expressions passed to a function when it is called.
* **parameters** - Variables in the function's definition that act as placeholders for the values that will be passed to the function.
* **scope** - The region of code where a particular variable can be accessed or modified.

## Recitation 3: Pre-Quiz <a name="prequiz"></a>

1. Select True or False:

	a. **T/F:** Logical operators compare two numerical values. <br>
    	b. **T/F:** Parameter variables are declared in the parenthesis after a function. <br>
    	c. **T/F:** Not all functions have a return type.

2. What is the difference between arguments and parameters of a function?

3. What would be the appropriate return type for a function that does not return anything?

4. Fill in the blank with the appropriate function declaration, in the program below that displays a "Hello" or "No Hello" message by calling the getString function. (A function declaration consists of a return type, a function name and function parameters). 
```cpp
#include <iostream>
using namespace std;

___________________________ //FILL IN THIS LINE
{
    if (flag == true)
    {
        return "Hello";
    } 
    else
    {
        return "No Hello";
    }
}
int main() 
{
    string message = getString(false);
    cout << message << endl;
    return 0;
}
```

5. Fill in the blank to call the function findGrade for the integer stored in avg_score.
```cpp
#include <iostream>
using namespace std;

char findGrade(int score){
	if (score >= 90)
	{
		return 'A';
	}
	else if (score >= 80)
	{
		return 'B';
	}
	else if (score >= 70)
	{
		return 'C';
	}
	else if (score >= 60)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
}

int main()
{
    int avg_score = 88;
    char grade;
    ____________________________ //FILL IN THIS LINE
    cout << "The averge grade is " << grade << endl;
}
```

6. The function below determines whether a number is even or odd, and then whether it is negative or positive. For our purposes, 0 is considered positive. Fill in BOTH blank lines below.

```cpp
#include<iostream>
using namespace std;

int main(){
    int value = -5;

    if (value%2)
    {
        cout << __________________; //FILL IN THIS LINE
        if (________________) //FILL IN THIS LINE
        {
            cout << "and negative." << endl;
        }
        else 
        {
            cout << "and positive." << endl;
        }    
    }
    else 
    {
        cout << "The number is even " ;
        if (value < 0) 
        {
            cout << "and negative." << endl;
        }
        else 
        {
            cout << "and positive." << endl;
        }    
    }
}
```
