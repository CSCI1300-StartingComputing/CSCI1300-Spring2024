// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 21: writing to file in append mode

#include<iostream>
#include<fstream> // filestream - read and write

using namespace std;

int main()
{
    // 1. create a file stream object for reading data
    // file_in, fin, in_file
    ifstream file_in; // ifstream can only read from a file

    // 2. create a file stream object for writing data
    // file_out, fout, out_file
    ofstream file_out;

    // 3. initialize a file for the object to read from
    file_in.open("sales1.txt");

    file_out.open("output.txt", ios::app); // creates the file if it doesn;t exist and appends data to the file

    // 4. only if you are reading from a file - check if the file opens
    // fail() - returns true if file cannot be opened, false otherwise
    // is_open() - returns false if file cannot be opened, true otherwise
    if(file_in.fail() == true)
    {
        cout << "File failed to open. Program will terminate" << endl;
        return 1;
    }

    // 5. process information
    // read from file and append to file
    string month;
    double sales;

    while(file_in.eof() == false)
    {
        file_in >> month >> sales;
        file_out << month  << ": " << sales << endl;
    }


    // 6. close the files
    file_in.close();
    file_out.close();
    return 0;
}