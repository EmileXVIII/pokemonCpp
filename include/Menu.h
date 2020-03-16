#ifndef DEF_MENU
#define DEF_MENU

#include <iostream>
#include <string>

#include "../include/Pokedex.h"

using namespace std;

class Menu
{
    private:

        string trainer;
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

        string getTrainer();
        void setTrainer(string trainer);

        Pokedex getPokedex();
        void setPokedex(Pokedex pokedex);

};

#endif