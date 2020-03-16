#ifndef DEF_POKEDEX
#define DEF_POKEDEX

#include <iostream>
#include <string>

#include "../include/Pokemon.h"

using namespace std;

class Pokedex
{
    private:

        Pokemon* pokemonDeck[1000];
    
    public:

	    Pokedex();
        ~Pokedex();

        // getters & setters

        Pokemon* getpokemonDeck();
        void setpokemonDeck(Pokemon* pokemonDeck);

};

#endif