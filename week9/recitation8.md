#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Recitation 8 - Week of March 11, 2024**

# Table of contents
- [Topics](#topics)
- [Exercises](#exercises)
    - [1. Spot the errors](#spot)
    - [2. Valid Double](#valid-double)
    - [3. Center of Mass](#comass)
- [Deliverables for Recitation](#deliverables)

# Topics <a name="topics"></a>
This recitation covers `file streams`. Let us dive in!

# Exercises <a name="exercises"></a>


### 1. Spot the errors <a name="spot"></a>

a.
The program tries to flip the sign of all the numbers in an array.
```cpp
#include <iostream>
#include <string>
using namespace std;

void flipSign(int numbers[]) 
{
    for (int i = 0; i < 10; i++) 
    {
        numbers[i] = -1 * numbers[i];
    }
    return;
}

int main()
{
    const int length = 4;
    int numbers[] = {1, 2, 3, 4};

    cout << "The contents of the array before changing: ";
    for (int i = 0; i < length; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    flipSign(numbers);

    cout << "The contents of the array after changing: ";
    for (int i = 0; i < length; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
```

-----------------------------

b.
The program below reads a file `visitors.txt` and prints out the busiest day. Each line in the file has the format: \
`dayOfWeek <space> visitor1,visitor2,..,visitorN`.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ofstream my_file("visitors.txt"); 
    string full_line;
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int vis[5] = {0, 0, 0, 0, 0}; 
    int i = 0;
    int traffic = 0;
    int j = 0;

    while (getline(my_file, full_line))
    {
        for(int i = 0; i < static_cast<int>(full_line.length()); i+=1) 
        {
            if(full_line[i] == ' ' && i < static_cast<int>(full_line.length())-1)
            {
                visitors[i]++;
            }
            if(full_line[i] == ",") 
            {
                visitors[i]++;
            }
        }
        if (visitors[i] < traffic) 
        {
            traffic = visitors[i];
            j = i;
        }
        i++;
    }
    cout << days[j] << " is the busiest day of the week at the motel." << endl;

    return 0;
}
```

c.
The program appends and prepends underscores for every word in the given `message` string. Assume the message is maximum 4 words.
```cpp
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string appendPrepend(string message)
{
    const int LENGTH = 4;
    string message_fragments[LENGTH] = {};
    string empty_word = "";
    split(message, ' ', message_fragments[], LENGTH) 
    assert(message_fragments[4] = empty_word) 

    string answer, word; 
    for(int i = 0; i < LENGTH; i++)
    {
        answer += "_" + message + "_";
    }
    int first_word_length = message_fragments[0].length();
    int second_word_length = message_fragments[1].length();
    assert(message_fragments[1] == answer.substr(first_word_length+3, second_word_length))

    return answer;
}

int main()
{
    cout << "Please enter the string message:" << endl;
    string message;
    getline(cin, message);
    cout << appendPrepend(message);
}
```

### 2. Valid Double <a name="valid-double"></a>

Design a function `validateDouble` that accepts a string input and determines if it represents a valid double by iterating through the string. Valid doubles can start with a negative and can have up to one decimal point. Your program should ask the user to input a double, store it as a string and then invoke the `validateDouble` function to check its validity. The program should then print whether the string is a valid double or not. (Negative double are also valid doubles. You can reuse some parts of your `validateInt` function from recitation 5).
<!-- ```cpp
bool validateDouble(string input)
``` -->


<table>
<tr>
<td> 

Function: <br>
```validateDouble(string)```
</td>
<td>
    
```cpp
bool validateDouble(string input)
```

</td>
</tr>
<tr>
<td> Purpose: </td>
<td>
Iterate through a string and verify if it is a valid double or not.
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
It returns true is the string is a valid double. Otherwise returns false.
</td>
</tr>
<tr>
<td> Error Handling / Boundary Conditions: </td>
<td>
If length of <b> input </b> = 0, false is returned <br>
</td>
</tr>
<tr>
<td> Example: </td>
<td>
Sample Code:

```cpp
// Assume the proper libraries are included.

// Assume the proper implementation of validateDouble() is included.

int main()
{
    string number;
    cout << "Enter the double : " << endl;
    getline(cin, number);
    if(!validateDouble(number))
    {
        cout << "The entered string is not a valid double!!" << endl;
    }
    else
    {
        cout << "The entered string is a valid double!!" << endl;
    }
    return 0;
}
```

Sample Output1 (**bold** indicates user input)
 <pre>
    Enter the double :
    <b>-123.4</b>
    The entered string is a valid double!!
</pre>
</td>
</tr>
</table>

<table>
<tr>
<td> 

Example output1 (**bold** indicates user input)
 <pre>
    Enter the double:
    <b>-12</b>
    The entered string is a valid double!!
</pre>

Example output2 (**bold** indicates user input)
 <pre>
    Enter the double:
    <b>23.56e</b>
    The entered string is not a valid double!!
</pre>

Example output3 (**bold** indicates user input)
 <pre>
    Enter the double:
    <b>32 56</b>
    The entered string is not a valid double!!
</pre>

Example output4 (**bold** indicates user input)
 <pre>
    Enter the double:
    <b>-.</b>
    The entered string is not a valid double!!
</pre>

**2a**. Write out the steps you would use to solve this problem by hand as pseudocode. Stating your modifications to your `validateInt` is also sufficient.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**2b**. Pick three possible inputs for your program. Try to pick values that will test different aspects of your function. Follow the steps you wrote for these values to find your result, and verify it.

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

**2d**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test for the values used in your sample runs, and for the boundary conditions.

-----------------------------
<br>


### 3. Center of Mass <a name="comass"></a>
The file `coordinates1.txt` contains a list of comma-separated X, Y and Z coordinates for a given geometric body in each column respectively. Your goal is to find the center of mass of the body by computing the average of the X, the Y and the Z coordinates. In order to do this, you must:

1. Read each line in as a string,
2. Use your `split()` function from Homework 5 to separate each line at the commas,
3. Use your `validateDouble()` function from Q2 to validate your strings translate your strings into doubles (you can use `stod` to translate valid strings to doubles). 

Report the average of your X coordinates, Y coordinates and Z coordinates as your center of mass.

Example Output 1
<pre>
// If file contains two lines:
// 3.25,4.19,-3.56
// 1.04,2.31,5.12
The center of mass is at: 2.145, 3.25, 0.78!
// 2.145 = (3.25+1.04)/2.0
// 3.25 = (4.19+2.31)/2.0
// 0.78 = (-3.56+5.12)/2.0
</pre>

Example Output 2
<pre>
// If file contains these lines:
// 5.00,0,-0.8
// -3,3.3,-0.75
// 1,-1.0,3.8
// 3.50,0.67,-2
The center of mass is at: 1, 1.65, -0.025!
</pre>

Example Output 3
<pre>
// If file contains these lines:
// 0,5.00,-0.8
// -3,3.3,0.75
// abc,-1.0,2.8
Invalid value detected!
</pre>

There are several coordinate files included in this folder which you can use to test your code. You can also make your own input files.


**3a**. Write out the steps you would use to solve this problem by hand as pseudocode.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**3b**. Write three possible lines you can include in your file to later test your program. Try to pick values that will test different aspects of your function. Follow the steps you wrote for these values to find your result, and verify it.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------


**3c**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test for the values used in your sample runs, and for the boundary conditions. Use `coordinates2.txt`, `coordinates3.txt`, `coordinates4.txt` to test your code.

-----------------------------
<br/><br/>

-----------------------------

**3d**. OPTIONAL ADDITIONAL CHALLENGE: create a struct to store a 3D point (i.e., a structure with a double X, Y and Z coordinate) and modify your code to use this structure for the 3D points you read in.

------------------------------

# Deliverables for Recitation <a name="deliverables"></a>
Complete the Recitation 8 assignment on [Canvas](https://canvas.colorado.edu/courses/100891/assignments/1973127).
