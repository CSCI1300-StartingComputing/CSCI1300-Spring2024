#### **CSCI 1300 CS1: Starting Computing: Homework 6**
#### **Naidu/Godley - Spring 2024**
#### **Due: Friday, March 22nd, by 5pm MST**

<br/>

# Table of contents
1. [Objectives](#objectives)
2. [Questions](#questions)
    1. [Question 1](#question1)
    2. [Question 2](#question2)
    3. [Question 3](#question3)
    4. [Question 4](#question4)
    5. [Question 5](#question5)
    6. [Question 6](#question6)
3. [Deliverables](#deliverables)
    1. [File Header](#fileheader)
    2. [Checklist](#checklist)
    3. [Grading Rubric](#grading)

# Objectives <a name="objectives"></a>

* Understand how to read and process data from files
* Understand how to use arrays and structs
* Work through the assigned questions in VSCode and submit answers on coderunner

# Questions <a name="questions"></a>

**Warning**: you are not allowed to use global variables, string streams, vectors, pointers, and references for this homework. <br><br>
If you are suspected of using an outside source to complete homework, you may be called for an in-person interview and could risk losing points for the assignment. <br><br>
For questions that require the use of a function, coderunner will check that you have written the function correctly. DO NOT WRITE ALL YOUR CODE IN ```main()```! Your code will NOT compile if you do not have the correct function. See below for an example of what this could look like: <br>

![q2_function_error](./images/q2_function_error.png)

> Note: All files associated with the test cases on coderunner can be found in the [data files](./data_files) folder.

## Question 1 (2 points): National Park Names <a name="question1"></a>

*This question may require the use of file streams, loops, and arrays.*

Write a C++ program to read a file of national park names and print them to the console in the same order as they appear in the file.

> Note: There are 63 national parks in the USA, which is why our `MAX_SIZE` is set to 63.

For this question, the answer box on coderunner is pre-loaded with the following solution template. You are only required to fill in the appropriate blanks. Additionally, you may use the [national_parks_1.txt](./data_files/national_parks_1.txt) file to test out your code. All the files used in coderunner can be found in the [data file folder](./data_files). You may also create more files for further testing.

```cpp
#include <iostream>
#include <fstream>

using namespace std;

void listNationalParks(string filename)
{
    // initialize variables
    ifstream file_in(filename); // opens a file

    if (file_in.fail())
    {
        cout << "Failed to open file." << endl;
        return;
    }

    const int MAX_SIZE = 63;
    string parks[MAX_SIZE];

    string park;

    int idx = 0;

    // Fill in the blank below with code to read from the file and store in the parks array
    _______________________________
    {
        parks[idx] = park;
        idx += 1;

        // Fill in the blank below with code to check if you are trying to store more values than possible in the parks array
        __________________________
        {
            break;
        }

    }

    for (int i = 0; i < idx; ++i)
    {
        cout << i << ": " << parks[i] << endl;
    }

    file_in.close();
}

int main()
{
    string filename;
    cout << "Enter national parks filename" << endl;
    cin >> filename;
    listNationalParks(filename);
    return 0;
}
```

Function Specification:

<table>

<tr>
<td>
Function:

```listNationalParks(string)```

</td>
<td>

```cpp
void listNationalParks(string filename)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>

To read the list of national parks from the file `filename` and display all of them with their corresponding index

</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

string ```filename``` - the path to the file containing the list of national parks
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>

- Does not return anything
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:
</td>
<td>

- If ```filename``` file does not exist, "Failed to open file." is displayed.

</td>
</tr>
<tr></tr>
<tr>
<td>
Example:
</td>
<td>

Sample contents of the file "national_parks_1.txt":
```
Acadia
Arches
Denali
Congaree
Haleakala
Katmai
Sequoia
Pinnacles
Olympic
Redwood
Black Canyon of the Gunnison
```

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of listNationalParks() is included.

int main()
{
    string filename = "national_parks_1.txt";
    listNationalParks(filename);

    return 0;
}
```

Sample output:
```
0: Acadia
1: Arches
2: Denali
3: Congaree
4: Haleakala
5: Katmai
6: Sequoia
7: Pinnacles
8: Olympic
9: Redwood
10: Black Canyon of the Gunnison
```

</td>
</tr>

</table>

Please make sure to add the file header in your program before you submit your code on coderunner. Refer to [File Headers](#fileheaders) for instructions.

Develop and validate your solution in VS Code. Once you are happy with your solution, go to coderunner on Canvas and paste the **whole program** into the answer box!

## Question 2 (6 points): Cook-Off <a name="question2"></a>

*This question may require the use of file streams, loops, and arrays.*

You and your friends are hosting a cook-off to determine the best chef. Each contestant must adhere to a specific ingredient list stored in a file, such as [ingredients_1.txt](). Additionally, your friends have their ingredient lists stored in files like [ingredients_1_friend_1.txt]() and [ingredients_1_friend_2.txt](). Your task is to develop a program that compares the original ingredient list with each friend's list and tallies the number of missing ingredients for each friend. The winner will be determined by the contestant who forgot the fewest ingredients. The program will report which ingredients are missing and how many ingredients are missing. It will also report which friend has won the competition among the 2.

In your program, you will have to write 2 functions to achieve the following:
1. Read the list of ingredients from a file of ingredients.
2. Compare 2 arrays of ingredients and determine the missing ingredients and the number of missing ingredients.

Function 1 Specification:

<table>

<tr>
<td>
Function:

```readIngredients(string, string[], const int)```

</td>
<td>

```cpp
int readIngredients(string filename, string ingredients[], const int MAX_INGREDIENTS)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>

To read the list of ingredients from the file `filename` and store it in the `ingredients` array

</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

string ```filename``` - the path to the file containing the list of ingredients <br>
string [] ```ingredients``` - the array to be populated with the contents from `filename` <br>
const int ```MAX_INGREDIENTS``` - the maximum number of ingredients an ingredient list can have
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>

- If successful (function parameters are correct), it returns the size of the `ingredients` array
- The function should not print anything.
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:
</td>
<td>

- If the file with the name, ```filename```, does not exist, -1 is returned.
- If the number of ingredients exceeds `MAX_INGREDIENTS`, return the size of the fully populated `ingredients` array and fill the array with as many ingredient as possible.

</td>
</tr>
<tr></tr>
<tr>
<td>
Example:
</td>
<td>
Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem.

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of readIngredients() is included.

int main()
{
    const int MAX_INGREDIENTS = 20;

    string ingredients_arr[MAX_INGREDIENTS];

    int ingredients_size = readIngredients("ingredients.txt", ingredients_arr, MAX_INGREDIENTS);

    // Checking if the file was opened correctly
    if (ingredients_size == -1)
    {
      cout << "Failed to open file." << endl;
    }
    else
    {
      cout << "The ingredients are:" << endl;
      for (int i = 0; i < ingredients_size; ++i) {
          cout << ingredients_arr[i] << endl;
      }
    }

    return 0;
}
```

Sample Output:
```
The ingredients are:
Salt
Pepper
Honey
Sesame Oil
```

</td>
</tr>

</table>

Function 2 Specification:

<table>

<tr>
<td>
Function:

```compareIngredients(string [], string [], int, int, string [])```

</td>
<td>

```cpp
int compareIngredients(string original_ingredients[],
                       string friend_ingredients[],
                       int original_ingredients_size,
                       int friend_ingredients_size,
                       string missing_ingredients[])
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>

To compare the ingredients in the `friend_ingredients` against `original_ingredients` and populate `missing_ingredients` with ingredients missing in the `friend_ingredients` array.

</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

string [] ```original_ingredients``` - the array containing the list of reference ingredients <br>
string [] ```friend_ingredients``` - the array containing ingredients that will be compared with original_ingredients <br>
int ```original_ingredients_size``` - the size of the `original_ingredients` array <br>
int ```friend_ingredients_size``` - the size of the `friend_ingredients` array <br>
string [] ```missing_ingredients``` - the array containing ingredients present in `original_ingredients` but not in `friend_ingredients`
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>

- If successful (function parameters are correct), it returns the size of the `missing_ingredients` array
- The function should not print anything.
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:
</td>
<td>

- If ```original_ingredients_size``` is 0, 0 is returned.
- Any ingredient in a file would not be repeated in the same file

</td>
</tr>
<tr></tr>
<tr>
<td>
Example:
</td>
<td>
Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem.

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of compareIngredients is included.
int main()
{
    const int MAX_INGREDIENTS = 20;

    string original_ingredients[MAX_INGREDIENTS] = {"Salt",
                                             "Pepper",
                                             "Ginger",
                                             "Honey",
                                             "Rice",
                                             "Chicken"};

    string friend_ingredients[MAX_INGREDIENTS] = {"Ginger",
                                             "Pepper",
                                             "Chicken",
                                             "Rice"};

    string missing_ingredients[MAX_INGREDIENTS];

    int original_ingredients_size = 6;
    int friend_ingredients_size = 4;

    int missing_ingredients_size = compareIngredients(original_ingredients,
                                                      friend_ingredients,
                                                      original_ingredients_size,
                                                      friend_ingredients_size,
                                                      missing_ingredients);

    cout << "The missing ingredients are:" << endl;
    for (int i = 0; i < missing_ingredients_size; i++) {
      cout << missing_ingredients[i] << endl;
    }

    cout << "The number of missing ingredients is: " << missing_ingredients_size << endl;

    return 0;
}
```

Sample Output:
```
The missing ingredients are:
Salt
Honey
The number of missing ingredients is: 2
```

</td>
</tr>

</table>

Please make sure to add the file header in your program before you submit your code on coderunner. Refer to [File Headers](#fileheaders) for instructions.

Develop and validate your solution in VS Code. Once you are happy with your solution, go to coderunner on Canvas and paste **only** the `readIngredients` and `compareIngredients` functions into the answer box!

*Sample runs*: <br>
Refer to the example above for sample usage of the function.
<table>
<tr>
<td>

Example 1: <br>
</td>

<td>

Sample contents of the file "ingredients_1.txt":
```
Salt
Pepper
Honey
Soy Sauce
Garlic
Ginger
Sesame Oil
Paprika
Chicken
Beans
Corn
Chicken Stock
Rice
Peas
Sunflower Oil
```

Sample contents of the file "ingredients_1_friend_1.txt":
```
Salt
Pepper
Honey
Soy Sauce
Garlic
Ginger
```

Sample contents of the file "ingredients_1_friend_2.txt":
```
Ginger
Sesame Oil
Paprika
Chicken
Beans
Corn
Chicken Stock
Rice
Peas
Sunflower Oil
```

Expected output of the program:
```
Missing ingredients for friend 1:
1: Sesame Oil 2: Paprika 3: Chicken 4: Beans 5: Corn 6: Chicken Stock 7: Rice 8: Peas 9: Sunflower Oil
Missing ingredients for friend 2:
1: Salt 2: Pepper 3: Honey 4: Soy Sauce 5: Garlic
Friend 2 wins!
```

</td>
</tr>

<tr></tr>

<tr>
<td>
Example 2: <br>
</td>

<td>

Sample contents of the file "ingredients_2.txt":
```
Tomatoes
Onion
Garlic
Vegetable broth
Olive oil
Salt
Pepper
Sugar
Fresh basil
Heavy cream
```

Sample contents of the file "ingredients_2_friend_1.txt":
```
Tomatoes
Onion
Salt
Vegetable broth
Pepper
Fresh basil
Heavy cream
```

Sample contents of the file "ingredients_2_friend_2.txt":
```
Tomatoes
Onion
Garlic
Sugar
Fresh basil
Heavy cream
```

Expected output of the program:
```
Missing ingredients for friend 1:
1: Garlic 2: Olive oil 3: Sugar
Missing ingredients for friend 2:
1: Vegetable broth 2: Olive oil 3: Salt 4: Pepper
Friend 1 wins!
```

</td>
</tr>

</table>

## Question 3 (8 points): Too Many Decisions! <a name="question3"></a>

*This question may require the use of file streams, split, loops, and arrays.*

**Cyclomatic Complexity**: A measurement developed by Thomas McCabe to determine the stability and level of confidence in a program. It measures the number of linearly independent paths through a program module. Programs with lower Cyclomatic complexity are easier to understand and less risky to modify.

Without additional intricacy, cyclomatic complexity would be the number of decision-making steps in the program. A close friend of yours is writing different functions to be used in their programs. One such file is [func_1.cpp](). You must write a C++ program to tell your friend whether the function is a "good" function. A "good" function has a cyclomatic complexity of no more than 10. This means that you must determine the number of if conditions and the number of loops present in the function, and this total should not exceed 10.

Important assumptions and things to note:
1. `if`, `else if`, and `else`, all count as decision-making statements.
2. `for`, `while`, and `do-while` loops iterate based on a condition; therefore, they also count as decision-making statements.
3. The words `if`, `else`, `for`, `while`, and `do` **will not** be used in any statements other than decision-making statements. So, for example, there will never be a scenario where the file contains a statement like this:
```cpp
cout << "add 1 to a if a < 50" << endl;
```

The program must have an output that consists of 4 lines as follows: <br>
Line 1: `Conditions in ifs:` and the number of if conditions. <br>
Line 2: `Conditions in loops:` and the number of loops. <br>
Line 3: `Cyclomatic Complexity:` and the total number of if conditions and loops. <br>
Line 4: `It is a good function!` if the cyclomatic complexity is no more than 10, or `It is not a good function!` otherwise.

Example:
```
Conditions in ifs: 6
Conditions in loops: 2
Cyclomatic Complexity: 8
It is a good function!
```

To achieve this, you must use 2 functions:
1. To count the number of if statements in a line
2. To count the number of loop statements in a line

> Hint: You can use the split function from homework 5 <br>
> Note: If at any point the line is commented (represented by `//`), the function should stop counting beyond this point

Follow the given function specifications for the above 2 functions:

Function 1 Specification:

<table>

<tr>
<td>
Function:

```countIfConditions(string, const int)```

</td>
<td>

```cpp
int countIfConditions(string line)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>

To get the total number of `if`, `else if`, and `else` statements present in the given `line`

</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

string ```line``` - a line of text
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>

- If successful (function parameters are correct), it returns the total number of `if`, `else if`, and `else` statements present in the `line`
- The function should not print anything.
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:
</td>
<td>

- If `line` is empty, 0 is returned
- If the number of words in the `line` exceeds `40`, 0 is returned
- If at any point the line is commented (represented by `//`), the function should stop counting beyond this point

</td>
</tr>
<tr></tr>
<tr>
<td>
Example:
</td>
<td>
Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem.

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of countIfConditions is included.

int main()
{
    string line = "if (1 < 5) { if (2 > 10) { cout << \"Impossible!\" << endl; } else { cout << \"Possible!\" << endl; } } }"

    int if_count = countIfConditions(line);

    cout << "Conditions in ifs: " << if_count << endl;

    return 0;
}
```

Sample Output:
```
Conditions in ifs: 3
```

</td>
</tr>

</table>

Function 2 Specification:

<table>

<tr>
<td>
Function:

```countLoopConditions(string)```

</td>
<td>

```cpp
int countLoopConditions(string line)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>

To get the total number of `for`, `while`, and `do while` loop statements present in the given `line`

</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

string ```line``` - a line of text
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>

- If successful (function parameters are correct), it returns the total number of `for`, `while`, and `do while` loop statements present in the given `line`
- The function should not print anything.
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:
</td>
<td>

- If `line` is empty, 0 is returned
- If the number of words in the `line` exceeds `40`, 0 is returned
- If at any point the line is commented (represented by `//`), the function should stop counting beyond this point

</td>
</tr>
<tr></tr>
<tr>
<td>
Example:
</td>
<td>
Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem.

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of countLoopConditions is included.

int main()
{
    string line = "for (int i = 0; i < 10; i++) { while (i > 10) { cout << \"Never\" << endl; } }";

    int loop_count = countLoopConditions(line);

    cout << "Conditions in loops: " << loop_count << endl;

    return 0;
}
```

Sample Output:
```
Conditions in loops: 2
```

</td>
</tr>

</table>

Please make sure to add the file header in your program before you submit your code on coderunner. Refer to [File Headers](#fileheaders) for instructions.

Develop and validate your solution in VS Code. Once you are happy with your solution, go to coderunner on Canvas and paste the **only** the `countIfConditions`, `countLoopConditions`, and any helper functions you used into the answer box!

*Sample runs*: <br>
Refer to the example above for sample usage of the function.
<table>
<tr>
<td>

Example 1: <br>
</td>

<td>

Sample contents of the file "func_1.cpp":
```
#include <iostream>

using namespace std;

void testFunc(int a) {
    if (a == 0) {
        return;
    }
    if (a < 50) { if (a > 10) {
            cout << "It is < 50 and > 10" << endl;
        } else if (a < 10) {
            cout << "It is < 50 and < 10" << endl;
        }
    } else if (a > 50 && a < 100){
        cout << "It is > 50 and < 100" << endl;
    } else {
        cout << "It is > 100" << endl;
    }

    for (int i = 0; i < 10; ++i) { cout << i; }
    while (1 < 2) { cout << "1 < 2"; break; }

    return;
}
```

Expected output of the program:
```
Conditions in ifs: 6
Conditions in loops: 2
Cyclomatic Complexity: 8
It is a good function!
```

</td>
</tr>

<tr></tr>

<tr>
<td>
Example 2: <br>
</td>

<td>

Sample contents of the file "func_2.cpp":
```
int addPositives(int a, int b, int c) {
    int result = 0;

    if (a > 0) { if (b > 0) { if (c > 0) {
                result = a + b + c;
            } else {
                result = a + b;
            }
        } else {
            if (c > 0) {
                result = a + c;
            } else {
                result = a;
            }
        }
    } else {
        if (b > 0) {
            if (c > 0) {
                result = b + c;
            } else {
                result = b;
            }
        } else {
            if (c > 0) {
                result = c;
            } else {
                result = 0;
            }
        }
    }

    return result;
}
```

Expected output of the program:
```
Conditions in ifs: 14
Conditions in loops: 0
Cyclomatic Complexity: 14
It is not a good function!
```

</td>
</tr>

<tr></tr>

<tr>
<td>
Example 3: <br>
</td>

<td>

Sample contents of the file "func_3.cpp":
```
#include <iostream>

using namespace std;

void randomFunc()
{
    int a = 0, b = 0;

    do {
        a++;
        b++;
    } while (a < 10 && b < 10);

    // if (a > 20) {
    //     cout << "a > 20" << endl;
    // }

    if (a == 10) { // if (b == 10) {
        if (b == 10) {
            cout << "10 and 10" << endl;
        }
    }

    while (a <= 10) {
        // for (int i = 0; i < b; i++) {
        //     cout << b << " ";
        // }
        // cout << endl;
        for (int i = 0; i < b; i++) {
            cout << a + b << " ";
        }
        cout << endl;

        a--;
        b--;
    }
}
```

Expected output of the program:
```
Conditions in ifs: 2
Conditions in loops: 3
Cyclomatic Complexity: 5
It is a good function!
```

</td>
</tr>

<tr></tr>

<tr>
<td>
Example 4: <br>
</td>

<td>

Sample contents of the file "func_4.cpp":
```
#include <iostream>

using namespace std;

void zeroComplexity()
{
    int a = 0, b = 0;

    a++; b++;

    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;
    // cout << "c is: " << c << endl;
}
```

Expected output of the program:
```
Conditions in ifs: 0
Conditions in loops: 0
Cyclomatic Complexity: 0
It is a good function!
```

</td>
</tr>

</table>


## Question 4 through 5 (20 points): Restaurant Ratings <a name="question45"></a>


## Question 4 (10 points): Restaurant Struct <a name="question4"></a>

*This question may require the use of structs and functions.*

You are tasked with designing a program to evaluate restaurants based on a food quality rating, cleanliness rating, and wait time rating, ultimately providing an overall rating. Write a C++ program to accept the name of a restaurant, its food quality rating (0-10), cleanliness rating (0-10), and wait time rating (0-5). Use a function to calculate the overall rating using the function specification and formula given below:
```
6.3 * (food quality rating) + 4.3 * (cleanliness rating) + 3.4 * (5 - wait time rating)
```

You must create a struct named `Restaurant` with the following attributes: the name of the restaurant, food quality rating, cleanliness rating, wait time rating, and overall rating.

```cpp
struct Restaurant
```
| **Member Type** |   **Member Name**   |              **Description**            |
|-----------------|---------------------|-----------------------------------------|
| ```string```    | ```name```          | Restaurant's name                       |
| ```int```       | ```food_quality```  | Restaurant's food quality rating (0-10) |
| ```int```       | ```cleanliness```   | Restaurant's cleanliness rating (0-10)  |
| ```int```       | ```wait_time```     | Restaurant's wait time rating (0-5)     |
| ```double```    | ```overall```       | Restaurant's overall rating             |


Function Specification:

<table>

<tr>
<td>
Function:

```getOverallRating(Restaurant)```

</td>
<td>

```cpp
double getOverallRating(Restaurant restaurant)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>

To get the overall rating of a restaurant, given a variable of the type `Restaurant`

</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

Restaurant ```restaurant``` - the variable containing the details of the restaurant
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>

- If successful (function parameters are correct), it returns the overall rating
- The function should not print anything.
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:
</td>
<td>

- If any of the ratings in `restaurant` are not within its bounds, -1 is returned

</td>
</tr>
<tr></tr>
<tr>
<td>
Example:
</td>
<td>
Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem.

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of getOverallRating is included.

int main()
{
    Restaurant r;

    r.name = "McDonalds";
    r.food_quality = 4;
    r.cleanliness = 7;
    r.wait_time = 5;

    r.overall = getOverallRating(r);

    if (r.overall == -1)
    {
        cout << "Invalid rating(s) entered." << endl;
    }
    else
    {
        cout << "Restaurant: " << r.name << " Overall: " << r.overall << endl;
    }

    return 0;
}
```

Sample Output:
```
Restaurant: McDonalds Overall: 55.3
```

</td>
</tr>

</table>


Please make sure to add the file header in your program before you submit your code on coderunner. Refer to [File Headers](#fileheaders) for instructions.

Develop and validate your solution in VS Code. Once you are happy with your solution, go to coderunner on Canvas and paste only the `Restaurant` struct and `getOverallRating` function into the answer box!

*Sample runs*: <br>
Refer to the example above for sample usage of the function.
<table>
<tr>
<td>

Example 1: <br>
</td>

<td>

Sample input to the program, in the order of name, food quality, cleanliness, and wait time, respectively:
```
McDonald's
4
7
5
```

Sample output of the program:
```
Restaurant: McDonald's Overall: 55.3
```

</td>
</tr>

<tr></tr>

<tr>
<td>
Example 2: <br>
</td>

<td>

Sample input to the program:
```
Aloy Thai
9
8
3
```

Sample output of the program:
```
Restaurant: Aloy Thai Overall: 97.9
```
</td>
</tr>

<tr></tr>

<tr>
<td>
Example 3: <br>
</td>

<td>

Sample input to the program:
```
Invalid
2
3
-1
```

Sample output of the program:
```
Invalid rating(s) entered.
```
</td>
</tr>

<tr></tr>

<tr>
<td>
Example 4: <br>
</td>

<td>

Sample input to the program:
```
Worst
0
0
5
```

Sample output of the program:
```
Restaurant: Worst Overall: 0
```
</td>
</tr>

</table>


## Question 5 (10 points): List of Restaurants <a name="question5"></a>

*This question may require the use of file streams, split, loops, arrays, and structs.*

In this question, you will use the same `struct` for `Restaurant` from [Question 4](#question4). You will be given a file, such as [restaurants_1.txt](). It first contains the name of the restaurant, followed by its food quality rating, cleanliness rating, and wait time rating, all separated by a `~`. You will have to read the file containing the details of multiple restaurants and write functions for the following:
1. Read the restaurant details from a file and populate the required arrays
2. To find the best *<blank>* rating <br>

This *<blank>* can be one of the following options: <br>
Option 1. "Food Quality" <br>
Option 2. "Cleanliness" <br>
Option 3. "Wait Time" <br>
Option 4. "Overall"

> Note: You can use the split function from homework 5.

Follow the given function specifications for the above 2 functions:

Function 1 Specification:

<table>

<tr>
<td>
Function:

```readRestaurantDetails(string, Restaurant [], const int)```

</td>
<td>

```cpp
int readRestaurantDetails(string filename, Restaurant restaurants[], const int MAX_RESTAURANTS)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>

To read all the restaurant details from a given file named `filename` and calculate the `overall` rating for each `Restaurant` in `restaurants`

</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

string ```filename``` - the path to the file containing restaurant details <br>
Restaurant [] ```restaurants``` - the array to be populated with the details of all the restaurants <br>
const int ```MAX_RESTAURANTS``` - the maximum number of restaurants that can be present in the file containing restaurant details
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>

- If successful (function parameters are correct), it returns the size of the `restaurants` array
- The function should not print anything.
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:
</td>
<td>

- If ```filename``` file does not exist, -1 is returned.
- If there are an incorrect number of words in a line in the file, skip the line entirely.

</td>
</tr>
<tr></tr>
<tr>
<td>
Example:
</td>
<td>
Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem.

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of readRestaurantDetails is included.

int main()
{
    const int MAX_RESTAURANTS = 30;

    string restaurants_filename = "restaurants.txt";
    Restaurant restaurants[MAX_RESTAURANTS];

    int res_size = readRestaurantDetails(restaurants_filename, restaurants, MAX_RESTAURANTS);

    // Checking if the file was opened correctly
    if (res_size == -1)
    {
        cout << "Failed to open file." << endl;
    }
    else
    {
        for (int i = 0; i < res_size; ++i) {
            cout << "Restaurant: " << restaurants[i].name << " ";
            cout << "Ratings: ";
            cout << restaurants[i].food_quality << " ";
            cout << restaurants[i].cleanliness<< " ";
            cout << restaurants[i].wait_time << " ";
            cout << "Overall: ";
            cout << restaurants[i].overall << " ";
            cout << endl;
        }
    }

    return 0;
}
```

Sample Output:
```
Restaurant: Wendys Ratings: 6 3 2 Overall: 60.9
Restaurant: Chick-fil-a Ratings: 9 5 5 Overall: 78.2
Restaurant: Snarfburger Ratings: 10 4 3 Overall: 87
Restaurant: Cosmo's Pizza Ratings: 7 3 2 Overall: 67.2
```

</td>
</tr>

</table>

The options are repeated here for your reference:
Option 1. "Food Quality" <br>
Option 2. "Cleanliness" <br>
Option 3. "Wait Time" <br>
Option 4. "Overall"

Function 2 Specification:

<table>

<tr>
<td>
Function:

```getBest(Restaurant [], int, string)```

</td>
<td>

```cpp
int getBest(Restaurant restaurants[], int arr_size, string metric)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>

To get the index of the best restaurant based on the metric

</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

Restaurant [] ```restaurants``` - the array that has been populated with the details of all the restaurants <br>
int ```arr_size``` - the maximum number of restaurants that are present in the `restaurants` array <br>
string ```metric``` - the metric based on which an index will be returned
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>

- If successful (function parameters are correct), it returns an index corresponding to the best metric from the restaurants array
- The function should not print anything.
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:
</td>
<td>

- If `metric` is not a valid option, -1 is returned.

</td>
</tr>
<tr></tr>
<tr>
<td>
Example:
</td>
<td>
Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem.

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of getBest is included.

int main()
{
    const int MAX_RESTAURANTS = 30;

    string restaurants_filename = "restaurants.txt";
    Restaurant restaurants[MAX_RESTAURANTS];

    int arr_size = readRestaurantDetails(restaurants_filename, restaurants, MAX_RESTAURANTS);

    // Checking if the file was opened correctly
    if (arr_size == -1)
    {
        cout << "Failed to open file." << endl;
    }
    else if (arr_size == 0)
    {
        cout << "Empty file." << endl;
    }
    else
    {
        int idx = getBest(restaurants, arr_size, "Food Quality");

        if (idx == -1)
        {
            cout << "Invalid metric." << endl;
        }
        else
        {
            cout << "Restaurant: " << restaurants[idx].name << " ";
            cout << "Ratings: ";
            cout << restaurants[idx].food_quality << " ";
            cout << restaurants[idx].cleanliness << " ";
            cout << restaurants[idx].wait_time << " ";
            cout << "Overall: ";
            cout << restaurants[idx].overall << " ";
            cout << endl;
        }
    }

    return 0;
}
```

Sample Output:
```
Restaurant: Snarfburger Ratings: 10 4 3 Overall: 87
```

</td>
</tr>

</table>

Please make sure to add the file header in your program before you submit your code on coderunner. Refer to [File Headers](#fileheaders) for instructions.

Develop and validate your solution in VS Code. Once you are happy with your solution, go to coderunner on Canvas and paste **only** the `Restaurant` struct, `readRestaurantDetails`, `getBest`, and any other helper functions you used into the answer box!

*Sample runs*: <br>
Refer to the example above for sample usage of the function.
<table>
<tr>
<td>

Example 1: <br>
</td>

<td>

Sample contents of the file "restaurants_1.txt"
```
Wendys~6~3~2
Chick-fil-a~9~5~5
McDonalds~2~2~2~2
Snarfburger~10~4~3
Cosmo's Pizza~7~3~2
Pizza Hut~1~2
```

Sample input to the program:
```
Food Quality
```

Sample output of the program:
```
Restaurant: Snarfburger Ratings: 10 4 3 Overall: 87
```

</td>
</tr>

<tr></tr>

<tr>
<td>
Example 2: <br>
</td>

<td>

Sample contents of the file "restaurants_1.txt"
```
Wendys~6~3~2
Chick-fil-a~9~5~5
McDonalds~2~2~2~2
Snarfburger~10~4~3
Cosmo's Pizza~7~3~2
Pizza Hut~1~2
```

Sample input to the program:
```
Cleanliness
```

Sample output of the program:
```
Restaurant: Chick-fil-a Ratings: 9 5 5 Overall: 78.2
```
</td>
</tr>

<tr></tr>

<tr>
<td>
Example 3: <br>
</td>

<td>

Sample contents of the file "restaurants_1.txt"
```
Wendys~6~3~2
Chick-fil-a~9~5~5
McDonalds~2~2~2~2
Snarfburger~10~4~3
Cosmo's Pizza~7~3~2
Pizza Hut~1~2
```

Sample input to the program:
```
Wait Time
```

Sample output of the program:
```
Restaurant: Chick-fil-a Ratings: 9 5 5 Overall: 78.2
```
</td>
</tr>

<tr></tr>

<tr>
<td>
Example 4: <br>
</td>

<td>

Sample contents of the file "restaurants_1.txt"
```
Wendys~6~3~2
Chick-fil-a~9~5~5
McDonalds~2~2~2~2
Snarfburger~10~4~3
Cosmo's Pizza~7~3~2
Pizza Hut~1~2
```

Sample input to the program:
```
Overall
```

Sample output of the program:
```
Restaurant: Chick-fil-a Ratings: 9 5 5 Overall: 78.2
```
</td>
</tr>

<tr></tr>

<tr>
<td>
Example 5: <br>
</td>

<td>

Sample contents of the file "restaurants_1.txt"
```
Wendys~6~3~2
Chick-fil-a~9~5~5
McDonalds~2~2~2~2
Snarfburger~10~4~3
Cosmo's Pizza~7~3~2
Pizza Hut~1~2
```

Sample input to the program:
```
Bad Metric
```

Sample output of the program:
```
Invalid metric.
```
</td>
</tr>

</table>


## Question 6 (10 points): Comparing Mountains (Extra Credit) <a name="question6"></a>

*This question may require the use of file streams, split, loops, arrays, and structs.*

You've been tasked with developing a program for a trekking company aimed at assisting customers in selecting suitable mountains for trekking. The name, continent, trail length, elevation, and difficulty rating (1-5) of various mountains, are stored in a file, such as [mountains_1.txt](./data_files/mountains_1.txt). You must read this file, extract the mountain details, and organize them for further use within the program.

You must create a structure named `Mountain` with the following attributes: the name of the mountain, the continent, the trail length, the elevation, and the difficulty.

```cpp
struct Mountain
```
| **Member Type** |   **Member Name**   |                **Description**                 |
|-----------------|---------------------|------------------------------------------------|
| ```string```    | ```name```          | Mountain's name                                |
| ```string```    | ```continent```     | Mountain's continent                           |
| ```int```       | ```trail_length```  | Mountain's trekking trail length in kilometers |
| ```int```       | ```elevation```     | Mountain's peak elevation in meters            |
| ```int```       | ```difficulty```    | Mountain's trekking difficulty from 1-5        |

In your program, you will have to write 2 functions to achieve the following:
1. Read the mountain details from a file and populate the required arrays
2. Populate an array of mountains based on a choice

The choices are as follows: <br>
Choice 1. Obtaining mountains with a certain difficulty rating. <br>
Choice 2. Obtaining mountains taller than a certain elevation. <br>
Choice 3. Obtaining mountains with a trail longer than a certain trail length. <br>
Choice 4. Obtaining mountains in a certain continent.

Follow the given function specifications for the above 2 functions:

Function 1 Specification:

<table>

<tr>
<td>
Function:

```readMountainDetails(string, Mountain [], const int)```

</td>
<td>

```cpp
int readMountainDetails(string filename, Mountain mountains[], const int MAX_MOUNTAINS)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>

To read all the mountain details from a given file named `filename`

</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

string ```filename``` - the path to the file containing mountain details <br>
Mountain [] ```mountains``` - the array to be populated with the details of all the mountains <br>
const int ```MAX_MOUNTAINS``` - the maximum number of mountains that can be present in the file containing mountain details
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>

If successful (function parameters are correct), it returns the size of the `mountains` array
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:
</td>
<td>

- If ```filename``` file does not exist, -1 is returned.
- If there are an incorrect number of words in a line in the file, skip the line entirely.

</td>
</tr>
<tr></tr>
<tr>
<td>
Example:
</td>
<td>
Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem.

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of readMountainDetails is included.

int main()
{
    const int MAX_MOUNTAINS = 30;

    string mountains_filename = "mountains.txt";
    Mountain mountains[MAX_MOUNTAINS];

    int arr_size = readMountainDetails(mountains_filename, mountains, MAX_MOUNTAINS);

    // Checking if the file was opened correctly
    if (arr_size == -1)
    {
        cout << "Failed to open file." << endl;
    }
    else
    {
        for (int i = 0; i < arr_size; ++i) {
            cout << "Name: " << mountains[i].name << ", ";
            cout << "Continent: " << mountains[i].continent  << ", ";
            cout << "Trail length: " << mountains[i].trail_length << ", ";
            cout << "Elevation: " << mountains[i].elevation  << ", ";
            cout << "Difficulty: " << mountains[i].difficulty;
            cout << endl;
        }
    }

    return 0;
}
```

Sample Output:
```
Name: Mount Everest, Continent: Asia, Trail length: 65, Elevation: 8848, Difficulty: 5
Name: Matterhorn, Continent: Europe, Trail length: 14, Elevation: 4478, Difficulty: 4
Name: Mount Kilimanjaro, Continent: Africa, Trail length: 35, Elevation: 5895, Difficulty: 3
Name: Aconcagua, Continent: South America, Trail length: 70, Elevation: 6962, Difficulty: 5
Name: Mount Kosciuszko, Continent: Australia, Trail length: 7, Elevation: 2228, Difficulty: 2
```

</td>
</tr>

</table>

The options for the choices are repeated here for your reference: <br>
Choice 1. Obtaining mountains with a certain difficulty rating. <br>
Choice 2. Obtaining mountains taller than a certain elevation. <br>
Choice 3. Obtaining mountains with a trail longer than a certain trail length. <br>
Choice 4. Obtaining mountains in a certain continent.

Function 2 Specification:

<table>

<tr>
<td>
Function:

```getMountains(Mountain [], Mountain [], int, string, int)```

</td>
<td>

```cpp
int getMountains(Mountain mountains[],
                 Mountain selected_mountains[],
                 int choice,
                 string value,
                 int mountain_size)
```

</td>
</tr>

<tr>
<td>
Purpose:
</td>
<td>

To read all the mountain details from a given file named `filename`

</td>
</tr>

<tr>
<td>
Parameters:
</td>
<td>

Mountain [] ```mountains``` - the array that has already been populated with the details of all the mountains <br>
Mountain [] ```selected_mountains``` - the array to be populated with the details of all the selected mountains based on the `choice` <br>
int ```choice``` - the choice of data to populate `selected_mountains` with <br>
string ```value``` - the value to be used based on `choice` <br>
int ```mountain_size``` - the number of mountains present in the `mountains` array
</td>
</tr>

<tr>
<td>
Return Value:
</td>
<td>

If successful (function parameters are correct), it returns the size of the `selected_mountains` array
</td>
</tr>

<tr>
<td>
Error Handling/Boundary Conditions:
</td>
<td>

- If ```choice``` is not one of the options, -1 is returned
- Note: you may need to cast value into int depending on which choice it is.

</td>
</tr>
<tr></tr>
<tr>
<td>
Example:
</td>
<td>
Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem.

Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of getMountains is included.

int main()
{
    const int MAX_MOUNTAINS = 30;

    string mountains_filename = "mountains.txt";

    Mountain mountains[MAX_MOUNTAINS];
    Mountain selected_mountains[MAX_MOUNTAINS];

    int mountain_size = readMountainDetails(mountains_filename, mountains, MAX_MOUNTAINS);

    // Checking if the file was opened correctly
    if (mountain_size == -1)
    {
        cout << "Failed to open file." << endl;
        return 0;
    }

    string str_choice;
    cout << "Select option:" << endl;
    cout << "1. Obtain mountains with a certain difficulty rating." << endl;
    cout << "2. Obtain mountains taller than a certain elevation." << endl;
    cout << "3. Obtain mountains with a trail longer than a certain trail length." << endl;
    cout << "4. Obtain mountains in a certain continent." << endl;
    getline(cin, str_choice);

    int choice = stoi(str_choice);

    string value;
    cout << "Enter a value based on the choice:" << endl;
    getline(cin, value);

    int selected_size = getMountains(mountains, selected_mountains, choice, value, mountain_size);

    if (selected_size == -1)
    {
        cout << "Invalid choice." << endl;
    }
    else
    {
        for (int i = 0; i < selected_size; i++)
        {
            cout << "Name: " << selected_mountains[i].name << ", ";
            cout << "Continent: " << selected_mountains[i].continent  << ", ";
            cout << "Trail length: " << selected_mountains[i].trail_length << ", ";
            cout << "Elevation: " << selected_mountains[i].elevation  << ", ";
            cout << "Difficulty: " << selected_mountains[i].difficulty;
            cout << endl;
        }
    }

    return 0;
}
```

Sample Output:
```
Select option:
1. Obtain mountains with a certain difficulty rating.
2. Obtain mountains taller than a certain elevation.
3. Obtain mountains with a trail longer than a certain trail length.
4. Obtain mountains in a certain continent.
1
Enter a value based on the choice:
4
Name: Matterhorn, Continent: Europe, Trail length: 14, Elevation: 4478, Difficulty: 4
Name: Denali, Continent: North America, Trail length: 16, Elevation: 6190, Difficulty: 4
Name: Mont Blanc, Continent: Europe, Trail length: 20, Elevation: 4810, Difficulty: 4
Name: Mount McKinley, Continent: North America, Trail length: 7, Elevation: 6194, Difficulty: 4
Name: Matterhorn, Continent: Europe, Trail length: 14, Elevation: 4478, Difficulty: 4
Name: Mount Kenya, Continent: Africa, Trail length: 10, Elevation: 5199, Difficulty: 4
Name: Mount Robson, Continent: North America, Trail length: 16, Elevation: 3954, Difficulty: 4
Name: Piz Bernina, Continent: Europe, Trail length: 8, Elevation: 4049, Difficulty: 4
```

</td>
</tr>

</table>

Please make sure to add the file header in your program before you submit your code on coderunner. Refer to [File Headers](#fileheaders) for instructions.

Develop and validate your solution in VS Code. Once you are happy with your solution, go to coderunner on Canvas and paste **only** the `mountain` struct, `readMountainDetails`, `getMountains`, and any helper function you used into the answer box!

*Sample runs*: <br>
Refer to the example above for sample usage of the function.
<table>
<tr>
<td>

Example 1: <br>
</td>

<td>

Sample contents of the file "mountains_1.txt"
```
Mount Everest,Asia,65,8848,5
Kangchenjunga,Asia,55,8586,5
Denali,North America,16,6190,4
Matterhorn,Europe,14,4478,4
Mount Kenya,Africa,10,5199,4
Mount Robson,North America,16,3954,4
```

Sample output of the program:
```
Select option:
1. Obtain mountains with a certain difficulty rating.
2. Obtain mountains taller than a certain elevation.
3. Obtain mountains with a trail longer than a certain trail length.
4. Obtain mountains in a certain continent.
1
Enter a value based on the choice:
4
Name: Denali, Continent: North America, Trail length: 16, Elevation: 6190, Difficulty: 4
Name: Matterhorn, Continent: Europe, Trail length: 14, Elevation: 4478, Difficulty: 4
Name: Mount Kenya, Continent: Africa, Trail length: 10, Elevation: 5199, Difficulty: 4
Name: Mount Robson, Continent: North America, Trail length: 16, Elevation: 3954, Difficulty: 4
```

</td>
</tr>

<tr></tr>

<tr>
<td>
Example 2: <br>
</td>

<td>

Sample contents of the file "mountains_1.txt"
```
Mount Everest,Asia,65,8848,5
Kangchenjunga,Asia,55,8586,5
Denali,North America,16,6190,4
Matterhorn,Europe,14,4478,4
Mount Kenya,Africa,10,5199,4
Mount Robson,North America,16,3954,4
```

Sample output of the program:
```
Select option:
1. Obtain mountains with a certain difficulty rating.
2. Obtain mountains taller than a certain elevation.
3. Obtain mountains with a trail longer than a certain trail length.
4. Obtain mountains in a certain continent.
2
Enter a value based on the choice:
5500
Name: Mount Everest, Continent: Asia, Trail length: 65, Elevation: 8848, Difficulty: 5
Name: Kangchenjunga, Continent: Asia, Trail length: 55, Elevation: 8586, Difficulty: 5
Name: Denali, Continent: North America, Trail length: 16, Elevation: 6190, Difficulty: 4
```
</td>
</tr>

<tr></tr>

<tr>
<td>
Example 3: <br>
</td>

<td>

Sample contents of the file "mountains_1.txt"
```
Mount Everest,Asia,65,8848,5
Kangchenjunga,Asia,55,8586,5
Denali,North America,16,6190,4
Matterhorn,Europe,14,4478,4
Mount Kenya,Africa,10,5199,4
Mount Robson,North America,16,3954,4
```

Sample output of the program:
```
Select option:
1. Obtain mountains with a certain difficulty rating.
2. Obtain mountains taller than a certain elevation.
3. Obtain mountains with a trail longer than a certain trail length.
4. Obtain mountains in a certain continent.
3
Enter a value based on the choice:
15
Name: Mount Everest, Continent: Asia, Trail length: 65, Elevation: 8848, Difficulty: 5
Name: Kangchenjunga, Continent: Asia, Trail length: 55, Elevation: 8586, Difficulty: 5
Name: Denali, Continent: North America, Trail length: 16, Elevation: 6190, Difficulty: 4
Name: Mount Robson, Continent: North America, Trail length: 16, Elevation: 3954, Difficulty: 4
```
</td>
</tr>

<tr></tr>

<tr>
<td>
Example 4: <br>
</td>

<td>

Sample contents of the file "mountains_1.txt"
```
Mount Everest,Asia,65,8848,5
Kangchenjunga,Asia,55,8586,5
Denali,North America,16,6190,4
Matterhorn,Europe,14,4478,4
Mount Kenya,Africa,10,5199,4
Mount Robson,North America,16,3954,4
```

Sample output of the program:
```
Select option:
1. Obtain mountains with a certain difficulty rating.
2. Obtain mountains taller than a certain elevation.
3. Obtain mountains with a trail longer than a certain trail length.
4. Obtain mountains in a certain continent.
4
Enter a value based on the choice:
North America
Name: Denali, Continent: North America, Trail length: 16, Elevation: 6190, Difficulty: 4
Name: Mount Robson, Continent: North America, Trail length: 16, Elevation: 3954, Difficulty: 4
```
</td>
</tr>

<tr></tr>

<tr>
<td>
Example 5: <br>
</td>

<td>

Sample contents of the file "mountains_1.txt"
```
Mount Everest,Asia,65,8848,5
Kangchenjunga,Asia,55,8586,5
Denali,North America,16,6190,4
Matterhorn,Europe,14,4478,4
Mount Kenya,Africa,10,5199,4
Mount Robson,North America,16,3954,4
```

Sample output of the program:
```
Select option:
1. Obtain mountains with a certain difficulty rating.
2. Obtain mountains taller than a certain elevation.
3. Obtain mountains with a trail longer than a certain trail length.
4. Obtain mountains in a certain continent.
1
Enter a value based on the choice:
3

```
</td>
</tr>

</table>


# Deliverables  <a name="deliverables"></a>

## File Headers <a name="fileheader"></a>

Before submitting your program on Coderunner, ensure that you include the below information at the top of your file
```cpp
// CSCI 1300 Spring 2024
// Author: FirstName LastName
// TA: TA Name
// Question #
```

Example
```cpp
// CSCI 1300 Spring 2024
// Author: John Smith
// TA: Kaustubh Milind Kulkarni
// Question 1
```

## Checklist <a name="checklist"></a>
Here is a checklist for submitting the assignment:
1. Use your solutions in VS Code to complete the **Homework 6 - coderunner** assignment on Canvas (Modules → Week 9). This will be published on Thursday, March 14th.
2. Complete the Homework 6 Quiz. This will be published on Thursday, March 14th.
3. For 10 extra-credit points, submit your solution for question 6 on **Homework 6: coderunner (Extra Credit)** by 5:00 pm on Friday, 22nd March.

## Grading Rubric <a name="grading"></a>
Note: Global variables, string streams, vectors, pointers, and references are not permitted in this homework. The use of global variables, string streams, vectors, pointers, and references will result in a 0 on the entire homework.

| **Criteria**                                | **Points** |
| ------------------------------------------- | ---------- |
| Question 1                                  | 2          |
| Question 2                                  | 6          |
| Question 3                                  | 8         |
| Question 4                                  | 10          |
| Question 5                                  | 10          |
| Question 6                                  | 10          |
| Homework 6 Quiz                             | 14          |
| Total                                       | 50          |
