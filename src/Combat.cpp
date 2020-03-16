#include <iostream>
#include "Pokemon.h"
#include "Combat.h"
#include "Attack.h"
#include <string>
#include <stdlib.h>     /* srand, rand */

using namespace std;

Combat::Combat() : trainer(new Trainer("Sacha")){
    pokemonTrainer = new Pokemon("Pikachu");
    pokemonWild = new Pokemon("Carapuce");

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
}

Combat::~Combat(){
    delete pokemonTrainer;
    delete pokemonWild;
}

void Combat::toString(){
    cout << "Attention, un "<<pokemonWild->getName() <<" sauvage apparait !";
    cout << "\n";
    cout << "Trainer : " << (*trainer).getName() << " envoie au combat "<<  pokemonTrainer->getName();;
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

void Combat::setPokemonTrainer(Pokemon* _pokemonTrainer){
    pokemonTrainer = _pokemonTrainer;
}

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
}

void Combat::swapPokemon(){

}

void Combat::throwPokeball(){

    int roll;
    /* initialize random seed: */
    srand (time(NULL));

    /* generate secret number between 1 and 10: */
    roll = rand() % 100 + 1;

    if (roll >= 30) {
        cout << "\n You catch " << pokemonWild->getName() << "\n";
    } else {
        cout << "\n Damn ! " << pokemonWild->getName() << " escaped !" <<"\n";        
    }
}


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
