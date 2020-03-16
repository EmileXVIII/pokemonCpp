#ifndef DEF_MENU
#define DEF_MENU

#include <iostream>
#include <string>
#include <vector>

#include "../include/Pokedex.h"
#include "../include/Trainer.h"

using namespace std;

class Menu
{
    private:

        Trainer trainer;
        Pokedex pokedex;

    public:

	    Menu();
        ~Menu();

        string toString();

        // methods

        void displayMenu();
        void createTrainer();
        void createPokedex();

        void displayPokemonList();
        void managePokemon();
        void searchCombat();
        void healPokemons();

        // getters & setters

        Trainer getTrainer();
        void setTrainer(Trainer trainer);

        Pokedex getPokedex();
        void setPokedex(Pokedex pokedex);

};

#endif