// implement the class Pokemon
// no main()

#include "Pokemon.h"
#include<iostream>

using namespace std;

// getter/accessor
string Pokemon::getName() const
{
    return _name;
}

int getHP() const;
int getAttack() const;
int getDefense() const;
int getMax() const;
int getSpeed() const;

// setter/mutator 
// :: -> scope resolution operator
// tells that the setName function is defined in the Pokemon class
void Pokemon::setName(string name)
{
    _name = name;
}

void setHP(int hp);
void setAttack(int attack);
void setDefense(int defense);
void setMax(int max);
void setSpeed(int speed);