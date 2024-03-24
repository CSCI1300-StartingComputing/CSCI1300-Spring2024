// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 14: string traversal using for loop 

#include<iostream>
#include<string>
using namespace std;

// check if user input is a valid .edu email -> @

/*
Initial approach (code solution modified as the following caused an error)
1. declare a variable -> string 
2. accept email from user -> cout, cin
3. search for @ in user email -> for
    4. if email contains @ -> if
        5. then print valid email -> cout
    6. otherwise -> else
        7. print invalid email -> cout
*/

// flag variable -> to check if I found something; bool

int main()
{
    string email = "csci1300@colorado.edu"; // 21
    bool flag = false;
    // print the individual letters in string email
    // cout << email[0] << endl; // c
    // cout << email[1] << endl; // s
    unsigned int email_len = email.length(); // 21
    for(int i = 0; i < email_len; i++) // 0 -> 20
    {   
        // cout << email[i] << endl;
        if(email[i] == '@')
        {
            flag = true;
        }
    }
    if(flag == true && email.substr(email_len - 4) == ".edu") 
    {
        cout << "valid .edu email" << endl;
    }
    else
    {
        cout << "invalid .edu email" << endl;
    }
    return 0;
}