#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Recitation 5 - Week of February 19, 2024**

# Table of contents
1. [Exercises](#exercises)
   1. [Question 1 - Spot the Errors](#spot)
   2. [Question 2 - Valid Integer](#valid-integer)
   3. [Question 3 - Fitness Tracker](#expense-tracker)
3. [Deliverables](#deliverables)


# Exercises <a name="exercises"></a>
### 1. **Spot the errors**. <a name="spot"></a>

a.
The program intends to prints all even numbers from 2 to N (both inclusive). Identify the error(s) in the code below, and write the correct line(s).
```cpp
#include <iostream>
using namespace std;

void printEvenNumbers(int N)
{
    int i = 2;   
    while (i <= N)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return;
}

int main()
{
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    printEvenNumbers(number);
    return 0;
}
```

b.
The program monitors the pump status and fills the liquid until the liquid level reaches the threshold. Identify the error(s) in the code below, and write the correct line(s).
```cpp
#include <iostream>
using namespace std;

int main()
{
    int liquid_level = 5;
    int threshold = 60;

    while (liquid_level >= threshold)
    {
        cout << "Pump is running. Liquid level: " << liquid_level << " units." << endl;
        liquid_level += 5; 
    }

    cout << "Pump stopped. Liquid level: " << liquid_level << " units." << endl;

    return 0;
}
```

c. The program intends to verify if two strings match, prompting the user to re-type the string until it matches the initial string. Identify the error(s) in the code below, and write the correct line(s).
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string initial_string;
    string retype_string;

    cout << "Enter your string: ";
    cin >> initial_string;

    cout << "Enter your string again: ";
    cin >> retype_string;

    while (retype_string == initial_string) 
    {
        cout << "Your strings do not match. Try again: " << endl;
        cin >> retype_string;
    }

    cout << "Your strings match!!!!" << endl;
    return 0;
}
```

d. The program intends to find the sum of all numbers from 1 to N (inclusive) and prints the result. Identify the error(s) in the code below, and write the correct line(s). 
```cpp
#include <iostream>
using namespace std;

void totalSum(int n)
{
    int result = 1;
    for(i = 1; i <= n; i+1)
    {
        result += i;
    }
    return result;
}

int main() 
{
    int N;
    cout << "Enter a positive integer (N): ";
    cin >> N;

    int result = totalSum(N);
    cout << "Sum of numbers from 1 to " << N << " is: " << result << endl;

    return 0;
}
```
e. The program intends to calculate the sum of numbers entered by the user until a negative number is encountered. Identify the error(s) in the code below, and write the correct line(s). 
```cpp
#include <iostream>
using namespace std;

int main() 
{
    int num;
    int sum = 0;

    do 
    {
        cout << "Enter a number (enter a negative number to stop): ";
        cin >> number;
        if (number >= 0) 
        {
            sum += number;
        }

    }(while number >= 0);

    cout << "Sum of the entered numbers: " << sum << endl;
    return 0;
}
```
### 2. Valid Integer <a name="valid-integer"></a>

Design a function `validateInt` that accepts a string input and determines if it represents a valid integer by checking if each character in the string is a valid value. Your program should ask the user to input an integer, store it as a string and then invoke the `validateInt` function to check its validity. The program should then print whether the string is a valid integer or not. (Negative integers are also valid integers).
<!-- ```cpp
bool validateInt(string input)
``` -->


<table>
<tr>
<td> 

Function: <br>
```validateInt(string)```
</td>
<td>
    
```cpp
bool validateInt(string input)
```

</td>
</tr>
<tr>
<td> Purpose: </td>
<td>
Iterate through a string and verify if it is a valid integer or not.
</td>
</tr>
<tr>
<td> Parameters: </td>
<td>
<b> input </b> -  The string to be verified <br> 
</td>
</tr>
<tr>
<td> Return Value: </td>
<td>
It returns true is the string is a valid integer. Otherwise returns false.
</td>
</tr>
<tr>
<td> Error Handling / Boundary Conditions: </td>
<td>
If length of input = 0, false is returned <br>
</td>
</tr>
<tr>
<td> Example: </td>
<td>
Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of validateInt() is included.

int main()
{
    string number;
    cout << "Enter the integer : " << endl;
    getline(cin, number);
    if(!validateInt(number))
    {
        cout << "The entered string is not a valid integer!!" << endl;
    }
    else
    {
        cout << "The entered string is a valid integer!!" << endl;
    }
    return 0;
}
```

Sample Output1 (**bold** indicates user input)
 <pre>
    Enter the integer :
    <b>1234</b>
    The entered string is a valid integer!!
</pre>
</td>
</tr>
</table>

<table>
<tr>
<td> 

Example output1 (**bold** indicates user input)
 <pre>
    Enter the integer :
    <b>-12</b>
    The entered string is a valid integer!!
</pre>

Example output2 (**bold** indicates user input)
 <pre>
    Enter the integer :
    <b>23e56</b>
    The entered string is not a valid integer!!
</pre>

Example output3 (**bold** indicates user input)
 <pre>
    Enter the integer :
    <b>32 56</b>
    The entered string is not a valid integer!!
</pre>

Example output4 (**bold** indicates user input)
 <pre>
    Enter the integer :
    <b>-</b>
    The entered string is not a valid integer!!
</pre>

**2a**. Write out the steps you would use to solve this problem by hand as pseudocode.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**2b**. Pick four possible inputs for your program. Try to pick values that will test different aspects of your function. Follow the steps you wrote for these values to find your result, and verify it.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------


**2c**. Translate your inputs and expected outputs into assert statements.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**2d**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

-----------------------------
<br>

### 3. Fitness Tracker <a name="expense-tracker"></a>

You are tasked with developing an fitness tracking program that allows users to track their daily exercise routines. Users can enter the the type of exercise and the duration (in minutes), and they can continue entering exercise until they decide to stop. The program should provide a summary of exercise time (in minutes) by type and calculate the total exercise time (in minutes) for the day.

Your program should follow these guidelines:
1. Create 3 integer variables - Cardio, Strength, Flexibility - to store the category-wise totals.
2. Allow the user to enter exercise by providing category and time (in minutes). If they have already added time to that category, it should add the new value to the current total for that category.
3. Repeat this until the user decides to stop - which is done by inputting *exit* in the category prompt.
4. If the user inputs a category that doesn't exist, reprompt the user to input the right one.
4. Display the category-wise totals and calculate the total exercise time (in minutes) for the day.

Example output (**bold** indicates user input)
 <pre>
    Enter a category (Cardio, Strength, Flexibility, or 'exit'):
    <b>Flexibility</b>
    Enter the exercise time:
    <b>30</b>
    Enter a category (Cardio, Strength, Flexibility, or 'exit'):
    <b>Strength</b>
    Enter the exercise time:
    <b>40</b>
    Enter a category (Cardio, Strength, Flexibility, or 'exit'):
    <b>Endurance</b>
    Invalid Category. Please enter a valid category.
    Enter a category (Cardio, Strength, Flexibility, or 'exit'):
    <b>Cardio</b>
    Enter the exercise time:
    <b>20</b>
    Enter a category (Cardio, Strength, Flexibility, or 'exit'):
    <b>exit</b>
    Category-wise totals:
    Cardio: 20 mins
    Strength: 40 mins
    Flexibility: 30 mins
    Total exercise time for the day: 90 mins
</pre>

**3a**. Write out the steps you would use to solve this problem by hand as pseudocode.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**3b**. Pick possible inputs for your program. Choose as many inputs as you think you need to thoroughly test your program. Follow the steps you wrote for these values to find your result, and verify it. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**3c**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.  

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------
# Deliverables for Recitation <a name="deliverables"></a>
Submit your work on [Canvas](https://canvas.colorado.edu/courses/100891/assignments/1961616).
