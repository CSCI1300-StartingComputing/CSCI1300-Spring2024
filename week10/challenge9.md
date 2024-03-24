#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Recitation 9 - Week of March 18, 2024**

These exercises for this week will give you practice working with struct and classes.

# Exercises

## Question 1 - Event Management

Create the nested structs `Date` and `Event` with the given specifications, and a function `postponeBooking` to update the date of an event when it is postponed.

**Date Members:**
| **Member Type** | **Member Name** | **Description** |
|-----------------|-----------------|-----------------|
| ```int```       | day             | Day of the event|
| ```int```       | month           | Month of the event|
| ```int```       | year            | Year of the event|

**Event Members:**
| **Member Type** | **Member Name** | **Description** |
|-----------------|-----------------|-----------------|
| ```string```    | title      | Title of the event      |
| ```Date```      | date       | Date of the event|

Design a function `postponeBooking` that accepts a `Date` object `date` and an `integer` variable `num_days_to_add` and calculates and returns the postponed date of the event by adding the `num_days_to_add` to the original date of the event. Your program should ask the user to input the event details and number of days by which the event is postponed. 

Example output (**bold** is user input)
<pre><code>
Enter the title of the event:
<b>Project Deadline</b>
Enter the date of the event in dd/mm/yyyy form!
Enter the day of the event:
<b>26</b>
Enter the month of the event:
<b>04</b>
Enter the year of the event:
<b>2024</b>
Enter the number of days by which event is postponed:
<b>7</b>
The updated event date is:
03/05/2024
</code></pre>

-----------------------------

## Question 2 - Cars

Create a Car class, with separate interface file (Car.h) and implementation file (Car.cpp), comprised of the following attributes:

**Data Members (private)**
| **Member Type** | **Member Name** | **Description** |
|-----------------|-----------------|-----------------|
| ```string```    | _name      | name of the car|
| ```string```       | _type       | Type of the car|
| ```int```       | _mileage       | Mileage of the car in miles per gallon|

| **Function** | **Description** |
|-----------------|-----------------|
|Default constructor|Creates a new instance of ```Car``` by setting `_name`, `_type` to empty strings and `_mileage` to `0`|
|```Car(string, string, int)```|Creates a new instance of ```Car``` by initializing `_name` and `_type` with the string parameters, and  ```_mileage``` with the integer parameter|
|```void setName(string)```| Sets the ```_name``` to the value of the string parameter |
|```string getName()```| Returns the ```_name``` of the Car |
|```void setType(string)```| Sets the ```_type``` to the value of the string parameter |
|```string getType()```| Returns the ```_type``` of the Car|
|```void setMileage(int)```| Sets the ```_mileage``` to the value of the integer parameter |
|```string getMileage()```| Returns the ```_mileage``` of the Car|
|```int getMilesperFullTank()``` | Returns miles per Full Tank as an integer |

**NOTE: Full Tank = 15 Gallons**

In the ```main()``` function of your driver file mainDriver.cpp, the test cases should include the creation of class objects with both the default and parameterized constructors. You must also test each of the getter and setter member functions by creating and manipulating class objects and displaying output to verify that things are working properly. Each member function of the class should be called at least once to test it. 

## Question 3 - Maximum Mileage

Once you have written the `Car` class, write a function, `maxMileage`, to find the index of the car with the largest mileage in an array. This function should:

- Have two parameters in this order:
   - Car cars[]: array of Car objects. 
   - int size: number of cars in the array (Note: this value might be less than the capacity of the array)
- This function should return the following values, depending on the case:
   - If the array is non-empty, return the index of the car with the largest mileage as an int
   - If the array is empty, return -1
- If there is a tie between states, choose the one inserted first in the array.

Example Function Call 1:
<pre><code>
Car cars[5];
cars[0] = Car("Toyota","SUV", 10);
cars[1] = Car("Honda""Sedan",9);
cars[2] = Car("Tesla", "Hatchback",11);

int index = maxMileage(cars, 3);
cout << cars[index].getName() << endl;
cout << cars[index].getType() << endl;
cout << cars[index].getMileage();
</code></pre>

Example output 1
<pre><code>
Tesla
Hatchback
11
</code></pre>

Example Function Call 2:
<pre><code>
Car emptyArray[3];
int index = maxMileage(emptyArray, 0);
cout << index << endl;
</code></pre>

Example output 2
<pre><code>
-1
</code></pre>