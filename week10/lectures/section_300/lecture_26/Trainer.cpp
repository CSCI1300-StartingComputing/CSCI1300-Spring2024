#include"Pokemon.h"
#include"Trainer.h"

using namespace std;


//default constructor
Trainer::Trainer(){
    _name = "";
    _current_num_pokemon = 0;
}

//constructor for a new trainer who has no pokemon
Trainer::Trainer(string name){
    _name = name;
    _current_num_pokemon = 0;
}

//constructor for an established trainer who already has some pokemon
Trainer::Trainer(string name, Pokemon my_pokemon[], int num_pokemon){
    _name = name;
    for (int i = 0; i < num_pokemon; i++){
        _my_pokemon[i] = my_pokemon[i];
    }
    _current_num_pokemon = num_pokemon;
}


string Trainer::getName() const{
    return _name;
}

int Trainer::getNumPokemon() const{
    return _current_num_pokemon;
}

Pokemon Trainer::getPokemon(int index) const{
    //ensure the index is in the valid range
    if (index >= 0 && index < _current_num_pokemon){
        return _my_pokemon[index];
    }
    //if not, return a default pokemon
    return Pokemon();
}


void Trainer::setName(string name){
    _name = name;
}

//you could make this a void function
//you could use a boolean to determine if the pokemon was added successfully
//you could use an integer to return the index where it was added or -1 if it wasn't added
bool Trainer::addPokemon(Pokemon p){
    //check there is room to add a pokemon
    if (_current_num_pokemon < _MAX_POKEMON){
        _my_pokemon[_current_num_pokemon] = p;
        _current_num_pokemon++;
        return true;
    }
    return false;
}

//you could make this a void function
//you could return a boolean if it was removed or not
bool Trainer::removePokemon(string pokemon_name){
    int index = -1;
    //find the index of the pokemon with that name, if it exists
    for (int i = 0; i < _current_num_pokemon; i++){
        if (_my_pokemon[i].getName() == pokemon_name){
            index = i;
        }
    }
    //if the index was found, move everything after that index forward 1
    if (index > -1){
        for (int i = index; i < _MAX_POKEMON-1; i++){
            _my_pokemon[i] = _my_pokemon[i+1];
        }
        //make sure the last pokemon is a default pokemon
        _my_pokemon[_MAX_POKEMON-1] = Pokemon();
        return true;
    }

    return false;
}
