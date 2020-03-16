#include "../include/pokedex.h"
#include "../include/Pokemon.h"

Pokedex::Pokedex()
{
    Pokemon* poke = new Pokemon[1000];
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

