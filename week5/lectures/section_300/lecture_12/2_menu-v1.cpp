// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 12: menu with while loop

#include<iostream>

using namespace std;

int main()
{
    char choice = '0'; // loop variable
    // while loop is versatile - used for any scenario
    // as long as they don't choose exit - show them the menu again
    double user_budget = 10;
    double budget = 0;
    // display the menu as long as they can afford it
    while(budget < user_budget) // event controlled loop
    {
        cout << "MENU" << endl;
        cout << "1. Coffee - 2.99" << endl;
        cout << "2. Tea - 3.99" << endl;
        cout << "3. Bagel - 4.99" << endl;
        cout << "4. Sandwich - 6.99" << endl;
        cout << "5. Exit" << endl;
        cout << "You choice: ";
        cin >> choice; // accept new user input
        // update budget if they choose an item
        if(choice == '1')
        {   
            budget = budget + 2.99;
            cout << "Bought a coffee and your updated budget is " << budget << endl;
        }
        else if(choice == '2')
        {   
            budget = budget + 3.99;
            cout << "Bought a tea and your updated budget is " << budget << endl;
        }
        else if(choice == '3')
        {   
            budget = budget + 4.99;
            cout << "Bought a bagel and your updated budget is " << budget << endl;
        }
        else if(choice == '4')
        {   
            budget = budget + 6.99;
            cout << "Bought a sandwich and your updated budget is " << budget << endl;
        }
        else // catch the remaining options
        {
            // exit the menu -> terminate the loop
            // DO NOT return from a loop
            // DO NOT break
            // use the loop variable in the condition to terminate the loop
            budget = 10;
        }
    }
    cout << "End of program" << endl;
    return 0;
}