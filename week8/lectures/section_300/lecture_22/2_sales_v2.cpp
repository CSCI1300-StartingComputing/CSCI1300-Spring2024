// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 22: reading multiple columns of data separated by a delimiter from a file

#include<iostream>
#include<fstream> // filestream - read and write

using namespace std;

int main()
{
    // 1. create a file stream object (variable)
    // file_in, fin, in_file
    ifstream file_in; // ifstream can only read from a file

    // 2. initialize a file for the object to read from
    file_in.open("sales2.txt");

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
    
    string line;
    getline(file_in, line);
    string month;
    double sales;
    // print the individual pieces of information and store in appropriate variables
    while(file_in.eof() == false)
    {
        getline(file_in, line); // read one line of data, break at the enter/newline and store it in the line variable
        // split the info in the line variable into two variables - month and sales
        // search for the comma and store everything before it in the month variable and everything after it in the sales variable
        int len = line.length();
        
        for(int i = 0; i < len; i++)
        {
            if(line.at(i) == ',')
            {
                month = line.substr(0, i); // all data before the comma
                sales = stod(line.substr(i + 1));
                cout << month << ": " << sales << endl;
            }
        }
    }

    // cout << line << endl; // print the info we read from the file

    /*
        while(getline(file_in, line))
        {
            cout << line << endl;
        }
    */
    
    // 5. close the file
    file_in.close();

    return 0;
}