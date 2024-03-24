// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 21: reading multiple columns of data sperated by space from a file

#include<iostream>
#include<fstream> // filestream - read and write

using namespace std;

int main()
{
    // 1. create a file stream object (variable)
    // file_in, fin, in_file
    ifstream file_in; // ifstream can only read from a file

    // 2. initialize a file for the object to read from
    file_in.open("sales1.txt");

    // 3. only if you are reading from a file - check if the file opens
    // fail() - returns true if file cannot be opened, false otherwise
    // is_open() - returns false if file cannot be opened, true otherwise
    if(file_in.fail() == true)
    {
        cout << "File failed to open. Program will terminate" << endl;
        return 1;
    }

    // 4. process information
    // read from file and print it
    string month;
    double sales;

    // file_in >> month;
    // file_in >> sales;

    while(file_in.eof() == false)
    {
        file_in >> month >> sales;
        cout << month  << ": " << sales << endl;
    }


    // 5. close the file
    file_in.close();

    return 0;
}