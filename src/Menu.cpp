
#include "../include/Menu.h"

#include <iostream>
#include <string>

using namespace std;

// constructeur

Menu::Menu() {

    Menu::createTrainer();
    Menu::displayMenu();

}

// methods

void Menu::createTrainer(){

    string trainer;

    cout << "Trainer name : ";
    cin >> trainer ;
    cout << "\n";

    (*this).setTrainer(trainer);  

}

void Menu::displayMenu(){

    cout << "\n";
    cout << " -=--=--=--=- MENU -=--=--=--=-" << "\n";
    cout << " (1) . View Your Pokemon List " << "\n";
    cout << " (2) . Manage Your Pokemons " << "\n";
    cout << " (3) . Shearch A Combat " << "\n";
    cout << " (4) . Heal Your Pokemons " << "\n";
    cout << " -=--=--=--=--=--=--=--=--=--=-" << "\n";

    int choice;
    cout << " >> ";

    cin >> choice;
    cout << "\n";
  
    // check if input is valid
    
    if(choice >= 1 && choice <= 4){

        if(choice == 1)
            displayPokemonList();
        if(choice == 2)
            managePokemon();
        if(choice == 3)
            searchCombat();
        if(choice == 4)
            healPokemons();    

    }else{
        cout << "\n Please select a number in the list. \n";
    }

    Menu::displayMenu();

}
   
void Menu::displayPokemonList(){

}
void Menu::managePokemon(){

}
void Menu::searchCombat(){

}
void Menu::healPokemons(){
    
}
 
// getters & setters

string Menu::getTrainer(){
    return trainer;
};
void Menu::setTrainer(string _trainer){
    trainer = _trainer;
}

Menu::~Menu() {}