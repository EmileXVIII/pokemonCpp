#include <iostream>
#include "Pokemon.h"
#include "Combat.h"
#include "Attack.h"
#include <string>

using namespace std;

Combat::Combat() : trainer(new Trainer("Sacha")){
    pokemonTrainer = new Pokemon("Pikachu");
    pokemonWild = new Pokemon("Carapuce");
<<<<<<< Updated upstream
=======

    (*(*this).pokemonTrainer).setListAttack(
        new Attack("Thunder", "Electrique", 8)
    );
    (*(*this).pokemonTrainer).setListAttack(
        new Attack("Attaque2", "Electrique", 8)
    );
    (*(*this).pokemonTrainer).setListAttack(
        new Attack("Attaque3", "TEST", 7)
    );
    (*(*this).pokemonTrainer).setListAttack(
        new Attack("Attaque4", "CHEAT", 150)
    );


    (*(*this).pokemonTrainer).setListAttack(
        new Attack("Attaque1", "Water", 8)
    );
    (*(*this).pokemonTrainer).setListAttack(
        new Attack("Attaque2", "Water", 8)
    );
    (*(*this).pokemonTrainer).setListAttack(
        new Attack("Attaque3", "Water", 7)
    );
    (*(*this).pokemonTrainer).setListAttack(
        new Attack("Attaque4", "Water", 150)
    );

    toString();

    displayCombatMenu();
>>>>>>> Stashed changes
}

Combat::~Combat(){
    delete pokemonTrainer;
    delete pokemonWild;
}

void Combat::toString(){
    cout << "Attention, un :"<<pokemonWild -> toString() <<" apparaît !";
    cout << "\n";
<<<<<<< Updated upstream
    cout << " Trainer :" << trainer << " envoie au combat : "<<  pokemonTrainer->toString();;
=======
    cout << "Trainer : " << (*trainer).getName() << " envoie au combat "<<  pokemonTrainer->getName();;
>>>>>>> Stashed changes
    cout << "\n";
}

Trainer* Combat::getTrainer(){
    return trainer;
}

Pokemon* Combat::getPokemonTrainer(){
    return pokemonTrainer;
}

Pokemon* Combat::getPokemonWild(){
    return pokemonWild;
}

void Combat::setTrainer(Trainer* pTrainer){
    trainer = pTrainer;
}

void Combat::setPokemonTrainer(Pokemon* pokemonTrainer1){
    pokemonTrainer = pokemonTrainer1;
}

<<<<<<< Updated upstream
void Combat::setPokemonWild(Pokemon* pokemonWild1){
    pokemonWild = pokemonWild1;
=======
void Combat::setPokemonWild(Pokemon* _pokemonWild){
    pokemonWild = _pokemonWild;
}

void Combat::displayCombatMenu() {
    cout << "\n";
    cout << " - -- -- - FIGHTING POKEMON - -- -- -" << "\n";
    cout << " (1) . Attack " << "\n";
    cout << " (2) . Swap Pokemon " << "\n";
    cout << " (3) . Throw Pokeball " << "\n";
    cout << " (4) . Run away " << "\n";
    cout << " - -- -- -- -- -- -- -- -- -- -- -- -" << "\n";

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

        if(choice != 4)
            Combat::displayCombatMenu();    

    }else{
        cout << "\n Please select a number in the list. \n";
        Combat::displayCombatMenu();
    }
>>>>>>> Stashed changes
}

void Combat::swapPokemon(){

}

void Combat::throwPokeball(){
    
}

<<<<<<< Updated upstream
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
=======

void Combat::attack(){
    
    cout << "\n";
    cout << " - -- -- - ATTACK LIST - -- -- -" << "\n";
    for(int i = 0; i < 4; i++){       
        Attack* attack = ( *(*this).getPokemonTrainer() ).getListAttack()[i]; 
        if( attack != NULL )
            cout << " (" << (i+1) << ") . "<< ((*attack).getName()) <<" " << "\n";
    }
    cout << " - -- -- -- -- -- -- -- -- -- -" << "\n";

    int choice;
    cout << " >> ";

    cin >> choice;
    cout << "\n";
  
    // check if input is valid
    
    if(choice >= 1 && choice <= 4){

        Attack* attack = ( *(*this).getPokemonTrainer() ).getListAttack()[(choice-1)];

        if( attack != NULL ){

            // make damage 

            int damage = (*attack).getDamage();

            (*(*this).getPokemonWild()).setHp(
              (*(*this).getPokemonWild()).getHp() - damage
            );

            cout << " Pokemon "<< (*(*this).getPokemonWild()).getName() <<" lose ";
            cout << damage <<" life.\n";
            cout << "The pokemon have now " << (*(*this).getPokemonWild()).getHp() << " HP.";

        }

    }

    int attackOpponent_Random;
    /* initialize random seed: */
    srand (time(NULL));

    /* generate secret number between 1 and 10: */
    attackOpponent_Random = rand() % 4 + 1;

    Attack* attackOpponent = ( *getPokemonWild() ).getListAttack()[(attackOpponent_Random)];
    
    // make damage 

    int damageOpponent = (*attackOpponent).getDamage();

    (*(*this).getPokemonTrainer()).setHp(
        (*(*this).getPokemonTrainer()).getHp() - damageOpponent
    );

    cout << " Pokemon "<< (*(*this).getPokemonTrainer()).getName() <<" lose ";
    cout << damageOpponent <<" life.\n";
    cout << "The pokemon have now " << (*(*this).getPokemonTrainer()).getHp() << " HP.";

}
>>>>>>> Stashed changes
