#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Challenge 3 - Week of February 5, 2024**

These exercises for this week will give you practice working with functions and switch. The questions can be done with only this information, however the "Added Challenge" for each problem will require learning and using asserts. 

# Exercises

### Question 1: Sleep Tracker

Now that the semester is in full swing, it’s important to make sure that you’re still getting an adequate amount of sleep each night. In this problem you will make a sleep tracker that calculates the average amount of time you spend sleeping per night over the course of a week, and if you aren’t sleeping enough, the program will tell you what your sleep deficit is.

You should write a function that begins by prompting the user to input the number of hours they slept for each night of the week. Note that the user cannot enter a number less than 0 or greater than 24. If the user enters an invalid number, your function should output “Invalid input" and exit. Once you have collected data for each night of the week, your function should average the number of hours spent sleeping and print the result to the screen. 

Next, your function should ask the user how many hours of sleep per night they would like to have. Again, the user cannot enter a negative number or a number greater than 24. If the user enters an invalid number, your function should output “Invalid input" and exit. Your function should use the input to compute how many more hours of sleep the user needs to get to achieve their goal and return it. If the user has achieved or surpassed their goal, your program should print “Congrats! You are getting enough sleep. Keep it up!”. If the user has not achieved their goal, your program should print “You have a sleep deficit of X hours this week.” where X = number of hours the user wanted to sleep over the course of the week - number of hours the user actually slept over the course of the week.

Your function should accept no parameters and return the computed sleep deficit.

Your function should display all results with 2 decimal places worth of precision. 
<br/><br/>

**Example Output 1** (User input in bold)
<pre>
----Sleep Tracker----
Enter the number of hours slept on Monday:
<b>7</b>
Enter the number of hours slept on Tuesday:
<b>6</b>
Enter the number of hours slept on Wednesday:
<b>7</b>
Enter the number of hours slept on Thursday:
<b>6</b>
Enter the number of hours slept on Friday:
<b>8</b>
Enter the number of hours slept on Saturday:
<b>9</b>
Enter the number of hours slept on Sunday:
<b>9</b>
You slept for an average of 7.43 hours per night this week.
Enter your nightly goal: 
<b>8</b>
You have a sleep deficit of 0.57 hour(s) this week.
</pre>

**Example Output 2** (User input in bold)
<pre>
----Sleep Tracker----
Enter the number of hours slept on Monday:
<b>8</b>
Enter the number of hours slept on Tuesday:
<b>6</b>
Enter the number of hours slept on Wednesday:
<b>8</b>
Enter the number of hours slept on Thursday:
<b>7.5</b>
Enter the number of hours slept on Friday:
<b>8.5</b>
Enter the number of hours slept on Saturday:
<b>10</b>
Enter the number of hours slept on Sunday:
<b>8</b>
You slept for an average of 8 hours per night this week.
Enter your nightly goal: 
<b>8</b>
Congrats! You are getting enough sleep. Keep it up!
</pre>
Write down some test cases and check if your code works as expected.</br></br> 
*Added Challenge*: How would you use assert statements to validate your test cases?

### Question 2: Choose A Car

Write a program that asks a user to choose a type of car and then uses switch statements to tells them a fun fact about that car. (*You could also do this about flowers, or countries, or anything you find interesting) 

**Example Output 1** (User input in bold)
<pre>
Would you like to know about BMWs (B), Volkswagens (V), Toyotas (T), or Hondas (H)?
<b>B</b>
BMWs are luxury cars from Germany. The company began as a manufacturer of aircraft engines in World War I and II. 
</pre>

### Question 3: Move the robot <a name="Calculator"></a>
  
  You’re trying to control a robot which can move one unit at a time in one of the 4 directions up, down, right and left. The program asks you to enter the current x and y coordinate of the robot and shows you the following menu:
  
    1. Move one unit Upwards
    2. Move one unit Downwards
    3. Move one unit Right
    4. Move one unit Left

If you want to move up, you would press 1, to move down press 2 and so on. The program should then print the new coordinates after moving the robot in the selected direction. Write seperate functions for each of the directions and call the appropriate function according to the user choice using switch.

Example output (User input in bold)

 <pre>
    Enter the x coordinate:
    <b>2</b>
    Enter the y coordinate:
    <b>3</b>
    The following are the available operations:
    1. Move one unit Upwards
    2. Move one unit Downwards
    3. Move one unit Right
    4. Move one unit Left
    Please choose an operation
    <b>3</b>
    The robot is now at (3,3).
</pre>

Write down some test cases and check if your code works as expected.</br></br> 
*Added Challenge*: How would you use assert statements to validate your test cases?

### Question 4: Leap Years
You want to determine if a given year is a leap year. Many people do not know this, but leap years are more complicated than being every fourth year. If the year is divisible by 100 and NOT divisible by 400, the leap year will be skipped. For example, the year 2000 was a leap year, but the year 1900 was not. The next time we skip a leap year will be the year 2100. Write a function that determines whether a provided integer is a leap year or not. 

*Added Challenge*: How would you use assert statements to verify that your function works as intended?
