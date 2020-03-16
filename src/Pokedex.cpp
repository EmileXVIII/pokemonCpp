#include "../include/Pokedex.h"

#include "../include/Pokemon.h"

Pokedex::Pokedex()
{
    Pokemon* poke = new Pokemon[5];
    (*this).setpokemonDeck( poke );
}

Pokemon* Pokedex::getpokemonDeck(){
    return* pokemonDeck;
};

void Pokedex::setpokemonDeck(Pokemon* _pdeck){
    *pokemonDeck = _pdeck;
}

Pokedex::~Pokedex()
{
}

