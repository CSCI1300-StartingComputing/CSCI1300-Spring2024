#ifndef TRAINER_H
#define TRAINER_H

#include<iostream>
#include "Pokemon.h"

using namespace std;


class Trainer{
    private:
        string _name;
        static const int _MAX_POKEMON = 6;
        Pokemon _my_pokemon[_MAX_POKEMON];
        int _current_num_pokemon;

    public: 
        //Constructors
        Trainer();
        Trainer(string);
        Trainer(string, Pokemon[], int num_pokemon);

        //Getters
        string getName() const;
        int getNumPokemon() const;
        Pokemon getPokemon(int) const;

        //Setters
        void setName(string);
        bool addPokemon(Pokemon);
        bool removePokemon(string);


};

#endif
