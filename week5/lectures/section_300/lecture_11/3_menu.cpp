// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 11: menu with while loop

#include<iostream>

using namespace std;

int main()
{
    char choice;
    cout << "MENU" << endl;
    cout << "1. Drinks" << endl;
    cout << "2. Food" << endl;
    cout << "3. Exit" << endl;
    cout << "You choice: ";
    cin >> choice;

    // while loop is versatile - used for any scenario
    // as long as they don't choose exit - show them the menu again
    while(choice != '3') // event controlled loop
    {
        cout << "MENU" << endl;
        cout << "1. Drinks" << endl;
        cout << "2. Food" << endl;
        cout << "3. Exit" << endl;
        cout << "You choice: ";
        cin >> choice; // accept new user input
    }
    cout << "End of program" << endl;
    return 0;
}