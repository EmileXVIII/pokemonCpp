#ifndef DEF_MENU
#define DEF_MENU

#include <iostream>
#include <string>

using namespace std;

class Menu
{
    private:

        string trainer;
    
    public:

	    Menu();
        ~Menu();

        string toString();

        // methods

        void displayMenu();
        void createTrainer();

        void displayPokemonList();
        void managePokemon();
        void searchCombat();
        void healPokemons();

        // getters & setters

        string getTrainer();
        void setTrainer(string trainer);

};

#endif