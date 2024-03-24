#### **CSCI 1300 CS1: Starting Computing: Study Guide: Week 7**
#### **Naidu/Godley - Spring 2024**

# Table of contents
1. [Input with cin and getline](#input)
2. [Identifying Characters](#chars)
    1. [isdigit()](#digit)
    2. [isalpha()](#alpha)
    3. [isupper()](#upper)
    4. [islower()](#lower)
4. [Strings](#strings)
    1. [stoi()](#stoi)
    2. [stod()](#stod)
    2. [String Traversal](#traversal)
5. [Nested Loops](#nested)
6. [Reminders](#reminders)
7. [Vocabulary](#vocabulary)
8. [Pre-Quiz](#pre-quiz)


# Input with cin and getline()<a name="input"></a>
There are two functions that can be used for user input, `cin` and `getline()`. While both handle user input, they function a little differently.

Use `cin >> ` for single-word input.

```
int number;
cin >> number;
```

`cin` is designed to read in the user input up to a space. Therefore, if you entered `1 2` as the input, only `1` will be stored in `number`.

Use `getline(cin, <variable>)` to read an entire line.

```cpp
string message;
getline(cin, message);
```
`getline()` reads the entire line of the user input and stores it as a string. Therefore, if you entered `csci 1300` as the user input, the whole line `csci 1300` will be stored in the variable `message`.

**Note:** Using `getline()` and `cin` interchangeably will cause an issue. Please refer to the project for more information.

# Identifying Characters<a name="chars"></a>
You will frequently find yourself needing to identify particular groups of characters. This can of course be done using ASCII values to identify ranges of characters, but there are a handful of helper functions available in the standard library that can simplify your conditions. 

## isdigit() <a name="digit"></a>

`isdigit()` is a built-in function in C++ that will identify if a given character is a decimal digit, i.e. a value 0-9 (0, 1, 2, 3, 4, 5, 6, 7, 8, 9). If the chosen character is a digit the function returns a non-zero value (true), if the character is anything else the function returns 0 (false).

**Example 1**
```cpp
char input;
cout << "Enter a value 0-9:" << endl;
cin >> input;
if (isdigit(input))
    cout << "Your character is a digit." << endl;
else
    cout << "Your character is not a digit." << endl;
```

In the above code snippet, if the user enters `1`, it will first be stored in `input` as a character. The cout statement will then print `Your character is a digit.`

If the user enters `g`, it will first be stored in `input` as a character. Then the cout statement will print `Your character is not a digit.`

## isalpha() <a name="alpha"></a>

`isalpha()` is a built-in function in C++ that will identify if a given character is a letter, either upper or lowercase, i.e. a value a-z or A-Z (a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z) If the chosen character is a letter, the function returns a non-zero value (true); if the character is anything else, the function returns 0 (false). 

**Example 1**
```cpp
char input;
cout << "Enter a letter a-z or A-Z:" << endl;
cin >> input;
if (isalpha(input))
    cout << "Your character is a letter." << endl;
else
    cout << "Your character is not a letter." << endl;
```

In the above code snippet, if the user enters something like `a`, `C`, or `y`, the cout statement will then print `Your character is a letter.`

If the user enters something like `0`, `=`, or ` `, the cout statement will then print `Your character is not a letter.`

## isupper() <a name="upper"></a>

`isupper()` is a built in function in C++ that will determine if a given character is an uppercase letter, i.e. a value A-Z (A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z). If the chosen character is an uppercase letter, the function returns a non-zero value (true); if the character returns anything else, the function returns 0 (false). 

**Example 1**
```cpp
char input;
cout << "Enter a capital letter A-Z:" << endl;
cin >> input;
if (isupper(input))
    cout << "Your character is a capital letter." << endl;
else
    cout << "Your character is not a capital letter." << endl;
```

In the above code snippet, if the user enters something like `A`, `C`, or `Z`, the cout statement will then print `Your character is a capital letter.`

If the user enters something like `a`, `=`, or ` `, the cout statement will then print `Your character is not a capital letter.`

## islower() <a name="lower"></a>

`islower()` is a built in function in C++ that will determine if a given character is an lowercase letter, i.e. a value a-z (a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z). If the chosen character is an lowercase letter, the function returns a non-zero value (true); if the character returns anything else, the function returns 0 (false). 

**Example 1**
```cpp
char input;
cout << "Enter a lowercase letter a-z:" << endl;
cin >> input;
if (isdigit(input))
    cout << "Your character is a lowercase letter." << endl;
else
    cout << "Your character is not a lowercase letter." << endl;
```

In the above code snippet, if the user enters something like `d`, `e`, or `x`, the cout statement will then print `Your character is a lowercase letter.`

If the user enters something like `A`, `=`, or ` `, the cout statement will then print `Your character is not a lowercase letter.`

# Strings <a name="strings"></a>

In C++, `string` is a data type like `int` or `float`. Strings, however, represent sequences of characters instead of a numeric value. A string literal can be defined using double quotes (" "). So *"Hello, world!"*, *"3.1415"*, and *"int i"* are all strings. We can access the character at a particular location within a string by using square brackets, which enclose an *index*, which you can think of as the *address* of the character within the string. Indexing a string using square brackets will produce a `char` data type. Importantly, strings in C++ are indexed starting from zero. This means that the first character in a string is located at index 0, the second character has index 1, and so on. For example:
```cpp
string s = "Hello, world!";
cout << s[0] << endl;  //prints the character 'H' to the screen
cout << s[5] << endl;  //prints the character ',' to the screen
cout << s[7] << endl;  //prints the character 'w' to the screen
cout << s[12] << endl; //prints the character '!' to the screen
```
## stoi() <a name="stoi"></a>

`stoi()` is a built-in function in C++ that will convert a string to an integer. If the string starts with whitespace, it is ignored until the first non-whitespace character is found. Then, it parses as many characters as possible to form a valid integer number representation and converts them to an integer value.

**Example 1**
```cpp
string message;
getline(cin, message);
int number = stoi(message);
```

In the above code snippet, if the user enters `1`, it will first be stored in `message` as a string. Then, we can convert the `1` from a string (stored in variable `message`) to int (stored in variable `number`).

**Example 2**
```cpp
string str1 ="10";
string str2 ="25";
int num1 = stoi(str1);
int num2 = stoi(str2);
int sum = num1 + num2;
cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
```
Output:
```
The sum of 10 and 25 is 35
```

## stod() <a name="stod"></a>

The `stod()` function converts a string to a double.

**Example 1**
```cpp
string floating_str = "5.5";
double converted_value = stod(floating_str);
double square = pow(converted_value, 2);
cout << "Square of the converted value: " << square << endl;
```
Output:

```
Square of the converted value: 30.25
```

## String Traversal <a name="traversal"></a>

Traversing a string involves accessing each character in the string one at a time. This can be achieved through various looping constructs such as for, while, or do-while loops. We can perform operations on each character during each iteration, such as examining, modifying, or using it for some computation. One common way to traverse a string is by using its length to determine the bounds of the loop. Since string indexing starts at 0, we iterate from 0 to the length of the string minus one.

There are many useful functions available in C++ to manipulate strings. One of the simplest is `length()`.
The syntax for using the `length()` function is:
<pre><code>s.length()</code></pre>

**Example 1**
```cpp
string s ="Hello, world!";
int s_length = s.length();
cout << s_length << endl;			//This will print 13
for (int i = 0; i < s_length; i++)
{
	cout << s[i] << endl;
}
```

The above example will print each character in the string "Hello, world!" to the screen one per line. Notice how the `length()` function determines the number of characters in a string. This allows us to loop over a string character by character (*i.e., traverse the string*). `length()` returns a unique data type called a long unsigned int, which means it uses extra storage space. You will need to be careful using string length and either store the length in an integer variable or cast it to a normal integer if you want to compare it to an integer value.

**Example 2**
```cpp
    string str = "Good Evening Ladies and Gentlemen";
    for(int i = 0; i < static_cast<int>(str.length()); i++) {
        if (str[i] == ' ') {
            cout << "_";
        } else {
            cout << str[i];
        }
    }

```
Output:
```
Good_Evening_Ladies_and_Gentlemen
```

*Common mistakes in using length() function:*
<pre><code>length(s)
s.length
</code></pre>
This is a special kind of function associated with objects, usually called a *method*, which we will discuss later in the course.

**Let's think about:**
What happens in the above code snippet if we try to print characters beyond the length of the string? In particular, what happens when we replace `s.length()` with `s.length()+3` in the above `for` loop?


# Nested Loops <a name="nested"></a>

A nested loop is a loop inside another loop. This allows for more complex iterations, where the inner loop is executed multiple times for each iteration of the outer loop.

*Syntax of Nested Loops*

```cpp
for (initialization; condition; update)
{
    for (inner initialization; inner condition; inner update)
    {
        // statement(s) to do something;
    }
    // additional statement(s) for the outer loop;
}
```
In the syntax above, an inner loop is placed within the body of an outer loop. The inner loop will complete its full iteration for each iteration of the outer loop.

**Example 1**

```cpp
for (int i = 1; i <= 3; i++)
{
    cout << "Outer Loop Iteration i:  " << i << endl;

    for (int j = 1; j <= 2; j++)
    {
        cout << "   Inner Loop Iteration j: " << j << endl;
    }
}
```
Output:
```
Outer Loop Iteration i:  1
   Inner Loop Iteration j: 1
   Inner Loop Iteration j: 2
Outer Loop Iteration i:  2
   Inner Loop Iteration j: 1
   Inner Loop Iteration j: 2
Outer Loop Iteration i:  3
   Inner Loop Iteration j: 1
   Inner Loop Iteration j: 2
```

**Example 2**
```cpp
 while (i <= 2) {
        cout << "Outer Loop Iteration i: " << i << endl;

        for (int j = 1; j <= 3; j++) {
            cout << "   Inner Loop Iteration j: " << j << endl;
        }

        i++;
    }
```
Output:
```
Outer Loop Iteration i: 1
   Inner Loop Iteration j: 1
   Inner Loop Iteration j: 2
   Inner Loop Iteration j: 3
Outer Loop Iteration i: 2
   Inner Loop Iteration j: 1
   Inner Loop Iteration j: 2
   Inner Loop Iteration j: 3
```

Nested loops are particularly useful in solving problems that involve multi-dimensional data.

**Tips for Nested Loops:**

* Use distinct and meaningful names for loop variables in both the outer and inner loops. <br>
* Maintain proper indentation to highlight the nested structure of loops. <br>
* To prevent unintended behaviors or infinite loops, pay attention to the loop boundaries and update statements.

## Reminders <a name="reminders"></a>
Here is a collection of useful things:

- Setting decimal points in cout (remember to include ```<iomanip>```!):

    ```cout << fixed << setprecision(number of decimal points) << floating point value << endl```

    As an example, try running this program to see the difference:
    ```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main()
    {
        cout << 7.0/13.0 << endl;
        cout << fixed << setprecision(2) << 7.0/13.0 << endl;
        return 0;
    }
    ```

- Code compilation with g++:

    ```
    g++ -Wall -Werror -Wpedantic -std=c++17 name_of_source_file.cpp
    ```

- Using the ```-o``` option provided by g++ to name your executable [OPTIONAL]:

    ```
    g++ -Wall -Werror -Wpedantic -std=c++17 name_of_source_file.cpp -o nameOfExecutable
    ```

- Good coding style: <br>
  - Name variables well, for example: ```double d = 42.0167``` is confusing, whereas ```double height_of_rectangle = 42.0167``` is clearer about what the variable represents
  - Name functions well, for example: ```int Func(int x);``` is confusing, whereas ```int calculateSquare(int x);``` is clearer about what the function does
  - Variables should be named using snake-case, where_all_words are all lowercase and separated by underscores: this_is_snake_case.
  - Functions should be named using camel-case, where all words except the first start with an uppercase letter, and there are no separators: thisIsCamelCase.
  - Indent things properly! If-else blocks should be well-spaced and indented, function blocks as well, etc. Use tab to increase indent, and shift+tab to decrease indent.
  - Remember to comment your code! Comment lines start with ```//```
  - Good places to put comments include (but are not limited to!): next to function prototypes, next to variable declarations, and next to important lines, such as numerical calculations, etc.
  - These conventions will make your code easier to read and understand

For more information, please refer to [week 3 study guide](https://github.com/CSCI1300-StartingComputing/CSCI1300-Spring2024/blob/main/week3/StudyGuide_week3.md#compiling-a-c-program-).

-----
## Vocabulary <a name="vocabulary"></a>
* **Scope** - Scope refers to the region of a program where a particular variable is accessible or visible. There are two types of scope: global scope, where a variable is accessible throughout the entire program, and local scope, where a variable is only accessible within a specific block or function.
* **Parameter** - A parameter is a variable or a value that is passed to a function when it is called. Parameters serve as placeholders within the function's definition, and they receive values from the arguments provided during the function call.
* **Argument** - An argument is the value passed to a function when it is called. Arguments are assigned to the parameters defined in the function's declaration or definition.
* **Function Call** - A function call is an instruction that tells the program to execute a specific function or method. When a function is called, the program jumps to the function's code, executes it, and then returns to the point in the program where the function was called.
* **Iteration** - Iteration is the process of repeatedly executing a set of statements or a block of code. It involves repeating a specific sequence of instructions until a certain condition.
* **Index** - The position of an element within a sequence, such as an array or a string, starting from 0 in C++.
* **Traversal** - The process of visiting each element or character in a data structure (like an array or string) one by one.
* **Nested Loop** - A loop within another loop, allowing for the execution of multi-layered iterations, commonly used for processing multi-dimensional data structures.

-----
# Recitation 6: pre-quiz <a name="pre-quiz"></a>

1. What are arrays? Write three different ways you could declare and/or initialize an array in a single line. 

2. You have seen function tables designed to convey the information in a function on previous assignments. Now, given the code below, fill in the following table for the `createPattern()` function. The function creates a pattern of asterisks(stars) in the shape of a right angled triangle and returns the number of stars in that pattern. The 1st row has one star, the 2nd has two and so on. 

```cpp
#include <iostream>
#include <cassert>
using namespace std;

int createPattern(int rows)
{
    if (rows > 0)
    {
        for (int i = 1; i <= rows; i++)
        {
            for(int j = i; j > 0; j--) //or for(int j = 0; j < i; j++) or for(int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        return rows*(rows+1)/2;
    }
    return 0;
}

```

<table>
<tr>
<td> 

Function: <br>

</td>
<td>

// Put your answers in this column.


</td>
</tr>
<tr>
<td> Purpose: </td>
<td>

</td>
</tr>
<tr>
<td> Parameters: </td>
<td>

</td>
</tr>
<tr>
<td> Return Value: </td>
<td>

</td>
</tr>
<tr>
<td> Error Handling / Boundary Conditions: </td>
<td>

</td>
</tr>
<tr>
<td> Example: </td>
<td>


</td>
</tr>
</table>

3. Write 5 assert statements for the function in Question 2.

4. The program prints the contents of an integer array. Fill in the blank accordingly.

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Create an integer array of size 5 and initialize it with the numbers 3, 4, 5, 6, 7
    ______________________________________ //FILL IN THIS LINE
    cout << "The contents of the array are: ";
    for(int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    return 0; 
}
```

5. The program below creates an array of strings and then prints the first letter of every string, the second letter of every string, so on and so forth. Fill in the blanks accordingly.

 ```cpp
#include<iostream>
using namespace std;

int main()
{
#include<iostream>
using namespace std;

int main()
{
    string countries[] = {"England", "India", "China", "Brazil", "Spain", "Japan", "Mexico"};

    int longest_string = countries[0].length();
    for (int i = 1; i < 7; i++){
        if (______________________________) //FILL IN THIS LINE
	{
            longest_string = countries[i].length();
        }
    }

    for (int i = 0; i < longest_string; i++){
        for (int j = 0; j < 7; j++){ 
            if (i < static_cast<int>(countries[j].length())){
                cout << ___________________ << endl; // FILL IN THIS LINE
            }
        }
    }
}
```
