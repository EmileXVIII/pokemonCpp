#include <iostream>
#include "Pokemon.h"
#include "Combat.h"
#include "Attack.h"
#include <string>

using namespace std;

Combat::Combat() : trainer("Sacha"){
    pokemonTrainer = new Pokemon("Pikachu");
    pokemonWild = new Pokemon("Carapuce");
}

Combat::~Combat(){
    delete pokemonTrainer;
    delete pokemonWild;
}

void Combat::toString(){
    cout << "Attention, un :"<<pokemonWild -> toString() <<" apparaît !";
    cout << "\n";
    cout << " Trainer :" << trainer << " envoie au combat : "<<  pokemonTrainer->toString();;
    cout << "\n";
}

string Combat::getTrainer(){
    return trainer;
}

Pokemon Combat::getPokemonTrainer(){
    return *pokemonTrainer;
}

Pokemon Combat::getPokemonWild(){
    return *pokemonWild;
}

void Combat::setTrainer(string pTrainer){
    trainer = pTrainer;
}

void Combat::setPokemonTrainer(Pokemon* pokemonTrainer1){
    pokemonTrainer = pokemonTrainer1;
}

void Combat::setPokemonWild(Pokemon* pokemonWild1){
    pokemonWild = pokemonWild1;
}

void Combat::swapPokemon(){

}

void Combat::throwPokeball(){
    
}

/*
void Combat::Attack(){
    int const arraySize {4} ;
	string ListAttack[arraySize];
    switch (ListAttack){
        case ListAttack[0]:
            Pokemon.hp = Pokemon.hp - Attack.damage;
        case ListAttack[1]:
        case ListAttack[2]:
        case ListAttack[3]:
        default:
    }
}

void Combat::RunAway(){

}*/