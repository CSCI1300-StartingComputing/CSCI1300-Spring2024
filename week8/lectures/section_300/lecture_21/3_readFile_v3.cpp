// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 21: reading from a file using a loop - eof()

#include<iostream>
#include<fstream> // filestream - read and write

using namespace std;

int main()
{
    // int x;
    // x = 10;

    // int y = 10;

    // 1. create a file stream object (variable)
    // file_in, fin, in_file
    ifstream file_in; // ifstream can only read from a file

    // 2. initialize a file for the object to read from
    file_in.open("input.txt");

    // 3. only if you are reading from a file - check if the file opens
    // fail() - returns true if file cannot be opened, false otherwise
    // is_open() - returns false if file cannot be opened, true otherwise
    if(file_in.fail() == true)
    {
        cout << "File failed to open. Program will terminate" << endl;
        return 1;
    }

    // 4. process information
    // cin >> y; accept input from user
    string course_code[8];
     
    // process the column of similar information/data
    // >> -> return a true if data was read successfully and stores that data in the variable listed in that statement

    // we read each piece of data from the file and stored it in teh array in readFile_v1.cpp using file_in >> course_code[0]; 
    
    // Let's put that in a loop now
    
    int position = 0; // variable to track index of the course_code array
    // eof() - end of file -> returns true if we have reached the end of the file and false otherwise
    int position = 0;
    while(file_in.eof() != true) // !file_in.eof()
    {
        file_in >> course_code[position];
        position++;
    }


    for(int i = 0; i < 8; i++)
    {
        cout << course_code[i] << endl; // print info read from the file
    }
    
    // 5. close the file
    file_in.close();
    return 0;
}