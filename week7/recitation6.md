#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Recitation 6 - Week of February 26, 2024**

# Table of contents
- [Topics](#topics)
- [Exercises](#exercises)
    - [1. Spot the errors](#spot)
    - [2. Raccoon Pied Piper](#raccoon)
    - [3. Combinations](#combinations)
- [Deliverables for Recitation](#deliverables)


# Topics <a name="topics"></a>
This recitation covers `nested loops` and basic `arrays`. Let us dive in!

# Exercises <a name="exercises"></a>

### 1. Spot the errors <a name="spot"></a>

a.
Given two positive integers `x` and `y`, this programs prints all the integer points (i, j) in the rectangle formed by (0, 0) and (x, y). Identify the or(s) in the code below, and write the correct line(s).
```cpp
#include <iostream>
using namespace std;

int main() 
{
    int x = 3, y = 4;

    for(int i = 0; i >= x; i++)
    {
        for(int j = 0; j <= y; i++)
        {
            cout << "(" << i << ", " << j << ")  ";
        }
        cout << endl;
    }

}
```

b.
The program prints the contents of an array and then calculates the sum of all the elements. Identify the error(s) in the code below, and write the correct line(s).
```cpp
#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int sum;

    cout << "The contents of the array are: ";
    for (int i = 0; i <= 5; i++)
    {
        cout << numbers << " ";
    }
    cout << endl;

    for (int i = 0; i <= 5 i++) 
    {
        sum += numbers;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
```

c. The program finds and prints all prime factors of a given number `num`. Identify the error(s) in the code below, and write the correct line(s).

```cpp
#include <iostream>
using namespace std; 
  
void primeFactors(int num)
{ 
    int n;
    while (n % 2 == 0) 
    { 
        cout << 2; 
        n = n / 2; 
    } 

    for (int i = 3; i <= sqrt(n); i + 2)
    { 
        while (n % i == 0) 
        { 
            cout << i << " "; 
            n = n / i; 
        } 
    } 
  
    if (n > 2) 
    {
        cout << n; 
    }
    cout<<endl;
} 

int main() 
{ 
    int num = 315; 
    primeFactors(num); 
    return 0; 
}
```

d.
The program prints the product of the length of contents of a string array. Identify the error(s) in the code below, and write the correct line(s).
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string languages[] = {"C++","Python","Java","Matlab","Julia"};
    int product = 0;  
    int total = languages.length(); 

    for(int i = 0; i <= total; i++) 
    {
        product *= languages(i).length;
    }

    cout << "Product of lengths = " << product << endl;
    return 0;
}
``` 

-----------------------------

### 2. Raccoon Pied Piper <a name="raccoon"></a>

You are a charming pipe player who visits the Rocky Mountain national park once every year. The entry fee starts at 50 dollars. There is a 5 dollar additional discount on that fee for every subsequent year which stacks with previous discounts. So, for the 2nd year it will cost you $45, 3rd year costs $40 and so on. But there is catch to this story:

Every year you camp in the park, you play your music and a new raccoon comes to listen to you. It is then so impressed by your skills it decides to join your family. So, you are adopting a new raccoon every year. Your first park visit would be you alone but the 2nd year, it is you and 1 raccoon. The third year, it is you and 2 raccoons and so on.

Every additional person (or raccoon) in your car is charged one dollar less than the previous person (or raccoon). So if you were charged 35 dollars that year and you have 3 raccoons with you, they would be charged 34, 33 and 32 dollars. The cost for an individual person or raccoon cannot go less than one dollar. 

Your task, given some number of years, is to design a function to print the individual costs for all those years and return the total.

<table>
<tr>
<td> 

Function: <br>
```raccoonPiedPiper(int)```
</td>
<td>
    
```cpp
int raccoonPiedPiper(int years)
```

</td>
</tr>
<tr>
<td> Purpose: </td>
<td>
Print the individual costs for all years and calculate the total.
</td>
</tr>
<tr>
<td> Parameters: </td>
<td>
<b> years </b> -  The number of years to consider <br> 
</td>
</tr>
<tr>
<td> Return Value: </td>
<td>
It returns the total cost at the end of <b> years </b> years.
</td>
</tr>
<tr>
<td> Error Handling / Boundary Conditions: </td>
<td>
If <b> years </b> < 0, -1 is returned. <br>
</td>
</tr>
<tr>
<td> Example: </td>
<td>
Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of raccoonPiedPiper(int) is included.

int main()
{
    int num_years;
    cout << "Enter the number of years: " << endl;
    cin >> num_years;
    int total_cost = raccoonPiedPiper(num_years);

    cout << "The total cost is " << total_cost << " dollars" << endl;
    return 0;
}
```

</td>
</tr>
</table>

<table>
<tr>
<td> 

Example output (**bold** is user input)
<pre><code>Please enter the number of years:
<b>5</b>
The costs are as follows:
50
45 44
40 39 38
35 34 33 32
30 29 28 27 26
The total cost is 530 dollars
</code></pre>

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

**2d**. Implement your solution in C++ using VS  Code, using your assert statements in your main function to verify that your function works as expected. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

<br/><br/>

-----------------------------

### 3. Combinations <a name="combinations"></a>

Create two character arrays `first` and `second` in the ```main()```. The length of the `first` and the `second` arrays should be 4 and 3 respectively. Prompt the user to enter 4 characters that go into the `first` array. Do the same with 3 characters for the `second` array. Then use the arrays to print all the possible combinations of the elements in `first` with the elements in `second`.

Example output (**bold** is user input)
<pre><code>Please enter 4 characters for the first array:
<b>A B C D</b>
Please enter 3 characters for the second array:
<b>E F G</b>
AE AF AG 
BE BF BG
CE CF CG
DE DF DG
</code></pre>

**3a.** Write out the steps you would use to solve this problem by hand as pseudocode.  

-----------------------------
**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**3b.** Pick possible inputs for your program. Choose as many inputs as you think you need to thoroughly test your program. Follow the steps you wrote for these values to find your result, and verify it.

-----------------------------
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**3c.** Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

<br>

-----------------------------

# Deliverables for Recitation <a name="deliverables"></a>
Complete the Recitation 6 assignment on [Canvas](https://canvas.colorado.edu/courses/100891/assignments/1964902).
