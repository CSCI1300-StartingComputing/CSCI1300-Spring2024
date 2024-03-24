// implement the class Pokemon
// no main()

#include "Pokemon.h"
#include<iostream>

using namespace std;

Pokemon::Pokemon() // sets all nuemeric attributes to some value (10)
{
    _name = "n/a";
    _hp = 10;
    _attack = 10;
    _speed = 10;
    _max = 10;
    _defense = 10;
}
// parameterized constructor
Pokemon::Pokemon(string name, int hp, int attack, int defense, int max, int speed)
{
    _name = name;
    _hp = hp;
    _attack = attack;
    _speed = speed;
    _max = max;
    _defense = defense;
}
// Pokemon(string);

// getter/accessor
string Pokemon::getName() const
{
    return _name;
}

int Pokemon::getHP() const // 0 - 100 
{
    return _hp;
}
int Pokemon::getAttack() const
{
    return _attack;
}
int Pokemon::getDefense() const
{
    return _defense;
}
int Pokemon::getMax() const
{
    return _max;
}
int Pokemon::getSpeed() const
{
    return _speed;
}

// setter/mutator 
// :: -> scope resolution operator
// tells that the setName function is defined in the Pokemon class
void Pokemon::setName(string name)
{
    _name = name;
}

void Pokemon::setHP(int hp)
{
    if(_hp >= 0 && _hp <=100)
    {
        _hp = hp;
        cout << "Hp updated for " << _name << endl;
    }
    else
    {
        cout << "Invalid hp value." << endl;
    }
    // return or print something if _hp is not valid
}
void Pokemon::setAttack(int attack)
{
    _attack = attack;
}
void Pokemon::setDefense(int defense)
{
    _defense = defense;
}
void Pokemon::setMax(int max)
{
    _max = max;
}
void Pokemon::setSpeed(int speed)
{
    _speed = speed;
}