// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 20: reading from a file

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

    // 2. initialize a file for the objevct to read from
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
    string course_code;
    file_in >> course_code; // read input from a file

    cout << course_code; // print info read from the file

    // 5. close the file
    file_in.close();
    return 0;
}