#include "../include/Trainer.h"

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
    for(int i = size-1; i >= 0; i--){
        delete pokemonList[i];
        pokemonList.pop_back();
        pokemonListPosition--;
    }
};

// Methods

void Trainer::init(){
    pokemonList = vector<Pokemon*>();
    pokemonListPosition = 0;
    
    // add pokemons for test:
    Pokemon test1 = Pokemon();
    test1.setName("test1");
    Pokemon test2 = Pokemon();
    test2.setName("test2");
    std::cout << test1.getName()<< std::endl;

    (*this).addPokemon(&test1);
    (*this).addPokemon(&test2); 
    std::cout << (*(*this).getpokemonList()[1]).getName() << std::endl;

};

void Trainer::addPokemon(Pokemon* _poke){
    pokemonList.push_back(_poke);
};

void Trainer::removePokemon(Pokemon* _poke){
    int size = pokemonListPosition;
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
