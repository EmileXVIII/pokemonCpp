#ifndef DEF_TRAINER
#define DEF_TRAINER

#include <iostream>
#include <string>
#include <vector>
#include "../include/Pokemon.h"

using namespace std;

class Trainer
{
    private:

        string name;
        vector<Pokemon*> pokemonList;
    
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

        vector<Pokemon*> getpokemonList();

};

#endif