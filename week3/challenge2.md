#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Challenge 2 - Week of January 29, 2024**

These exercises for this week will give you practice working with conditionals and operators. The questions can be done with only this information, however the "Added Challenge" for each problem will require learning and using functions. 

# Exercises

### Question 1: Last Names

Write a program to call someone by their last name. You should ask the user how many names they have, letting them choose between 2, 3, and 4 names. Then ask them to enter their full name. You should then print "Hello Mx. LastName" after identifying their last name.They may have two names (Adam Doe) three names (Adam Bernard Doe), or four names (Adam Bernard Charles Doe). The case from all three of our examples should be "Hello Mx. Doe".

*Added Challenge*: How could you solve this problem without asking how many names they have?

Expected output (**bold** is user input)
<pre><code>How many names do you have? Choices: 2, 3, or 4
<b>2</b>
What is your name?
<b>Adam Doe</b>
Hello Mx. Doe
</code></pre>   

An example with the added challenge version:
<pre><code>What is your name?
<b>Adam Bernard Doe</b>
Hello Mx. Doe
</code></pre>   


### Question 2: Calculator
Let’s develop a very simple calculator application.
Write a C++ program to read two user inputs and a calculator operation (+, -, *, /) as shown in the example output.
</br></br>
Note: User can input decimal numbers too!
Input validation: In any case, if the user gives an invalid input, print “Invalid input.” and exit the program. Remember that you cannot divide any number by 0.
</br></br>
Expected output (**bold** is user input)
<pre><code>----Calculator----
Enter two operand values: 
<b>5</b>
<b>10</b>
Enter the operator (+,-,*,/):
<b>*</b>
5*10=50
</code></pre>

Write down some test cases and check if your code works as expected.</br></br>
     *Added Challenge*: How would you set up a function for the calculator? Outline the necessary components of your function and if you can, create and test a C++ function using your outline.

### Question 3: Pizza App

Let’s develop an application to take a pizza order from the user.
Write a C++ program to display the following mandatory crust option and non-mandatory topping options for pizza. Users should select one crust option and may select at least one topping for their pizza. Add the prices of all the selections made by the user, compute and add a tax of 8% on this amount, add a tip (if any) and display the order bill. Make sure to use switch statements in your final implementation.

Enter the Crust:</br>
Hand-tossed = $4</br> 
Handmade  =  $5</br>

Enter a topping:</br>
Onion = $1.5</br>
Tomato = $1.5</br>
Bell peppers = $2</br>
Pepperoni = $3</br>
Chicken = $3.5</br>


Later ask for the tip.
Add the prices of the selected crust and toppings(if any).
Later compute and add 8% tax on the amount obtained.
Finally, add the tip (if any) to this amount, and display the user with the grand total.

Note: Please be aware that the 8% tax will be computed before adding the tip amount. </br>

Expected output (**bold** is user input)
<pre><code>----Pizza Order----
Enter the Crust:
Hand-tossed = $4 
Handmade = $5
<b>Handmade</b>

Do you want to add any toppings? (Y/N)
<b>Y</b>

Enter a topping:
Onion = $1.5
Tomato = $1.5
Bell peppers = $2
Pepperoni = $3
Chicken = $3.5
<b>Onion</b>

Enter the amount of tip (in $):
<b>3</b>

Your total order bill is 10.02 US dollars.
</code></pre>

It is a good practice to use the above example to check if you understand the math before implementing it in code.</br></br>
     *Added Challenge*: Set up a function (or functions) that takes care of input validation. If the user gives an invalid input, print “Invalid input.” and exit the program. 

