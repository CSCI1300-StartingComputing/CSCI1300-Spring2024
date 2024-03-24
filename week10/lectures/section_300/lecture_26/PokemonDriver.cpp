// driver file -> has main and used to test the class Pokemon
//LINE TO COMPILE:
//g++ -std=c++17 -Wall -Werror -Wpedantic Pokemon.cpp Trainer.cpp PokemonDriver.cpp

// abstraction, encapsulation, inheritance, polymorphism

#include<iostream>
#include "Pokemon.h"
#include "Trainer.h"

using namespace std;

int main()
{
    // int x;
    // int y = 10;

    // create an object of type Pokemon
    Pokemon pikachu; // implicit call to the default constrcutor
    // creates an instance of type Pokemon called pikachu sets everything to garbage, 0 or empty
    // className objectName;

    Pokemon charmander = Pokemon(); // explicit call to the default constructor

    Pokemon bulbasaur("bulbasaur", 23, 34, 65, 72, 92); // paramterized constrcutor (implicit call)

    Pokemon squirtle = Pokemon("squirtle", 25, 41, 61, 78, 23); // paramterized constrcutor (explicit call)

    // constructs or creates an object of that class in memory
    // Pokemon pikachu = Pokemon()

    // constructor - special member function
    // 1. doesn't have a return type
    // 2. takes on the same name as the class
    // 3. function call is different that regular functions

    // if you don't define a constructor - your compiler provides one for you by default

    // pikachu._hp = 23; // not allowed
    pikachu.setHP(45);
    pikachu.setName("pikachu");
    pikachu.setDefense(37);
    pikachu.setMax(82);
    pikachu.setSpeed(61);
    pikachu.setAttack(71);
    cout << pikachu.getHP() << endl;
    cout << pikachu.getAttack() << endl;
    cout << pikachu.getSpeed() << endl;

    //an array of pokemon objects
    Pokemon starter_pokemon[4] = {pikachu, charmander, squirtle, bulbasaur};

    //expected output: pikachu
    cout << starter_pokemon[0].getName() << endl;

    //testing parameterized constructor with an array that isn't of size 6
    Trainer ash = Trainer("Ash", starter_pokemon, 4);
    
    return 0;
}