#### **CSCI 1300 CS1: Starting Computing: Study Guide: Week 8**
#### **Naidu/Godley - Spring 2024**

# Table of contents
1. [Loops](#loops)
2. [Nested Loops](#nested)
3. [Arrays](#arrays)
4. [Passing arrays to functions](#arraytofunc)
5. [Multidimensional Arrays](#2darrays)
6. [Testing Functions](#tests)
7. [Reminders](#reminders)
8. [Vocabulary](#vocabulary)
8. [Pre-Quiz](#pre-quiz)

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

## Nested Loops <a name="nested"></a>

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

# Arrays <a name="arrays"></a>
An array is a data structure storing primitive data types like `double`, `int`, `char`, `boolean`, and `string`.
Arrays have both a `type` and a `size`.

**How to declare arrays**
```cpp
// data_type array_name[declared_size];
bool my_booleans[10];
string my_strings[15];
int my_ints[7];
```

**How to initialize arrays (method 1)**

```cpp
bool my_booleans[4] = {true, false, true, true};
```
If you do not declare the size inside the square brackets, the array size will be set to the number of entries you provide on the right. However, we do not recommend initializing an array without declaring the size of the array.
```cpp
bool my_booleans[] = {true, false, true}; // size = 3
```

**Example 1**

When the specified size is larger than the actual number of elements, the elements provided in the curly brackets will be the first several elements in the array, and the additional elements will be filled with default values. If it’s an integer/double array, the default values are zero, while if it’s a string array, the default values are empty strings.

```cpp
#include <iostream>
using namespace std;
int main()
{
    int int_array[5] = {1,2,3};
    for (int i = 0; i < 5; i ++)
    {
        cout << int_array[i] << “ ”;
    }
}
```

Output:
```
1 2 3 0 0
```

**Example 2**

If the specified size is smaller than the actual number of elements, this will result in a compilation error.

```cpp
#include <iostream>
using namespace std;
int main()
{
    int int_array[3] = {1,2,3,4,5};
}
```

Output:
```
error: excess elements in array initializer
int int_array[3] = {1,2,3,4,5};
                         ^
1 error generated.
```

* **How to Initialize Arrays (Method 2)**
You can also initialize elements one by one using a for loop:
```cpp
int my_ints[10];
for (int i = 0; i < 10; i++)
{
    my_ints[i] = i;
}
//{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
```
* **How to Access Elements in an Array**
We have already worked with accessing elements in an array; in C++, a string is an array of characters.
You can access elements in arrays using the same syntax you used for strings:
```cpp
string greetings[4] = {"hello", "hi", "hey", "what’s up?"};
cout << greetings[3] << endl;
```
Output
```
what's up?
```

Arrays can be iterated in the same way as the strings. Here's an example demonstrating the iteration in an array of strings:
```cpp
string greetings[4] = {"hello", "hi", "hey", "what’s up?"};
int greeting_size = 4;
for (int i = 0; i < greeting_size; i++)
{
    cout << greetings[i] << endl;
}
```
Output:
```
hello
hi
hey
what's up?
```

## Passing arrays to functions <a name="arraytofunc"></a>
### Passing By Value <a name="passbyvalue"></a>

Until now, when calling functions, we have always passed by value. When an argument is passed in a function call, a new variable is declared and initialized to the value passed in the function call.

Observe that the variable `x` in main and variable `x` in addOne are separate variables in memory. When `addOne` is called with `x` in `main()`, the value of `x` (i.e., 5) is passed to the function. This value is used to initialize a new variable `x` that exists only in `addOne`'s scope. Thus, the value of the variable `x` in the `main`'s scope remains unchanged even after the function `addOne` has been called.

**Example 1**
```cpp
void addOne(int x)
{
    x = x + 1;
    cout << "Added one to x: "<<x<< endl;
}

int main()
{
    int x = 5;
    cout << "Initial x: " << x << endl;
    addOne(x);
    cout << "Modified x: "<<x << endl;
}
```

Output:
```
Initial x: 5
Added one to x: 6
Modified x: 5
```

### Passing By Reference <a name="passbyreference"></a>

Arrays, on the other hand, are passed by reference (to the original array’s location in the computer’s memory). So, when an array is passed as a parameter, the original array is used by the function.

Observe that only one array, `X`, is in memory for the following example. When the function `addOne` is called in `main()`, a reference to the original array `X` is passed to `addOne`. Because the array `X` is passed by reference, any modifications to `X` in `addOne` are done to the original array. These modifications persist and are visible even after the flow of control has exited the function and we return to `main`.

**Example 1**
```cpp
void addOne(int X[])
{
   X[0] = X[0] + 1;
   cout << "Added one to X: "<<X[0] << endl;
}
int main()
{
    int X[4] = {1, 5, 3, 2};
    cout <<"Initial X: " << X[0] << endl;
    addOne(X);
    cout <<"Modified X: " <<X[0] << endl;
}
```

Output:
```
Initial X: 1
Added one to X: 2
Modified X: 2
```

## Multidimensional arrays <a name="2darrays"></a>
In C++, we can declare an array of arrays known as a multidimensional array. Multidimensional arrays store data in tabular form.
* **How to Declare Multidimensional arrays**
```cpp
// data_type array_name[dimension_1][dimension_2]....;
int my_ints[7][5];
bool my_booleans[10][15][12];
string my_strings[15][10];
```
* **How to Initialize Multidimensional arrays (Method 1)**
```cpp
int my_ints[2][2] = {1, 2, 3, 4};
```
The 2D array, in this case, will be filled from left to right from top to bottom.
```cpp
int my_ints[2][2] = {{1, 2}, {3, 4}}
```
You can also initialize a 2D array by explicitly separating the rows, as shown above.

* **How to Initialize Multidimensional  arrays  (Method 2)**
You can also initialize elements using nested loops:
```cpp
int my_ints[2][2];
for(int i=0; i < 2; i++)
{
    for(int j=0; j < 2; j++)
    {
        my_ints[i][j] = i + j;
    }
}
```
The above code will create the following 2D array {{0, 1}, {1, 2}}.

* **How to Access Elements in a Multidimensional array**

You can use  `my_ints[i][j]` to access the ith row and jth column of a 2D array

Multidimensional arrays can be iterated using nested loops, as shown below:
```cpp
int my_ints[2][2] = {{0, 1}, {1, 2}};
int res = 0;
for(int i=0; i < 2; i++)
{
    for(int j=0; j < 2; j++)
    {
        res = res + my_ints[i][j];
    }
}
cout << “Result is “ << res;
```
Output:
```
Result is 4
```

You can traverse through a multidimensional array and print the contents as shown below:

```cpp
int my_ints[3][3] = {{0, 1, 2}, {1, 2, 3}, {2, 3, 4}};
int res = 0;
for(int i=0; i < 3; i++)
{
    for(int j=0; j < 3; j++)
    {
        cout << my_ints[i][j] << " ";
    }
    cout << endl;
}
```
Output:
```
0 1 2
1 2 3
2 3 4
```

## Testing functions <a name="tests"></a>

Every C++ program you write should include a main function that tests the functions written. Depending on the return type of the function, you are expected to write different types of test cases.
Listed below is how we expect you to test different types of functions. The process will be different
if you are testing a `void` function, a non-void function that returns an `int` or `bool`, or a non-void function
that returns a `double`.

### 1. Void Functions with printed output <a name="void"></a>

For **void** functions that have printed output (i.e. functions that use `cout` to print to the terminal), call the testing function in the main function. Your tests should include the expected output in comments.

See the sample code below:
```c++
void checkDiscount(double discount) 
{
    if (discount >= 50) 
    {
        cout << "Great discount!" << endl;
    } 
    else 
    {
        cout << "Not a great discount." << endl;
    }
    return;
}
int main() 
{
    // test 1 for checkDiscount
    // expected output: "Great discount!"
    checkDiscount(82.7);

    // test 2 for checkDiscount
    // expected output: "Not a great discount."
    checkDiscount(22);

    return 0;
}
```


### 2. Non-Void Functions returning bool or int <a name="non-void-bool-int"></a>

For functions that return a **bool, char or int**, use **assert statements** 
from the **cassert** library (`#include <cassert>`) with a conditional expression.

Assert statements contain a conditional expression which will evaluate to `true` if the function's actual output matches what's expected. If the conditional expression evaluates to `false`, then your program will stop running after printing an error message.

For the purpose of this project, functions that return a `bool`, `char` or `int` can be compared to a specific value using the equality operator `==`.

Your test will look something like this:

`assert(<function call> == <value to compare to>);`

* `<function call>` is where you will call the function you want to test with its function parameters.
* `<value to compare to>` is the value you expect the function to return.
* `==` is the equality operator, and it compares the equality of both sides of itself.

See the sample code below:
```c++
#include <iostream>
#include <cassert>
using namespace std;

int addInts(int num1, int num2)
{
    // add num1 and num2 before returning
    return num1 + num2;
}

// isDrivingAge() returns true if the given age passed as a parameter
// is greater than or equal to 16, otherwise it returns false.
bool isDrivingAge(int age)
{
    return age >= 16;
}

int main()
{
    // test 1 for addInts
    assert(addInts(5, 6) == 11);

    // test 2 for addInts
    assert(addInts(10, 10) == 20);

    // test 3 for drivingAge
    assert(isDrivingAge(17) == true);

    // test 4 for drivingAge
    assert(isDrivingAge(14) == false);
}
```
_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._



### 3. Non-Void Functions returning double <a name="non-void-double"></a>

For functions that return a **double**, you should use an **assert statement** from the **cassert** header (`#include <cassert>`) with a conditional expression like above. The difference is that you will also need to include the following function in your program:
```c++
/**
 * doublesEqual will test if two doubles are equal to each other within two decimal places.
 */
bool doublesEqual(double a, double b, const double epsilon = 1e-2)
{
    double c = a - b;
    return c < epsilon && -c < epsilon;
}
```
Because the `double` type holds so much precision, it will be hard to compare the equality of a function that returns a 
double with another double value. To overcome this challenge, we can compare `double` values within a certain range 
of precision or decimal places. The function above compares the equality of two variables `a` and `b` up to two decimal places, and returns `true` if the values of `a` and `b` are equal with each other up to two decimal places.

You will be expected to use this function in conjunction with `assert` statements to test functions that return 
the type double.

Your test will look something like this: 

`assert(doublesEqual(<function call>, <value to compare to>));`

 * `<function call>` is where you will call the function you want to test with its function parameters 
 * `<value to compare to>` is the `double` value you expect the function to return.


See the sample code below:
```c++
#include <iostream>
#include <cassert>
using namespace std;
/**
 * doublesEqual will test if two doubles are equal to each other within two decimal places.
 */
bool doublesEqual(double a, double b, const double epsilon = 1e-2)
{
    double c = a - b;
    return c < epsilon && -c < epsilon;
}
/**
 * reciprocal returns the value of 1 divided by the number passed into the function.
 */
double reciprocal(int num)
{
    return 1.0 / num;
}
int main()
{
    // test 1 for reciprocal
    assert(doublesEqual(reciprocal(6), 0.16));
    // test 2 for reciprocal
    assert(doublesEqual(reciprocal(12), 0.083));
}
```
For test 1, `reciprocal(6)` is being called, and we expect the function to return the value `0.16`.
The return value of `reciprocal(6)` and `0.16` is passed in as parameters to the `doublesEquals` function,
which will then return `true` if these two values are equal or `false` if they are not.

_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._


### 4. Functions manipulating arrays <a name="test-function-array"></a>

Functions which manipulate arrays passed as arguments can be tested by asserting on individual elements of the array after calling the function. This works even for `void` functions because arrays are passed by reference; even if the function doesn't return anything, the array in the function is the same array in memory as the one outside the scope of your function.

Note that if the array is an array of `double`, the `doublesEqual` function described [here](#non-void-double) should be used to assert on individual array elements.

See the sample code below:
```cpp
#include<iostream>
#include<cassert>
using namespace std;

/**
 * Add one to each element of the array.
 */
void addOneToArrayElements(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        arr[i] = arr[i] + 1;
    }
}

int main() {
    // test 1 for addOneToArrayElements
    int test1_arr[3] = {1, 2, 3};
    addOneToArrayElements(test1Arr, 3);
    assert(test1_arr[0] == 2);
    assert(test1_arr[1] == 3);
    assert(test1_arr[2] == 4);

    // test 2 for addOneToArrayElements
    int test2_arr[3] = {8, 10};
    addOneToArrayElements(test2Arr, 2);
    assert(test2_arr[0] == 9);
    assert(test2_arr[1] == 11);
}
```
_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._

<br>



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

  ```cpp
  g++ -Wall -Werror -Wpedantic -std=c++17 name_of_source_file.cpp
  ```

- Using the ```-o``` option provided by g++ to name your executable [OPTIONAL]:

  ```cpp
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
* **Pass by Value** - A method of passing a parameter to a function where the function received a copy of the data stored in the variable and any modifications made to the parameter do not affect the original variable outside the function.
* **Pass by Reference** - A method of passing a parameter where the memory address or reference of the variable is passed to a function. This allows the function to directly access and modify the original variable, as it has a reference to its location in memory.
* **Scope** - Scope refers to the region of a program where a particular variable is accessible or visible. There are two types of scope: global scope, where a variable is accessible throughout the entire program, and local scope, where a variable is only accessible within a specific block or function.
* **Parameter** - A parameter is a variable or a value that is passed to a function when it is called. Parameters serve as placeholders within the function's definition, and they receive values from the arguments provided during the function call.
* **Argument** - An argument is the actual value that is passed to a function when it is called. Arguments are assigned to the parameters defined in the function's declaration or definition.
* **Function Call** - A function call is an instruction that tells the program to execute a specific function or method. When a function is called, the program jumps to the function's code, executes it, and then returns to the point in the program where the function was called.
* **Iteration** - Iteration is the process of repeatedly executing a set of statements or a block of code. It involves the repetition of a specific sequence of instructions until a certain condition.

-----
## Recitation 7: pre-quiz <a name="pre-quiz"></a>

1. When declaring 2D arrays in C++, it is possible to make one dimension flexible, but the other dimension must remain fixed. Which specific dimension should be hard coded in this scenario? And why is this required? 

2. How can you access a specific element in a 2D array?

3. What is the output the below program?

```cpp
#include <iostream>
using namespace std;

void mysteryFunction(int arr[], int size)
{
    int temp = arr[0];
    int i=0;
    while(i < size-1)
    {
       arr[i] = arr[i+1];
       i++;
    }
    arr[i] = temp;
}
int main() 
{
    const int N=7;
    int myArr[N] = {4,6,8,0,3,2,1};

    mysteryFunction(myArr, N);

    // Display the result
    cout << "The result is: "<< endl;
    for (int i = 0; i < N; i++) 
    {
        cout << myArr[i] << " ";
    }

    return 0;
}
```

4. Consider the following code snippet, what are the values of `a`, `b` and `c`.

```cpp
const int N=3;
int matrix[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int a = matrix[0][0] + matrix[1][1] + matrix[2][2];
int b = matrix[1][2] * matrix[2][1];
int c = matrix[3][3];
```


5a. You have seen function tables designed to convey the information in a function on previous assignments. Now, given the code shown in part b of this question, fill in the following table for the `elementWiseProduct()` function. 

<table>
<tr>
<td> 

Function: <br>

</td>
<td>

// Put your answers in this column.
```cpp

```

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
<td> Example: </td>
<td>


</td>
</tr>
</table>

5b. Write 4 assert statements to test the ` elementWiseProduct` function in the blanks below.

```cpp
#include <iostream>
#include <cassert>
using namespace std;

void elementWiseProduct(int a[][3], int b[][3], int row, int col)
{
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            a[i][j] = a[i][j] * b[i][j];
        }
    }
}
int main() 
{
    const int N=2;
    const int M=3;

    int matrix1[N][M] = {
        {1,2,3},
        {2,3,1}
    };
    int matrix2[N][M] = {
        {2,3,1},
        {2,3,1}
    };

    // Call the elementWiseProduct function with the two matrices
    elementWiseProduct(matrix1, matrix2, N, M);

    // Display the result matrix
    cout << "The result is: "<< endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << matrix1[i][j] << " ";
        }
        cout << '\n';
    }

    // include assert statements here
    assert(_____________________);
    assert(_____________________);
    assert(_____________________);
    assert(_____________________);

    return 0;
}

```

6. The program below displays all the elements below the main diagonal of the 2D matrix. Fill in the blank accordingly.

```cpp
#include <iostream>
using namespace std;

int main() 
{
    const int rows = 3;
    const int cols = 3;

    int matrix[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Elements below the main diagonal are: ";
    for (int i = 0; i < rows; i++) 
    {
        for (int j=0; j< cols; j++)
        {
            if (______________) // FILL IN THIS LINE
            {
                cout << matrix[i][j] << " ";
            }
        }
    }

    cout << endl;

    return 0;
}
```
Expected output
<pre><code>
4 7 8
</code></pre>


