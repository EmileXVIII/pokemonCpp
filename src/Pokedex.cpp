#include "../include/Pokedex.h"

#include "../include/Pokemon.h"

Pokedex::Pokedex()
{
    vector<Pokemon*> poke = vector<Pokemon*>();
    (*this).setpokemonDeck( poke );
}

vector<Pokemon*> Pokedex::getpokemonDeck(){
    return pokemonDeck;
};

void Pokedex::setpokemonDeck(vector<Pokemon*> _pdeck){
    pokemonDeck = _pdeck;
}

Pokedex::~Pokedex()
{
}

