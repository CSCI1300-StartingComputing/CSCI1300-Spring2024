#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Recitation 9 - Week of March 18, 2024**

# Table of contents
- [Topics](#topics)
- [Exercises](#exercises)
    - [1. The Booking Struct](#struct)
    - [2. The Room Class](#class)
- [Deliverables for Recitation](#deliverables)

# Topics <a name="topics"></a>
This recitation covers `structs` and `class`. Let us dive in!

# Exercises <a name="exercises"></a>

### 1. The `Booking` Struct! <a name="struct"></a>

You are running a Hostel, with multiple shared rooms and each room has exactly 10 beds. You want to keep track of the bookings made for the rooms in your hostel. To manage this you begin with creating a `Booking` struct and a function `displayBooking` to print out all the bookings.

Note : Write a ```main()``` function that creates an array of Booking objects. Call displayBooking to print the details of the booking. You may use [bookings1.txt](input_files/bookings1.txt) file for example data.

**Booking Members:**
| **Member Type** | **Member Name** | **Description** |
|-----------------|-----------------|-----------------|
| ```string```    | name      | Name of the person who made the booking      |
| ```int```       | num_people       | Number of people in the booking|

*Function Specifications*:

<table>
<tr>
<td>

Function: <br>
```void displayBooking(Booking[], int)```
</td>
<td>

```cpp
void displayBooking(Booking bookings[], int num_bookings)
```

</td>
</tr>
<tr>
<td> Purpose: </td>
<td>

Display all the bookings stored in the `bookings` array.

</td>
</tr>
<tr>
<td> Parameters: </td>
<td>

Booking ```bookings```: An Array containing ```Booking``` objects <br>
int ```num_bookings```: The size of ```bookings[]``` array <br>

</td>
</tr>
<tr>
<td> Return Value: </td>
<td>

- The function doesn't return any value.

</td>
</tr>

<tr>
<td> Error Handling/Boundary Conditions: </td>
<td>

- If num_bookings <=0, exit the function. 

</td>
</tr>
<tr></tr>
<tr>
<td> Example: </td>
<td>

Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem. <br>

Sample Code 1: <br>

```cpp
// Assume the proper libraries are included
// Assume the proper implementation of the struct is included

int main()
{
    Booking booking1;
    booking1.name = "Jacob";
    booking1.num_people = 4;
    Booking booking2;
    booking2.name = "Suzy";
    booking2.num_people = 5;
    Booking booking3;
    booking3.name = "Alex";
    booking3.num_people = 1;

    int num_size = 3;
    Booking bookings[3] = {booking1, booking2, booking3};
    displayBooking(bookings, num_size);
}
```

Sample Output 1: <br>
<pre>
    Jacob 3
    Suzy 5
    Alex 1
</pre>
Sample Code 2: <br>

```cpp
// Assume the proper libraries are included
// Assume the proper implementation of the struct is included

int main()
{
    ifstream file_in("bookings3.txt");
    
    const int MAX_BOOKING = 50;
    Booking bookings[MAX_BOOKING];
    
    const int MAX_NUMBERS = 2;
    string temp[MAX_NUMBERS];

    string line;

    int i = 0;
    while (getline(file_in, line))
    {
        /*
        
        Implement the code to read from the txt file, create Booking objects and populate the bookings array.

        */
    }
    displayBooking(bookings, i);
}
```

Sample Output 2: <br>
<pre>
    //File bookings3.txt contains:
    //Sid,4
    //Tim,1

    Sid 4
    Tim 1
</pre>

</td>

</tr>
</td>
</tr>
</table>


**2a.** Write out the steps you would use to solve this problem by hand as pseudocode.

-----------------------------
**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**2b.** Pick two possible inputs for your program. These can be in the form shown in the sample run above, or as lines of a booking file. Try to pick values that will test different aspects of your function. Follow the steps you wrote for these values to find your result, and verify it.

-----------------------------
**Sample Run 1:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 2:**
<br/><br/>
<br/><br/>

**2c.** Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test for the values used in your sample runs, and for the boundary conditions.

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

### 2. The `Room` Class! <a name="class"></a>

Now lets create a ```Room``` class as described below:

**Data Members (private)**
| **Member Type** | **Member Name** | **Description** |
|-----------------|-----------------|-----------------|
| ```string```    | _room_id      | ID of the room|
| ```const int```       | _MAX_OCCUPANTS       | Maximum number of occupants that can be added to the room, set as 10|
| ```int```       | _num_current_occupants       | Number of people currently occupying the room|
| ```int```       | _num_current_bookings       | Number of bookings currently added to the room|
| ```Booking[]```       |  _bookings       | Array containing all the bookings currently added to the room. The size of this array is ```_MAX_OCCUPANTS```|

**Member Functions (public)**

| **Function** | **Description** |
|-----------------|-----------------|
|Default constructor|Creates a new instance of ```Room``` by setting ```_room_id``` to an empty string, ```_num_current_occupants``` to ```0``` and  ```_num_current_bookings``` to ```0```|
|```Room(string)```|Creates a new instance of ```Room``` by initializing ```_room_id``` with the string parameter, ```_num_current_occupants``` to ```0``` and  ```_num_current_bookings``` to ```0```|
|```void setRoomId(string)```| Sets the ```_room_id``` to the value of the string parameter |
|```string getRoomId()```| Returns the ```_room_id``` of the Room |
|```void setNumCurrentOccupants(int)```| Sets the ```_num_current_occupants``` to the value of the integer parameter |
|```int getNumCurrentOccupants()```| Returns the value of ```_num_current_occupants``` |
|```bool addBooking(string)``` | Takes a `string` (the name of the file to be read) and populates the `_bookings` array with Booking objects. Returns a `true` if all the bookings in the file were successfully added and `false` otherwise.<br/>*See Function Specification table below for more details*  |
|```bool removeBooking(string)``` | Takes a `string` (the booking name) and removes the booking from the array `_bookings`. Returns a `true` if removed successfully and `false` otherwise. <br/> *See Function Specification table below for more details* |

**3a.** Create the above class definition in Room.h. Add the Booking struct from above in Room.h. You have to follow the table above during this process.

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**3b.** Implement all the member functions in Room.cpp. The function specifications for some of the member functions are given below.

<!-- You could use [bookings1.txt](add link) file as the sample input while developing your `addBooking` solution. -->

*Function Specifications*:

<table>
<tr>
<td>

Function: <br>
```bool addBooking(string)```
</td>
<td>

```cpp
bool addBooking(string filename)
```

</td>
</tr>
<tr>
<td> Purpose: </td>
<td>

Reads the file and populates the `_bookings` array with Booking objects.

</td>
</tr>
<tr>
<td> Parameters: </td>
<td>

string ```filename```: A file containing the booking details <br>

</td>
</tr>
<tr>
<td> Return Value: </td>
<td>

Returns `true` if all the bookings in the file were successfully added to the room, otherwise returns `false`.

</td>
</tr>

<tr>
<td> Error Handling/Boundary Conditions: </td>
<td>

- Return false if the room already has _MAX_OCCUPANTS.
If all the bookings in a file cannot be added to the room, display the current booking that cannot be added, along with the remaining available space in the room and return false.

</td>
</tr>
<tr></tr>
<tr>
<td> Example: </td>
<td>

Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem. <br>
Sample Code: <br>

```cpp
// Assume the proper libraries are included
// Assume the proper implementation of the class is included

int main()
{
    //create a Room object
    Room room("1B25");

    //test return value for a file that doesn't exist
    assert(room.addBooking("fake_file.txt") == 0);
    
    //test return value for a file that exist and all booking in the file CANNOT be accomodated in the room
    assert(room.addBooking("bookings1.txt") == 0);

}
```

The expected output after the function call: <br>
<pre>
    The file cannot be opened!

    Cannot accomodate the booking for 'Dave,5' in the room 1B25!! You must book in smaller parties!
    The room can accomodate only 4 more!
</pre>

</td>
</tr>
</td>
</tr>
</table>

*Sample runs:* <br>
Refer to the example above for sample usage of the function.
<table>
<tr>
<td> Example 1: </td>
<td>
Input for the function call:

```cpp
    //create a Room object
    Room room("1B25");

    //test return value for a file that exist and all booking in the file CAN be accomodated in the room
    assert(room.addBooking("bookings2.txt") == 1);
    
    //test return value for a file when the room is already at capacity
    assert(room.addBooking("bookings3.txt") == 0);
```

The expected output after the function call: <br>
```
Sucessfully added all bookings.

Sorry Room 1B25 is already at capacity!!
```
</td>
</tr>

</table>

  * **Notes**:
    * Empty lines should not be added to the array.
    * You may assume that each non-empty line will contain valid data, i.e. each non-empty line will consist of a Booking name, and the number of people in the booking, separated by a comma. There will be exactly one comma on each line.
    * Booking names may have spaces in them.
    * Assume that the txt files provided do **not** have duplicate booking listed.
    * You should use the `stoi()` method to convert the number of people in each booking from a `string` to an `int`.
    * Update the `_num_current_occupants` and  `_num_current_bookings` data members appropriately.


*Function Specifications*:

<table>
<tr>
<td>

Function: <br>
```bool removeBooking(string)```
</td>
<td>

```cpp
bool removeBooking(string booking_name)
```

</td>
</tr>
<tr>
<td> Purpose: </td>
<td>

Removes the specified booking from `_bookings` array.

</td>
</tr>
<tr>
<td> Parameters: </td>
<td>

string ```booking_name```: The booking name of the booking to be removed.<br>

</td>
</tr>
<tr>
<td> Return Value: </td>
<td>

If the booking is removed successfully, displays the updated Room stats and return `true` otherwise returns `false`.

</td>
</tr>

<tr>
<td> Error Handling/Boundary Conditions: </td>
<td>

- Return false if the room is already empty.
- Return false if the booking name is not found in the room .

</td>
</tr>
<tr></tr>
<tr>
<td> Example: </td>
<td>

Note: This is only an example usage of the function; you need to develop your own function to fulfill the requirement for this problem. <br>
Sample Code: <br>

```cpp
// Assume the proper libraries are included
// Assume the proper implementation of the class is included

int main()
{
    //create a Room object
    Room room("1B25");

    //test return value for a file that exist and all booking in the file CAN be accomodated in the room
    assert(room.addBooking("bookings2.txt") == 1);
    
    //test return value for removing a booking which is NOT added to the Room
    assert(room.removeBooking("Sara") == 0);

    //test return value for removing a booking which is already added to the Room
    assert(room.removeBooking("Leo") == 1);

}
```

The expected output after the function call: <br>
<pre>
    Sucessfully added all bookings.

    Booking Sara not found in room 1B25

    Removed booking: Leo from room 1B25
    Updated Room stats for room: 1B25
    Number of Current Booking: 3
    Number of Current Occupants: 7
</pre>

</td>
</tr>
</td>
</tr>
</table>

*Sample runs:* <br>
Refer to the example above for sample usage of the function.
<table>
<tr>
<td> Example 1: </td>
<td>
Input for the function call:

```cpp
    //create a Room object
    Room room("1B25");
    
    //test return value for removing a booking when the Room is empty
    assert(room.removeBooking("Sara") == 0);
```

The expected output after the function call: <br>
```
There are no occupants to remove in 1B25
```
</td>
</tr>

</table>

  * **Notes**:
    * Update the `_num_current_occupants` and  `_num_current_bookings` data members appropriately.
    * The booking name should be case insensitive.

**3c.** Write a main() function that creates Aquarium objects and tests all the constructors and member functions of Room class.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

# Deliverables for Recitation <a name="deliverables"></a>
Complete the Recitation 9 assignment on [Canvas](add link).
