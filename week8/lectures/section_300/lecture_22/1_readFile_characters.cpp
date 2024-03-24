// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 22: reading characters from a file

#include<iostream>
#include<fstream> // filestream - read and write

using namespace std;

int main()
{
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

    char ch;

    // get - read one character from the file
    // ifstream - get(char) 
    file_in.get(ch);
    cout << ch << endl;
    file_in.get(ch);
    cout << ch << endl;
    file_in.unget();
    file_in.get(ch);
    cout << ch << endl;
    
    // 5. close the file
    file_in.close();
    return 0;
}