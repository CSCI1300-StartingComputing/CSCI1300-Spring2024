#### **CSCI 1300 CS1: Starting Computing: Study Guide: Week 6**
#### **Naidu/Godley - Spring 2024**

<br/>

# Table of contents


1. [Loops](#loops)
2. [Strings](#strings)
3. [Input with cin and getline](#cin)
4. [Reminders](#reminders)
5. [Vocabulary](#vocabulary)
6. [Pre-Quiz](#prequiz)

## Loops <a name="loops"></a>
**While Loops**

*Loops* allow us to run a section of code multiple times. They will repeat the execution of a single statement or group of statements as long as a specified condition is satisfied. The statement(s) will not be executed if the condition is false.

*Syntax of a while loop*
```cpp
while (condition)
{
	//statement(s) to do something;
}
```
Here, `while` is a C++ reserved word, *condition* should be a Boolean expression that will be evaluated to **true** or **false**, and *statement(s) to do something* is a set of instructions enclosed by curly brackets. If the condition is **true**, the specified statement(s) within the loop are executed. After running once, the Boolean expression is re-evaluated. If the condition is **true**, the specified statement(s) are executed again. This process of evaluation and execution is repeated until the condition becomes **false**.

**Example 1**
```cpp
int user_choice = 1;
while (user_choice != 0)
{
   cout << "Do you want to see the question again?" << endl;
   cout << "Press 0 if no, any other number if yes." << endl;
   cin >> user_choice;
}
```

Entering 0 will terminate the loop, but any other number will cause the loop to execute again.  **Note: we must initialize the condition before the loop starts.** Setting `user_choice = 1` ensures the while loop will run at least once.

**Example 2** <a name="whileExample2"></a>
```cpp
int i = 0;
while (i < 5)
{
	cout << i << endl;
	i = i + 2;
}
```
Notice how you must manually initialize `i=0` and increment `i` by 2.
Inserting `cout` statements into your loops is a quick way to debug your code if something isn’t working to make sure the loop is iterating over the values you want to use. A common error is to forget to update `i` within the loop, causing it to run forever.

**Do-While Loops**

 It is similar to the while loop but with one key difference: the do-while loop executes its body at least once before checking the loop condition.

*Syntax of a do-while loop*
```cpp
do {
    //statement(s) to do something;
} while (condition);
```
Here, we use the keyword `do` to indicate the start of the loop and `while` to indicate the end and check the condition. Notice that we also end the while condition with a `;` (semi-colon ). Following are some examples of the usage of the `do-while` loop:

**Example 1**
```cpp
int user_choice = 0;

do
{
   cout << "Do you want to see the question again?" << endl;
   cout << "Press 0 if no, any other number if yes." << endl;
   cin >> user_choice;
} while (user_choice != 0);
```
Notice here how we executed the cout statements and took input from the user before validating the `user_choice`, but with the usage of the `while` loop, we will validate the condition before the next iteration.

**Example 2** <a name="whileExample2"></a>
```cpp
int i = 0;

do {
	cout << i << endl;
	i = i + 2;
} while (i < 5);
```

**For Loops**

Sometimes, you know the exact number of iterations a loop has to perform. In these cases, a `for` loop is more appropriate. A `for` loop has three elements:
* *Initialization*: It must initialize a counter variable to a starting value.
* *Condition*: If the condition is true, the body of the loop is executed. If it is false, the body of the loop does not execute and jumps to the statement(s) after the loop.
* *Update*: Updates the counter variable during each iteration.

*Syntax of a for loop*
```cpp
for (initialization; condition; update)
{
	//statement(s) to do something;
}
```

**Example 1:**  
```cpp
for (int count = 0; count < 5; count++)
{
	cout << "hello" << endl;
}
```
Notice the following three parts of the `for` loop:
 * `count` is initialized to `0`,
 * the exit condition is `count < 5`
 * `count++` to increment the count value by one

**Example 2:**
```cpp
for (int i = 0; i < 5; i = i + 2)
{
	cout << i << endl;
}
```
Notice that this example behaves in the same way as the [example 2](#whileExample2) in the `while` loop section above.  


## Strings <a name="strings"></a>

In C++, a **string** is a data type that represents sequences of characters instead of a numeric value (such as int or float). A string literal can be defined using double quotes. So ```“Hello, world!”```, ```“3.1415”```, and ```“int i”``` are all strings. We can access the character at a particular location within a string by using square brackets, which enclose an index that you can think of as the address of the character within the string. It is important to note that strings in C++ are indexed starting from zero, which means that the first character in a string is located at index 0, the second character has index 1, and so on. For example:

```cpp
string s = “Hello, world!”;
cout << s[0] << endl;  //prints the character ‘H’ to the screen
cout << s[2] << endl;  //prints the character ‘l’ to the screen
cout << s[9] << endl;  //prints the character ‘r’ to the screen
cout << s[12] << endl; //prints the character ‘!’ to the screen
```

Note that when a character in a string is accessed with square brackets, the character has the datatype of `char`. For example:
```cpp
string str = "Example"; //this is a string
char c = str[1]; //this is a char
```

### Concatenation

The `+` operator concatenates strings, combining them into longer strings.

```cpp
string firstName = "John";
string lastName = "Doe";
string fullName = firstName + " " + lastName;
```
Output:
<pre>
John Doe
</pre>

### String functions

There are many useful standard functions available in C++ to manipulate strings. One commonly used function is ```length()```. We can use this function to determine the number of characters in a string. For example:

```cpp
string greeting = "Hello World";
cout << greeting.length() << endl; // prints 11 to the screen (space is also a character)
```

The correct way:
* ```s.length()```

Common incorrect ways:
* ```length(s)```
* ```s.length```

Another helpful function available for strings is `substr()`. This function allows us to access a subset, or a small portion, of a longer string. The substring function takes two arguments:
1. The starting index of the substring you would like to capture
2. The length of the substring you would like to capture (optional)

Note that the second argument is optional. If you do not pass a second argument to substr(), the function will print the entirety of the string, beginning with the character at the position specified in the first argument. Note that `substr()` always returns a variable of datatype `string`, regardless of the length of the substring.

For example, consider the code below:

```cpp
string str = "Project 1 is fun!"
cout << str.substr(0, 7) << endl;
cout << str.substr(7) << endl;
cout << str.substr(1, 1) << endl; //prints a string of length one
```

This will output the following:
```
Project
 1 is fun!
r
```
**Note:** The second line of output begins with a space.

Both `length()` and `substr()` are special kinds of functions associated with **objects**, usually called **methods**, which we will discuss later in the course.


## Input with cin and getline <a name="cin"></a>

Two functions that can handle user inputs are ```cin``` and ```getline```. While both of these functions allow for user inputs, they function a bit differently.

### cin

Use `cin >> ` for single-word input. 

```cpp
int number;
cin >> number;
```

```cin``` is designed to read in the user input up to a space. Therefore, if you entered `1 2` as the input, only `1` will be stored in `number`.

### getline()

Use `getline(cin, <variable>)` to read an entire line. 

```cpp
string message;
getline(cin, message);
```

`getline()` reads the entire line of the user input and stores it as a string. Therefore, if you entered `csci 1300` as the user input, the whole line `csci 1300` will be stored in the variable `message`. 

**Note:** Using `getline()` and `cin` interchangeably will cause an issue. Please refer to the project for more information. 

### stoi()
Many times, e.g., in the `getline()` example above, we would need to convert string to int. Fortunately, there is a built-in method in C++ that we can utilize. The `stoi()` function will convert a string to an integer. 

```cpp
string message; 
getline(cin, message);
int number = stoi(message);
```

In the above code snippet, if the user enters `1`, it will first be stored in `message` as a string. Then, we can convert the `1` from a string (stored in variable `message`) to int (stored in variable `number`). 


## Reminders <a name="reminders"></a>
Here is a collection of useful things:

- Setting decimal points in cout (remember to include ```<iomanip>```!): <br>
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
- Code compilation with g++: <br>
    ```g++ -Wall -Werror -Wpedantic -std=c++17 name_of_source_file.cpp```
- Using the ```-o``` option provided by g++ to name your executable [OPTIONAL]: <br>
    ```g++ -Wall -Werror -Wpedantic -std=c++17 name_of_source_file.cpp -o nameOfExecutable```
- Good coding style: <br>
    - Name variables well, for example: ```double d = 42.0167``` is confusing, whereas ```double height_of_rectangle = 42.0167``` is clearer about what the variable represents
    - Name functions well, for example: ```int Func(int x);``` is confusing, whereas ```int calculateSquare(int x);``` is clearer about what the function does
    - Variables should be named using snake-case, where_all_words are all lowercase and separated by underscores: this_is_snake_case.
    - Functions should be named using camel-case, where all words except the first start with an uppercase letter, and there are no separators: thisIsCamelCase.
    - Indent things properly! If-else blocks should be well-spaced and indented, function blocks as well, etc. Use tab to increase indent, and shift+tab to decrease indent. Here is an example: <br>
    ```cpp
    void function(void){
    if(condition) {
    <code>}else{
    <code>}return;}
    ```
    The above is very confusing and hard to understand; simply adding space and indents helps:
    ```cpp
    void function(void)
    {
        if (condition)
        {
            <code>
        }
        else
        {
            <code>
        }
        return;
    }
    ```
    - Remember to comment your code! Comment lines start with ```//```
    - Good places to put comments include (but are not limited to!): next to function prototypes, next to variable declarations, and next to important lines, such as numerical calculations, etc.
    - These conventions will make your code easier to read and understand

## Vocabulary <a name="vocabulary"></a>

* **loop** - A loop is a programming construct that allows a set of instructions to be executed repeatedly based on a certain condition or a fixed number of iterations.
* **substring** - A portion of a longer string that appears consecutively within that string.
* **concatenation** - The operation of joining two strings end-to-end to form a new string.
* **assert statement** - A statement used for debugging purposes, to check assumptions made by the program and terminate the program if the assumption is false.
* **test case** - A specific set of conditions or variables under which we check if our code is working as expected.

## Recitation 5: Pre-Quiz <a name="prequiz"></a>

1. What is the purpose of a loop in a program? Give an example of a scenario where you would use a loop to solve a problem.

2. How does a "for" loop differ from a "while" loop?

3. How can you ensure that a loop doesn't run indefinitely?

4. Fill in the blank below where the program presents a menu to the user and allows them to make a selection or exit the program, ensuring they input a valid choice.
```cpp
#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "Menu Options:" << endl;
        cout << "1. Print Good Choice" << endl;
        cout << "2. Print Great Choice" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Good Choice!" << endl;
        } else if (choice == 2) {
            cout << "Great Choice!" << endl;
        }
        // The condition checks if the choice is not among 1,2 and 3.    
        ________________________________________ //FILL IN THIS LINE
            cout << "Invalid choice. Please try again." << endl;
        }
    // The while loop should execute as long as the input is not 3.
    } while (__________________________________); //FILL IN THIS LINE

    cout << "Program exiting." << endl;

    return 0;
}
```

5. What is the output of the following program?
```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 50;
    do
    {
        num -= 10;
    }
    while (num > 17);

    cout << num << endl;
    return 0;
}
```

6. The program intends to count and display the number of workdays (Monday to Friday) in a given month.

* How many iterations does the for loop perform?

* How many times does the if condition evaluate to true?

```cpp
#include <iostream>
using namespace std;

int workdays(int month_days)
{
    int workday_count = 0;

    for (int day = 1; day <= month_days; day++)
    {
            // Check if the day falls on a workday (Monday to Friday)
            if (day % 7 != 0 && day % 7 != 6)
            {
                workday_count++;
            }
    }
    return workday_count;
}

int main() {
    int month_days = 31;
    int workday_count = workdays(month_days);

    cout << "The number of workdays in the month is: " << workday_count << endl;
    return 0;
}
```
