#if !defined(DS_POKE_COMBAT)
#define DS_POKE_COMBAT

#include "Pokemon.h"
#include "Trainer.h"

#include <string>
using namespace std;

class Combat{
    private:
        Trainer* trainer;
        Pokemon* pokemonTrainer;
        Pokemon* pokemonWild;

    public:
        Combat();
        ~Combat();

        Trainer* getTrainer();
        Pokemon* getPokemonTrainer();
        Pokemon* getPokemonWild();

        void setTrainer(Trainer* trainer);
        void setPokemonTrainer(Pokemon* pokemonTrainer1);
        void setPokemonWild(Pokemon* pokemonWild1);

        void toString();
        void displayCombatMenu();
        void swapPokemon();
        void throwPokeball();
        void attack();
};

#endif //!DS_POKE_COMBAT