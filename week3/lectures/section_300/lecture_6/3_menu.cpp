// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 6: nested conditionals

#include<iostream>

using namespace std;
/*
Menu
drinks - cappuccino, latte, americano
food - danish, muffin
*/

// if()
// {
    // if()
    // {
    //
    // }
// }
// else if()
// {

// }
// else
// {
    
// }


int main()
{
    char choice;
    cout << "Welcome to The Coffee Shop" << endl;
    cout << "a. Drinks" << endl;
    cout << "b. Food" << endl;
    cout << "c. Exit" << endl;
    cout << "Your choice: ";
    cin >> choice;
    if(choice == 'a' || choice == 'A')
    {
        char drink_choice;
        cout << "Here is the drink menu" << endl;
        cout << "a. Cappuccino - 3.99" << endl;
        cout << "b. Latte - 2.99" << endl;
        cout << "c. Americano - 1.99" << endl;
        cout << "Your choice: ";
        cin >> drink_choice;
        if(drink_choice == 'a')
        {
            cout << "Cappuccino!" << endl;
            cout << "Your total: $3.99" << endl;
        }
        else if(drink_choice == 'b')
        {
            cout << "Latte!" << endl;
            cout << "Your total: $2.99" << endl;
        }
        else if(drink_choice == 'c')
        {
            cout << "Americano!" << endl;
            cout << "Your total: $1.99" << endl;
        }
        else
        {
            cout << "Invalid choice. Bye!" << endl;
        }
    }
    else if(choice == 'b')
    {
        char food_choice;
        cout << "Here is the food menu" << endl;
        cout << "a. Muffin - 3.50" << endl;
        cout << "b. Cheese Danish - 2.99" << endl;
        cout << "Your choice: ";
        cin >> food_choice;
        if(food_choice == 'a')
        {
            cout << "Muffin!" << endl;
            cout << "Your total: $3.50" << endl;
        }
        else if(food_choice == 'b')
        {
            cout << "Cheese Danish!" << endl;
            cout << "Your total: $2.99" << endl;
        }
        else
        {
            cout << "Invalid choice. Bye!" << endl;
        }
    }
    else if(choice == 'c') 
    {
        cout << "Goodbye!" << endl;
    }
    else
    {
        cout << "Invalid choice. Bye!" << endl;
    }
    return 0;
}