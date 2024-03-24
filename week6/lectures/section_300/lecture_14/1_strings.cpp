// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 14: string functions

#include<iostream>
#include<string>
using namespace std;

int main()
{
    // (data_type variable_name =) string_variable.functionName(arguments);

    string name = "Rainbow Dash";
    // int, double, bool, float
    // unsigned int, long int, short int
    // unsigned int -> +ve whole number
    // int -> +ve or -ve

    unsigned int len = name.length();
    cout << len << endl;

    // R a i n b o w   D a s  h  // 
    // 0 1 2 3 4 5 6 7 8 9 10 11 // -> indices

    // string_variable[index_value]

    cout << name[2] << endl;
    cout << name[7] << endl;
    cout << name[8] << endl;
    cout << name[len - 1] << endl;

    // accessing an individual character in a string

    // store or compare -> char
    // char alphabet = name[0];
    // if(name[0] == '3') "3"

    // concatenation -> +
    string course_dept = "csci";
    string course_code = "1300";

    string course_1 = course_dept + course_code; // "csci1300"
    course_code += course_dept; // course_code = course_code + course_dept

    string course_2 = course_dept + "2270";
    string course_3 = "appm 1350";
    cout << course_1 << endl;

    // extracts a portion of the string
    // string variable_name = string_variable.substr(starting_index, number_of_characters);
    // substr(starting_index, number_of_characters);
    // substr(starting_index)
    // substr();

    // R a i n b o w   D a s  h  // 
    // 0 1 2 3 4 5 6 7 8 9 10 11 // -> indices

    string new_string = name.substr(0, 4);
    cout << new_string << endl;
    // cout << name << endl;

    cout << name.substr(8, 4) << endl;
    cout << name.substr(8) << endl; // extracts until the last character in the string
    cout << name.substr(4, 3) << endl;
    cout << name.substr() << endl;

    return 0;
}