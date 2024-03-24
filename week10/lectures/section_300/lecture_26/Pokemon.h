// header file -> contain the definition for a class

// class definition -> ClassName.h
// typically at least 3 files -> 1.h, 2.cpp
// a program will only have 1 main()

// header guard -> avoids redefinition error

#ifndef POKEMON_H // if there is no definition for POKEMON
#define POKEMON_H // begin definition for POKEMON

// class definition inside your header guards

#include<iostream>
using namespace std;

class Pokemon
{
    // access specifiers - public and private

    // public: can be accessed outside the class but through an object fo type Pokemon, all functions associated with class
    // move
    // heal/rest
    // evolve
    // attack
    public:

        // default constructor - set the attributes to some initial value
        Pokemon();
        // parameterized constructor
        Pokemon(string, int, int, int, int, int);
        Pokemon(string);
        // getter/accessor -> display/ access
        // returns the attribute value
        // const after a fucntion -> that function is not allowed to modify any attribute of that class
        string getName() const;
        int getHP() const;
        int getAttack() const;
        int getDefense() const;
        int getMax() const;
        int getSpeed() const;

        // setter/mutator -> change/update the attribute value
        // typically doesn't return a value
        void setName(string name);
        void setHP(int hp);
        void setAttack(int attack);
        void setDefense(int defense);
        void setMax(int max);
        void setSpeed(int speed);

    // private: can only be accessed inside the class, will have all the data members/attributes
    private:
        string _name;
        int _hp;
        int _attack;
        int _defense;
        int _max;
        int _speed;
};


#endif // end the defintion for POKEMON