
#include "../include/Menu.h"
#include "../include/pokedex.h"
#include <iostream>
#include <string>

using namespace std;

// constructeur

Menu::Menu() {

    Menu::createTrainer();
    Menu::createPokedex();
    Menu::displayMenu();

}

// methods

void Menu::createTrainer(){

    string trainer;

    cout << "Trainer name : ";
    cin >> trainer ;
    cout << "\n";

    (*this).setTrainer(trainer);  

    cin.ignore();

}
void Menu::createPokedex(){
    (*this).pokedex.setpokemonDeck(new Pokemon[1000]); 
}

void Menu::displayMenu(){
    cout << "\n";
    cout << " -=--=--=--=- MENU -=--=--=--=-" << "\n";
    cout << " (1) . View Your Pokemon List " << "\n";
    cout << " (2) . Manage Your Pokemons " << "\n";
    cout << " (3) . Shearch A Combat " << "\n";
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
            displayPokemonList();
        if(choice == 2)
            managePokemon();
        if(choice == 3)
            searchCombat();
        if(choice == 4)
            healPokemons();    

        cin.ignore();
        Menu::displayMenu();

    }

    cin.ignore();

}
   
void Menu::displayPokemonList(){

    cout << "\n";
    cout << " - -- -- - POKEMON LIST - -- -- -" << "\n";
    
    string pokemonName = "Pokemon Name";
    cout << " > " << pokemonName << "\n";

    cout << " - -- -- -- -- -- -- -- -- -- -" << "\n";

}
void Menu::managePokemon(){

}
void Menu::searchCombat(){

}
void Menu::healPokemons(){
    
    cout << "\n";
    cout << " - -- -- - POKEMON LIST - -- -- -" << "\n";
    
    string pokemonName = "Pokemon Name";
    int num = 1;
    cout << " ("<< num <<") > " << pokemonName << "\n";

    cout << " - -- -- -- -- -- -- -- -- -- -" << "\n";
    
}
 
// getters & setters

string Menu::getTrainer(){
    return trainer;
};
void Menu::setTrainer(string _trainer){
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