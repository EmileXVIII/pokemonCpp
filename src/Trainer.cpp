#include "../include/Trainer.h"

Trainer::Trainer()
{
    (*this).setName( "default" );
    (*this).init();
};

Trainer::Trainer(std::string name)
{
    (*this).setName( name );
    (*this).init();
};

Trainer::~Trainer(){

    // bye all pokemons ..
    int size = pokemonList.size();
    for(int i = size-1; i >= 0; i--){
        delete pokemonList[i];
        pokemonList.pop_back();
    }
};

// Methods

void Trainer::init(){
    pokemonList = vector<Pokemon*>();
    
    // add pokemons for test:
    Pokemon* test1 = new Pokemon("test1");
    Pokemon* test2 = new Pokemon("test2");
    (*this).addPokemon(test1);
    (*this).addPokemon(test2); 
    std::cout << (*(*this).getpokemonList()[0]).getName() << std::endl;

};

void Trainer::addPokemon(Pokemon* _poke){
    pokemonList.push_back(_poke);
};

void Trainer::removePokemon(Pokemon* _poke){
    int size = pokemonList.size();
    vector<Pokemon*> newListPokemon = vector<Pokemon*>();
    for(int i = 0; i < size; i++){
        Pokemon* currentPokemon = pokemonList[i];
        if(currentPokemon != _poke){
            newListPokemon.push_back(currentPokemon);
            pokemonList.pop_back();
        }
        else
        {
            pokemonList.pop_back();
            delete currentPokemon;
        } 
    }
    pokemonList=newListPokemon;
    
};

// getters & setters

string Trainer::getName(){
    return name;
};

void Trainer::setName(string _name){
    name = _name;
};

vector<Pokemon*> Trainer::getpokemonList(){
    return pokemonList;
};
