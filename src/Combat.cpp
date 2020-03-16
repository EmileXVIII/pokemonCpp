#include <iostream>
#include "Pokemon.h"
#include "Combat.h"
#include "Attack.h"
#include <string>

using namespace std;

Combat::Combat() : trainer("Sacha"){
    pokemonTrainer = new Pokemon("Pikachu");
    pokemonWild = new Pokemon("Carapuce");

    toString();

    displayCombatMenu();
}

Combat::~Combat(){
    delete pokemonTrainer;
    delete pokemonWild;
}

void Combat::toString(){
    cout << "Attention, un "<<pokemonWild->getName() <<" apparait !";
    cout << "\n";
    cout << "Trainer : " << trainer << " envoie au combat "<<  pokemonTrainer->getName();;
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

void Combat::setPokemonTrainer(Pokemon* _pokemonTrainer){
    pokemonTrainer = _pokemonTrainer;
}

void Combat::setPokemonWild(Pokemon* _pokemonWild){
    pokemonWild = _pokemonWild;
}

void Combat::displayCombatMenu() {
    cout << "\n";
    cout << " -=--=--=--=- MENU -=--=--=--=-" << "\n";
    cout << " (1) . Attack " << "\n";
    cout << " (2) . Swap Pokemon " << "\n";
    cout << " (3) . Throw Pokeball " << "\n";
    cout << " (4) . Run away " << "\n";
    cout << " -=--=--=--=--=--=--=--=--=--=-" << "\n";

    int choice;
    cout << " >> ";

    cin >> choice;
    cout << "\n";
  
    // check if input is valid
    
    if(choice >= 1 && choice <= 4){

        if(choice == 1)
            attack();
        if(choice == 2)
            swapPokemon();
        if(choice == 3)
            throwPokeball();
        if(choice == 4)
            runAway();    

    }else{
        cout << "\n Please select a number in the list. \n";
        Combat::displayCombatMenu();
    }
}

void Combat::swapPokemon(){

}

void Combat::throwPokeball(){
    
}


void Combat::attack(){
    // int const arraySize {4} ;
	// string ListAttack[arraySize];
    // switch (ListAttack){
    //     case ListAttack[0]:
    //         Pokemon.hp = Pokemon.hp - Attack.damage;
    //     case ListAttack[1]:
    //     case ListAttack[2]:
    //     case ListAttack[3]:
    //     default:
    // }
}

void Combat::runAway(){

}