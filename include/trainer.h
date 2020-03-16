#ifndef DEF_TRAINER
#define DEF_TRAINER

#include <iostream>
#include <string>

#include "../include/Pokemon.h"

using namespace std;

class Trainer
{
    private:

        string name;
        Pokemon* pokemonList[5];
    
    public:

        int pokemonListPosition;

	    Trainer();
        Trainer(std::string name);
        ~Trainer();

        // Method 
        void addPokemon(Pokemon* pokemon);
        void removePokemon(Pokemon* pokemon);
        void init();

        // getters & setters

        string getName();
        void setName(string name);

        Pokemon* getpokemonList();

};

#endif