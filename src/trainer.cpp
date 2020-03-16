#include "../include/trainer.h"


Trainer::Trainer()
{
    (*this).setName( "default" );
    init();
};

Trainer::Trainer(std::string name)
{
    (*this).setName( name );
    init();
};

Trainer::~Trainer(){

    // bye all pokemons ..
    int size = pokemonListPosition;
    for(int i = 0; i < size; i++){
        Pokemon* currentPokemon = pokemonList[i];
        delete pokemonList[i];
        pokemonListPosition--;
    }

};

// Methods

void Trainer::init(){
    
    pokemonListPosition = 0;
    
    // add pokemons for test:
    Pokemon test1 = Pokemon();
    test1.setName("test1");
    Pokemon test2 = Pokemon();
    test2.setName("test2");

    (*this).addPokemon(&test1);
    (*this).addPokemon(&test2); 

};

void Trainer::addPokemon(Pokemon* _poke){
    pokemonList[pokemonListPosition] = _poke;
    pokemonListPosition++;
};

void Trainer::removePokemon(Pokemon* _poke){
    int size = pokemonListPosition;
    for(int i = 0; i < size; i++){
        Pokemon* currentPokemon = pokemonList[i];
        if(currentPokemon == _poke){
            delete pokemonList[i];
            pokemonListPosition--;
        }
    }
    
};

// getters & setters

string Trainer::getName(){
    return name;
};

void Trainer::setName(string _name){
    name = _name;
};

Pokemon* Trainer::getpokemonList(){
    return* pokemonList;
};
