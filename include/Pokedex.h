#ifndef DEF_POKEDEX
    #define DEF_POKEDEX

    #include <iostream>
    #include <vector>
    #include "../include/Pokemon.h"

    using namespace std;

    class Pokedex
    {
        private:

            vector<Pokemon*> pokemonDeck;
        
        public:

            Pokedex();
            ~Pokedex();

            // getters & setters

            vector<Pokemon*> getpokemonDeck();
            void setpokemonDeck(vector<Pokemon*> pokemonDeck);

    };
#endif