#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Recitation 3 - Week of February 5th, 2024**

# Table of contents
1. [Exercises](#exercises)
   1. [Question 1 - Spot the Errors](#spot)
   2. [Question 2 - Coffee Shop](#coffee_shop_app)
   3. [Question 3 - Final velocity of the Rocket](#rocket)
2. [Deliverables](#deliverables)

# Exercises <a name="exercises"></a>
### 1. **Spot the errors**. <a name="spot"></a>

a.
The program below displays a message about the weather. Identify the error(s) in the code below, and write the correct line(s).
```cpp
#include <iostream>
using namespace std;

int main()
{				
    int humidity = 44;
    int temperature = 25;
    
    if(humidity > 55)
    {
        if(temperature > 35)
        {
            cout << "The weather is hot and humid." << endl;
        }
        else
        {
            cout << "The weather is cold and humid." << endl;
    }
    else
    {
        if(temperature > 35)
        {
            cout << "The weather is hot and dry." << endl;
        }
        else
        {
            cout << "The weather is cold and dry." << endl;
        }
    }
    
    return 0;
}
```

b.
The function makeGreeting is supposed to take in two words and merges them. It has to return that merged string to the main function which prints it. Identify the error(s) in the code below, and write the correct line(s).
```cpp
#include <iostream>
#include <string>
using namespace std;

double makeGreeting(string firstword, string secondword)
{
	string merged_greeting = firstword + " " + secondword;
}

int main()
{
   string new_greeting = makeGreeting("Good","Day");
   cout << new_greeting << endl;
}
```
    
c. The program below will display the average between two values by calling the function avg. The correct output should be *10.5*. Identify the error(s) in the code below, and write the correct line(s). 
```cpp
#include <iostream>
using namespace std;

int main()
{
    double average = avg(15,6);
    cout << average << endl;
    return 0;
}

int avg(int a, int b)
{
    int x = (a+b) / 2.0;
    return 0;
}
```

d. The program below will calculate and display the length of the hypotenuse of a right triangle given the length of two sides. This is done by calling the function calculateHypotenuse. Identify the error(s) in the code below, and write the correct line(s).
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int calculateHypotenuse(int side1, int side2)
{
    cout << "Enter side 1: " << endl;
    cin >> side1;
    cout << "Enter side 2: " << endl;
    cin >> side2;

    double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

    return hypotenuse;
}

int main()
{
    double hypotenuse = calculateHypotenuse(3, 4);
    cout << hypotenuse << endl;
    return 0;
}

```
e.
The program below aims to calculate and display the decimal equivalent of the reciprocal for a user-input value between 1 and 10. Identify the error(s) in the code below, and write the correct line(s).
```cpp
#include <iostream>
using namespace std;

double findReciprocal(int x)
{
    double ans;
    ans = (1.0/num);
    return ans;
}
 
int main()
{
    int num;
    double ans;
    cout << "Enter a value between 1 and 10" << endl;
    cin >> num;
    ans = findReciprocal(num);
    cout << "The associated fraction can be written as " << ans << endl;
    return 0;
}

```
f.
The program below is a working code that determines the letter grade corresponding to a given score. This code does not contain any syntax or logical errors. However, it has multiple <b>style</b> errors making the code very difficult to read. These errors can range from usage of unintended white space to having extraneous variables or clauses in your code. Identify the style error(s) in the code below and rewrite the below code to improve readability.
```cpp
#include<iostream>
using namespace std;

// 93 or greater -> A

int main()
{
    double score = 0;
    char grade='F';
    cout << "Enter the score you earned for CSCI 1300: ";
    cin >> score;

    if (score < 60)
    {
        cout << "Grade: F" << endl;
    }
    else if (score <= 62.99){
        cout << "Grade: D-" << endl;
    }
    else if (score <= 66.99)
    {
        cout << "Grade: D" << endl;
    }
    if (score >= 67 && score <= 69.99)
        cout << "Grade: D+" << endl;
    if (score >= 70 && score <= 72.99)
    {
        cout << "Grade: C-" << endl;
    }
    else if (score >= 73 && score <= 76.99)
    {
        cout << "Grade: C" << endl;
    }
    if (score >= 77 && score <= 79.99)
    cout << "Grade: C+" << endl;
    else if (score >= 80 && score <= 82.99)
    cout << "Grade: B-" << endl;
    else if (score >= 83 && score <= 86.99)
    cout << "Grade: B" << endl;
    if (score >= 87 && score <= 89.99){
    cout << "Grade: B+" << endl;
    }else if (score >= 90 && score <= 92.99){
        cout << "Grade: A-" << endl;
    }
    else if (score >= 93)
    {
        cout << "Grade: A" << endl;
    }
    return 0;
}

```
### 2. **Coffee Shop**. <a name="coffee_shop_app"></a>
You are a coffee shop owner, managing multiple coffee machines. The water for brewing coffee is sourced from the water compartment of the coffee machine which needs to be manually refilled. Design two functions to monitor the amount of water you use and refill. Both functions should take in your current water level in the compartment and an amount to be used from or refilled to the compartment, and then return the new water level in your compartment. Here are two function headers to get you started:

```cpp
double useWater(double current_level, double amount)
double refillWater(double current_level, double amount)
```

You cannot use more water than what you have in your central tank! And you cannot use or restock with a negative amount. If you attempt to do either of these, the initial water level should be returned. 

<!-- |  | |
|-----------------|-----------------|
|Function: <br>``` useWater(double, double)```| ``` double useWater(double current_level, double amount) ```|
|Purpose: | Monitor the water level in the compartment when you use a certain amount of water out of it|
|Parameters: | <b> current_level </b> - double or integer value <br> <b> amount </b> - double or integer value|
|Return Value: | It returns the new water level in the compartment.|
|Error Handling: | - If current_level < 0, 0 is returned> <br> - If amount < 0, initial water level is returned |
|Example: |  <pre> #include <iostream> <br> using namespace std; <br> int main() <br> { <br> cout << "Hello, World!"; <br> return 0; <br> } </pre> |
|```getGold()```| Returns the current value of gold as a double.| -->


<table>
<tr>
<td> 

Function: <br>
```useWater(double, double)```
</td>
<td>
    
```cpp
double useWater(double current_level, double amount)
```

</td>
</tr>
<tr>
<td> Purpose: </td>
<td>
Monitor the water level in the compartment when you use a certain amount of water out of it 
</td>
</tr>
<tr>
<td> Parameters: </td>
<td>
<b> current_level </b> -  a double that represents current level in the central tank <br> <b> amount </b> - a double that represents the amount of water you want to
use   
</td>
</tr>
<tr>
<td> Return Value: </td>
<td>
It returns the new water level in the compartment.
</td>
</tr>
<tr>
<td> Error Handling / Boundary Conditions: </td>
<td>
- If current_level < 0, 0 is returned <br> - If amount < 0, current_level is returned <br> - If (current_level - amount) < 0, current_level is returned
</td>
</tr>
<tr>
<td> Example: </td>
<td>
Sample Code:

```cpp
#include <iostream>
using namespace std;

double useWater(double current_level, double amount)
{
    //body of function useWater
}

int main()
{
    double current_level = 71.4;
    double amount = 20;
    double result = useWater(current_level, amount);
    cout << "The new water level is " << result << endl;
    return 0;
}
```

Sample Output: 

```The new water level is 51.40```
</td>
</tr>
</table>

<table>
<tr>
<td> 

Function: <br>
```refillWater(double, double)```
</td>
<td>
    
```cpp
double refillWater(double current_level, double amount)
```

</td>
</tr>
<tr>
<td> Purpose: </td>
<td>
Monitor the water level in the compartment when you refill a certain amount of water to it 
</td>
</tr>
<tr>
<td> Parameters: </td>
<td>
<b> current_level </b> - a double that represents current level in the central tank <br> <b> amount </b> - a double that represents the amount of water you want to
refill   
</td>
</tr>
<tr>
<td> Return Value: </td>
<td>
It returns the new water level in the compartment.
</td>
</tr>
<tr>
<td> Error Handling / Boundary Conditions: </td>
<td>
- If current_level < 0, 0 is returned <br> - If amount < 0, initial water level is returned
</td>
</tr>
<tr>
<td> Example: </td>
<td>
Sample Code:

```cpp
#include <iostream>
using namespace std;

double refillWater(double current_level, double amount)
{
    //body of function refillWater
}

int main()
{
    double current_level = 100;
    double amount = 20.5;
    double result = refillWater(current_level, amount);
    cout << "The new water level is " << result << endl;
    return 0;
}
```

Sample Output: 

```The new water level is 120.50```
</td>
</tr>
</table>


**2a**. Write out the steps you would use to solve this problem by hand as pseudocode.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**2b**. Pick a possible value for current_level and amount. Follow the steps you wrote for these numbers for useWater to find your end result, and verify it.

-----------------------------

*Sample run:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**2c**. Pick different possible values for current_level and amount. Follow the steps you wrote for these numbers for refillWater to find your end result, and verify it.

-----------------------------

*Sample run:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


**2d**. Identify two possible values that are "boundaries" in this problem that you will have to test. What should happen for these values? Is it different for useWater and refillWater?

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**2e**. Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test for the values used in your sample runs.
<br>

-----------------------------
### 3. Final velocity of the Rocket  <a name="rocket"></a>

  Write a C++ program that will calculate the final velocity of a rocket after 20 seconds. The program will ask the user for the initial velocity (m/s) and the fuel type (A, B, C).
  The rate of acceleration will depend on the type of fuel and the initial velocity.
  - If initial velocity is less than 10, then the acceleration rate for each fuel type is as follows
    - Fuel type A -> 5 (m/s) per second
    - Fuel type B -> 10 (m/s) per second
    - Fuel type C -> 20 (m/s) per second
  - If initial velocity is greater than or equal to 10 and less than  or equal to 40, then the acceleration rate for each fuel type is as follows
    - Fuel type A -> 6 (m/s) per second
    - Fuel type B -> 12 (m/s) per second
    - Fuel type C -> 24 (m/s) per second
  - If initial velocity is greater than 40, then the acceleration rate for each fuel type is as follows
    - Fuel type A -> 3 (m/s) per second
    - Fuel type B -> 6 (m/s) per second
    - Fuel type C -> 9 (m/s) per second

Example output 1 (User input in bold)
 <pre>
    Enter the initial velocity:
    <b>70</b>
    Enter the fuel type:
    <b>C</b>
    The final velocity is 250 m/s.  
</pre>

Example output 2 (User input in bold)

 <pre>
    Enter the initial velocity:
    <b>5</b>
    Enter the fuel type:
    <b>A</b>
    The final velocity is 105 m/s.
</pre>

**3a**. Write out the steps you would use to solve this problem by hand as pseudocode.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


**3b**. Pick possible inputs for your program. Follow the steps you wrote for these values to find your result, and verify it.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**3c**. Identify two possible values that are "boundaries" in this problem that you will have to test. What should happen for these values?

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**3d**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.


<br>

-----------------------------


# Deliverables for Recitation <a name="deliverables"></a>
Complete the quiz on [Canvas](https://canvas.colorado.edu/courses/100891/assignments/1954577?module_item_id=5294492)

