#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Challenge 8 - Week of March 11, 2024**

These exercises for this week will give you practice working with filestreams. The first three questions can be done with only this information, however the "Added Challenge" for each problem will require learning and using structs. 

# Exercises

## Question 1: Grocery Store Items
Write a program that takes the category in which they want to shop in as the user input and display the items in that category for the user to choose from. Once the user chooses the item, display the item details to the user and continue taking the category input until the user wants to exit. You can find the items in each category in their respective category files (dairy.txt, vegetables.txt, snacks.txt). Once the user wants to exit, display their bill and exit the program.
NOTE: If the user input is invalid, re-prompt until valid input is entered.
User input is in **bold**.

Example Output 1:
<pre><code>
Select a Category:
1) Dairy
2) Vegetables
3) Snacks
4) Exit
<b>3</b>

Choose an item?
1.Tostitos - 3$
2.Doritos - 2$
3.Lays - 4$
4.Funions - 2$
5.Roasted Peanuts - 4$
6.Cashew - 6$
7.Snickers - 5$
8.Hersheys - 5$
9.Kitkat - 5$
<b>2</b>
For Doritos the amount is $2

Select a Category:
1) Dairy
2) Vegetables
3) Snacks
4) Exit
<b>4</b>
Your bill is $2

</code></pre>

Example Output 2:

<pre><code>
Select a Category:
1.Dairy
2.Vegetables
3.Snacks
4.Exit
<b>2</b>

Choose an item:
1.Lettuce - 2$
2.Tomato - 3$
3.Zucchini - 2$
4.Carrots - 4$
5.Spinach - 5$
6.Broccoli - 3$
7.Potatoes - 2$
<b>4</b>
For Carrots the amount billed is 4$

Select a Category:
1.Dairy
2.Vegetables
3.Snacks
4.Exit
<b>1</b>

Choose an item:
1.Milk - 3$
2.Cheese - 4$
3.Yogurt - 4$
4.Creamer - 6$
5.Whipped Cream - 5$
<b>3</b>
For Yogurt the amount billed is 4$

Select a Category:
1.Dairy
2.Vegetables
3.Snacks
4.Exit
<b>4</b>
Your bill is 8$
</code></pre>
    
**Note: Consider the invalid inputs for both the category and items menus. Additionally, do not hardcode the items menus--items should be read in from the provided files.**

*Added Challenge*: Create a struct that holds the name and price of an item. Your program should then use this struct to store the items read from the files.
    

## Question 2: Age Check
Write a program that takes in a file name that contains names and ages of various people as an input and print the names of the individuals who are less than 18 years of age. Moreover, the names in the file may have varied capitalization and special characters (excluding "**:**"). While printing the names, make sure the names are all capitalized and free of any special characters. The names should be printed in the order they are in the file. The format of the file will be as such:
**Person Name:Age**

Sample [age.txt](inputs/age.txt)
    
    Velma:36
    AaRON:13
    markus:45
    ALIcia:15
    ver!onica:12
    ash? ton:14

Sample output

    AARON:13
    ALICIA:15
    VERONICA:12
    ASHTON:14

*Added Challenge*: Create a struct that holds the name and age. Your program should then use this struct to store the data read from the files.

## Question 3: 

Given the following program, explain what it is doing and the expected end result.

```cpp
#include<iostream>
#include <fstream>
using namespace std;
int main () 
{
     ofstream outfile("test.txt");
     for (int n = 0; n < 100; n++)
     {
          outfile << n%5 << endl;
     }
     cout << "Done";
     outfile.close();
     return 0;
}
```