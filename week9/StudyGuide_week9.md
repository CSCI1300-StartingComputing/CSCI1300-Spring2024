#### **CSCI 1300 CS1: Starting Computing: Study Guide: Week 9**
#### **Naidu/Godley - Spring 2024**

# Table of contents
1. [File Input](#fileinput)
2. [Reading Inputs](#readinput)
3. [File Output](#fileoutput)
3. [Reminders](#reminders)
8. [Vocabulary](#vocabulary)
8. [Pre-Quiz](#pre-quiz)

## File Input <a name="fileinput"></a>
So far in class, we've been using the `iostream` standard library. This library has provided us with methods like `cin` and `cout`. `cin` is the method that reads from standard input (i.e., in the terminal via the keyboard) and `cout` is for writing to standard output.

In this study guide, we'll cover file input, allowing you to read information from a file. To do this, we'll need to include C++'s `fstream` library, which is short for "file stream".

**Reading Lines From A File**

**Step 1. Make a stream object.** <br/>
Create an object (a variable) of file stream type. If you want to open a file for reading only, the `ifstream` object should be used (short for “input file stream”).

*Example*
```cpp
// Create an input file stream object
ifstream file_in;
```

**Step 2. Open a file.** <br/>
 Once you have a file stream object, you need to open the file. To do this, use the `ifstream` object's `open()` method (function), which takes only one parameter: the file name as a string (surrounded by " " if the file name is given directly).

*Example*
```cpp
// Open myTextFile.txt with the file stream object
file_in.open("myTextFile.txt");  
```

**Alternative: steps 1 and 2. Making a stream object and opening a file**

Creating a file stream object and opening the file together is also possible. In this example, we would pass the filename when declaring the object. Note that this is another way of opening the file; you only have to open the file in one way.

*Example*
```cpp
// Creating the object and opening the file
ifstream file_in("myTextFile.txt");
```

**Step 3. Checking for open files.** <br/>
It is always good practice to check if the file has been opened properly and take appropriate action if it is not. To check if a file was successfully opened, you may use the `fail()` **or** `is_open()` methods.

`fail()`: This method will return a boolean value `true` if the file fails to open and `false` otherwise.

*Example*
```cpp
if (file_in.fail()) // true when file fails to open
{
    cout << "Could not open file." << endl;
    return -1; // return to terminate the program; -1 to indicate that the program didn't function as expected
}
// Do things with the file
```

`is_open()`: This method will return a boolean value `true` if the file has successfully opened and `false` otherwise.

*Example*
```cpp
if (file_in.is_open()) // true when file opens successfully
{
    // Do things with the file
}
else
{
    cout << "Could not open file." << endl;        
}
```

**Step 4. Read lines from the file.** <br/>
To read a line from the file, you can use `getline(file_in, line)`, which returns true as long as an additional line has been successfully assigned to the variable line. Once no more lines can be read, `getline` returns false. So we can set up a while loop where the condition is the call to `getline`.

`.eof()`: This method will return a boolean value `true` if all the data in the file was processed and `false` otherwise.

Note: we will discuss other methods of reading inputs in the [Reading Input section](#readinput).

*Example*
```cpp
string line = "";
int line_idx = 0;
// Read each line from the file
while (!file_in.eof()) // continue looping as long as there is data to be processed in the file
{
    // Get the next line from the file and store it in the 'line' variable
    getline(file_in, line);

    // Print each line read from the file
    cout << line_idx << ": " << line << endl;

    // Increment index(count of lines in the file)
    line_idx++;   
}
```

**Step 5. Closing a file.** <br/>
When you are finished processing your files, it is recommended to close all the opened files before the program is terminated. You can do this by using the `.close()` function on your file stream object.

*Example*
```cpp
// Closing the file
file_in.close();
```

**Step 6. Putting it all together.** <br/>
If we combine all the previous steps, this is the final piece of code we get.

*Example*
```cpp
// Create an input file stream object
ifstream file_in;

// Open myTextFile.txt with the file stream object
file_in.open("myTextFile.txt");

// Check if file opened successfully
if (file_in.fail())
{
    cout << "Could not open file." << endl;
    return -1;
}
else
{
    // Do things with the file
    string line = "";
    int line_idx = 0;

    // Read each line from the file
    while (!file_in.eof())
    {
        // Gets line of text from file_in, stores it in line
        getline(file_in, line);

        // Print each line read from the file
        cout << line_idx << ": " << line << endl;

        // Increment index (count of lines in the file)
        line_idx++;   
    }
}

// closing the file
file_in.close();
```

## Reading Inputs <a name="readinput"></a>
There are multiple ways we can read inputs from the text file. Some of them may be familiar, while others may be new. For demonstration purposes, let's assume the "myTextFile.txt" file to look like the following:

```
This is a quick example.
By using this text file, we can see how we are reading.
```

### Reading word
You already know how to read input by each word using the `>>` operator. Reading one word at a time from the stream is very similar: instead of using the `cin`, we will replace that with the stream object we created.

*Example*
```cpp
// Initialize the stream object and the string variable
ifstream file_in("myTextFile.txt");
string word;

// Read the first word
file_in >> word;

// printing variable word
cout << word << endl;
```

By using the `>>` operator, the output will be:
```cpp
This
```

### Reading characters
You can read one character at a time using `get()`. The function will read one character at a time, which means it will also read white space and special characters.

*Example*
```cpp
// Initialize the stream object and the string variable
ifstream file_in("myTextFile.txt");
char character;

// read the first character
file_in.get(character);

// printing the first character
cout << character << endl;
```

The `get()` function will store the first letter into the variable character. The output will be:
```
T
```


If you read the character and regretted it, you can put the character back into the stream and allow that character to be read again. This function is called `unget()`.

*Example*
```cpp
// defining the stream object and variable that we will use
char character;
string word;
ifstream file_in("myTextFile.txt");

file_in.get(character);
// You may do many different operations and decide when you want to unget a character
if(isupper(character))
{
	file_in.unget();
	file_in >> word;
}

cout << "After unget(): " << word << endl;

// Closing the file and reopening it to show the same example without the unget
file_in.close();
file_in.open("myTextFile.txt");
file_in.get(character);

file_in >> word;

cout << "Without unget(): " << word << endl;
```

We have the following output:
```
After unget(): This
Without unget(): his
```

### Reading lines
Lastly, you can read the input one line at a time using the `getline()` function.

*Example*
```cpp
// Initialize the stream object and the string variable
ifstream file_in("myTextFile.txt");
string line;

// Read the first line
getline(file_in, line);

cout << line << endl;
```

We have the following output:
```cpp
This is a quick example.
```

### Notes for reading inputs
The above examples in this section only read a single word/character/line. If you want to read all the content within the file, you have to put that in a loop. Additionally,  recall from Project 1 that using `>>` and `getline()` can cause unwanted behaviors. Please stick to one method, either `>>` or `getline()`. Switching in between `get()` and `>>` is fine.

## File Output <a name="fileoutput"></a>
We discussed reading from a file in the [file input section](fileinput). Here, we will show how we can write to a file. First, you define an `ofstream` variable and open the file you would like to write to. Then you can write to the output file using the same operation you used with `cout`, `<<`, and `endl`.

*Example*
```cpp
// Create the output file object
ofstream file_out;
// Opening the output file
file_out.open("output.txt");

// Writing something to the output file
file_out << "writing a sentence to the output file" << endl;

// Writing the value of the variable to the file
string test_string = "you can also write the content of the variable";
file_out << test_string << endl;
file_out.close();
```

The output.txt will have the following content:
```cpp
writing a sentence to the output file
you can also write the content of the variable
```

## Reminders <a name="reminders"></a>
Here is a collection of useful things:

- Setting decimal points in cout (remember to include ```<iomanip>```!):

    ```cout << fixed << setprecision(number of decimal points) << floating point value << endl```

    As an example, try running this program to see the difference:
    ```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main()
    {
        cout << 7.0/13.0 << endl;
        cout << fixed << setprecision(2) << 7.0/13.0 << endl;
        return 0;
    }
    ```

- Code compilation with g++:

  ```cpp
  g++ -Wall -Werror -Wpedantic -std=c++17 name_of_source_file.cpp
  ```

- Using the ```-o``` option provided by g++ to name your executable [OPTIONAL]:

  ```cpp
  g++ -Wall -Werror -Wpedantic -std=c++17 name_of_source_file.cpp -o nameOfExecutable
  ```

- Good coding style: <br>
  - Name variables well, for example: ```double d = 42.0167``` is confusing, whereas ```double height_of_rectangle = 42.0167``` is clearer about what the variable represents
  - Name functions well, for example: ```int Func(int x);``` is confusing, whereas ```int calculateSquare(int x);``` is clearer about what the function does
  - Variables should be named using snake-case, where_all_words are all lowercase and separated by underscores: this_is_snake_case.
  - Functions should be named using camel-case, where all words except the first start with an uppercase letter, and there are no separators: thisIsCamelCase.
  - Indent things properly! If-else blocks should be well-spaced and indented, function blocks as well, etc. Use tab to increase indent, and shift+tab to decrease indent.
  - Remember to comment your code! Comment lines start with ```//```
  - Good places to put comments include (but are not limited to!): next to function prototypes, next to variable declarations, and next to important lines, such as numerical calculations, etc.
  - These conventions will make your code easier to read and understand

For more information, please refer to [week 3 study guide](https://github.com/CSCI1300-StartingComputing/CSCI1300-Spring2024/blob/main/week3/StudyGuide_week3.md#compiling-a-c-program-).

-----
## Vocabulary <a name="vocabulary"></a>
* **Input File Stream (ifstream)** - An abstraction of a way to read from a file.
* **Output File Stream (ofstream)** - An abstraction of a way to write to a file.  
* **File Stream (fstream)** - A way of both reading and writing to a file.
* **End-of-File (EOF)** - A condition used to indicate the end of a file. Which means there is no more data to be read.


-----
## Recitation 8: pre-quiz <a name="pre-quiz"></a>

### Question 1
What are file streams? What are the five major steps involved in working with a file in C++?

### Question 2

The program needs to print all the contents of the file `input.txt` present in the current folder.

```cpp
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() 
{
    // make an input file stream from the file name given above.
    _____________________________________ // FILL IN THIS LINE
    string text;  
    while(getline(file_in, text))
    {      
        cout << text << endl;
    }
    //close the file
    _____________________________________ // FILL IN THIS LINE
    return 0;
}

```

### Question 3

The program needs to write all the contents of the file `input.txt` to the file `output.txt`. Assume that both these files are present in the current folder.

```cpp
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() 
{
    // make an input file stream from the file input.txt.
    _______________________________ // FILL IN THIS LINE
    // make an output file stream to the file output.txt.
    _______________________________ // FILL IN THIS LINE
    string text; 

    // read the text from the input file stream.
    while(_______________________) //FILL IN THIS LINE
    {
        file_out << text << endl;
    }
    return 0;
}

```

### Question 4

The program needs to write all the contents of the file provided by the user to the file name provided by the user. Assume that the files are present in the current folder.

```cpp
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() 
{
    cout << "Enter input file name: " << endl;
    string input_file;
    cin >> input_file;
    cout << "Enter output file name: " << endl;
    string output_file;
    cin >> output_file;
    ifstream file_in;
    // Fill the line below to open input_file using input file stream file_in.
    _______________________________ // FILL IN THIS LINE
    // Fill the line below to make an output file stream to the file output.txt.
    _______________________________ // FILL IN THIS LINE
    string text;  
    while(getline(file_in, text))
    {
        // Fill the line below to write the text to the output file stream.
        _______________________________ // FILL IN THIS LINE
    }
    return 0;
}

```

### Question 5
The program below takes in cities and their coordinates from a file and prints them one at a time to the screen. The cities and coordinates are stored in a file called `cities.txt`, which looks something like:

```
London
51.5072 N 0.1276 W
New Delhi
28.6139 N 77.2090 E
Cairo
30.0444 N 31.2357 E
Sydney
33.8688 S 151.2093 E
```
The program loops through every line in the file. If the line starts with a letter we know it must be a city name. If it doesn't, it must be a coordinate line. Fill in the blanks appropriately.

```cpp
#include<iostream>
_________________________ //FILL IN THIS LINE
using namespace std;

int main(){
    ifstream file_in;
    file_in.open("cities.txt");
    double latitude = 0, longitude = 0;
    char north_or_south, east_or_west;
    char peek;
    string cityName;

    while (!file_in.fail()){
        file_in.get(peek);
        file_in.unget();
        if (________________________){ //FILL IN THIS LINE
            getline(file_in, cityName);
        }
        else{
            __________ >> latitude >> north_or_south >> longitude >> east_or_west; //FILL IN THIS LINE
            file_in.get(peek); //this line clears the new line character at the end of a coordinate line
            cout << cityName << " is located at " << latitude  << north_or_south;
            cout << ", " << longitude << east_or_west << endl;
        }
    }
}

```


