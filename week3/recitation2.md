#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Recitation 2 - Week of January 29, 2024**

# Table of contents

1. [Exercises](#exercises)
   1. [Question 1 - Spot the Errors](#spot)
   2. [Question 2 - Hydration app](#app)
2. [Deliverables for Recitation](#deliverables)


# Exercises <a name="exercises"></a>

### 1. **Spot the errors**. <a name="spot"></a>

a.  The code snippet below is supposed to determine if a variable stores a value that is greater than, less than, or equal to 8. Identify the error(s) in the code below, and write the correct line(s).  
```cpp
#include <iostream>
using namespace std;

int main()
{
    int num = 6;

    if (num > 8) {
        cout << "The number is greater than 8." ;
    }
    else if (num = 8) {
        cout << "The number is equal to 8."; 
    }
    else {
        cout << "The number is less than 8.";
    }

    return 0; 
}
```

b. The code snippet below is supposed to determine if a variable stores a value for an angle that is obtuse, right, or acute. Identify the error(s) in the code below, and write the correct line(s).
  
```cpp
#include <iostream>
using namespace std;

int main()
{
    int angle = 120;
    if (x>90) { 
        cout<<"It is an obtuse angle." ;
    }
    elif(x=90) {
        cout<<"It is a right angle.";
    }
    else{
        cout<<"It is an acute angle.";
    }
}
```

c. The code snippet below is supposed to determine if a variable stores a value that is equal to zero or not. Identify the error(s) in the code below, and write the correct line(s). 
    
```cpp
#include <iostream>
using namespace std;

int main()
{
    int num = 7;

    if (num) { 
        cout << "The number is zero.";
    }
    else {
        cout << "The number is not zero.";
    }

    return 0; 
}
```

d. The code snippet below is supposed to determine if a variable stores a value that is equal to zero or not. Identify the error(s) in the code below, and write the correct line(s).
    
```cpp
#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    else {
        cout << "This is the 'else' block.";
    }
    if (num == 0) {
        cout << "The number is zero.";
    }
    else {
        cout << "The number is not zero.";
    }

    return 0; 
}
```
    
e. The following code snippet is expected to accept a user provided integer and then state whether that number is even or odd. Identify the error(s) in the code below, and write the correct line(s).
    
```cpp
 #include <iostream>
 using namespace std;
 
 int main()
 {
     int num;
     cout << "Provide an integer:" << endl;
     cin >> num;

     if (num/2){
         cout << "The number is even." << endl;
     }
     else {
         cout << "The number is odd." << endl;
     }
 
     return 0; 
 }
```
f. The following code snippet is expected to accept a user provided character and then state whether the corresponding grade passes or not. Identify the error(s) in the code below, and write the correct line(s).
    
```cpp
 #include <iostream>
 using namespace std;
 
 int main()
 {
     char grade;
     cout << "Provide a grade (A, B, C, D, or F):" << endl;
     cin >> grade;

     if (grade == 'A' || 'B' || 'C'){
         cout << "This is a passing grade." << endl;
     }
     else if (grade == 'D'){
         cout << "This grade passes with conditions." << endl;
     }
     else {
         cout << "This is a failing grade." << endl;
     }
 
     return 0; 
 }
```



<br/>


### 2. Hydration app  <a name="app"></a>

  Your goal is to drink 3 liters(L) of water every day but you aren’t great at remembering to do it! So you decide to create a hydration app that tracks your water intake every day and will alert you based on how much you drank for the day.
  The program first asks how much water you drank for the day, which is in liters, and then displays a message based on whether you have hit your goal for the day.
  Next, it will also tell you how much water you have left to drink. 
  
  The following are the possible messages you will get based on your intake:<br/>
  
   1. If you’re drinking 1.5L or less, then you get
    
 ```
    You’re very, very dehydrated! Get that water in! You have X liters left to drink.
 ```
   2. If you’re drinking more than 1.5L but less than 3L, then you get
    
 ``` 
    You’re doing great, but you’re still halfway to your goal! Get that water in! You have X liters left to drink
 ```
   3. If you’re drinking 3L or more, then you get<br/>
 ```
    You’ve hit your goal for the day! Great job getting hydrated! 
 ```     
        
 
 Note that **X** is the amount of water left after subtracting your intake.  
 
  Example output (User input in **bold**)

<pre>
How much water did you drink today? (in liters)
<b>0.75</b>
You’re very, very dehydrated! Get that water in! You have 2.25 liters left to drink.
</pre>

  <!-- <img src="images/Rec2_q3_output1.png" width="90%"> -->
  
  **2a**. Write out the steps you would use to solve this problem by hand as pseudocode. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

  **2b**. Depict your pseudocode using a flowchart.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

  **2c**. Pick a random number between 0 and 3.0 for a sample run. Follow the steps you wrote for this number to find your end result, and verify it.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

  **2d**. Identify two possible values that are "boundaries" in this problem that you will have to test. What should happen for these values?

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


  **2e**. Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test for the values used in your sample runs.

<br>


# Deliverables for Recitation <a name="deliverables"></a>
Complete the quiz on [Canvas](https://canvas.colorado.edu/courses/100891/assignments/1948374)
