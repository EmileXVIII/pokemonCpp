
#include "../include/Menu.h"
#include "../include/Pokemon.h"
#include "../include/Pokedex.h"
#include "../include/Combat.h"
#include "../include/Trainer.h"

#include <iostream>
#include <string>

using namespace std;

// constructeur

Menu::Menu() {

    (*this).createTrainer();
    (*this).createPokedex();
    (*this).displayMenu();

}

// methods

void Menu::createTrainer(){

    string trainerName;

    cout << "Trainer name : ";
    cin >> trainerName ;
    cout << "\n";

    trainer = Trainer(trainerName);

    // clear input
    cin.ignore();

}
void Menu::createPokedex(){
    pokedex.setpokemonDeck(vector<Pokemon*>()); 
}

void Menu::displayMenu(){
    cout << "\n";
    cout << " -=--=--=--=- MENU -=--=--=--=-" << "\n";
    cout << " (1) . View Your Pokemon List " << "\n";
    cout << " (2) . Manage Your Pokemons " << "\n";
    cout << " (3) . Search A Combat " << "\n";
    cout << " (4) . Heal Your Pokemons " << "\n";
    cout << " (0) . Exit " << "\n";
    cout << " -=--=--=--=--=--=--=--=--=--=-" << "\n";

    int choice;
    cout << " >> ";

    cin >> choice;
    cout << "\n";
  
    // check if input is valid
    
    if(choice >= 1 && choice <= 4){

        if(choice == 1)
            (*this).displayPokemonList();
        if(choice == 2)
            (*this).managePokemon();
        if(choice == 3)
            (*this).searchCombat();
        if(choice == 4)
            (*this).healPokemons();    

        cin.ignore();
        (*this).displayMenu();

    }

    cin.ignore();

}
   
void Menu::displayPokemonList(){

    cout << "\n";
    cout << " - -- -- - POKEMON LIST - -- -- -" << "\n";
    
    for(int i = 0; i < trainer.getpokemonList().size(); i++){   
        string pokemonName = (*((trainer.getpokemonList())[i])).getName();
        cout << " > " << pokemonName << "\n";
    }
    cout << " - -- -- -- -- -- -- -- -- -- -" << "\n";

}
void Menu::managePokemon(){

}
void Menu::searchCombat(){
    Combat *combat = new Combat();
}
void Menu::healPokemons(){
    
    // todo 
    
    cout << "\n";
    cout << " - -- -- - HEAL POKEMON - -- -- -" << "\n";
    
    string pokemonName = "Pokemon Name";
    int num = 1;
    cout << " ("<< num <<") > " << pokemonName << "\n";

    cout << " - -- -- -- -- -- -- -- -- -- -" << "\n";
    
}
 
// getters & setters

Trainer Menu::getTrainer(){
    return trainer;
};
void Menu::setTrainer(Trainer _trainer){
    trainer = _trainer;
}

// ++
// Pokedex Menu::getPokedex(){
//     return pokedex;
// };
// void Menu::setPokedex(Pokedex _pokedex){
//     pokedex = _pokedex;
// }

Menu::~Menu() {}