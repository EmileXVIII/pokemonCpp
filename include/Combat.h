#if !defined(DS_POKE_COMBAT)
#define DS_POKE_COMBAT

#include "Pokemon.h"
#include <string>
using namespace std;

class Combat{
    private:
        string trainer;
        Pokemon* pokemonTrainer;
        Pokemon* pokemonWild;

    public:
        Combat();
        ~Combat();

        string getTrainer();
        Pokemon getPokemonTrainer();
        Pokemon getPokemonWild();

        void setTrainer(string pTrainer);
        void setPokemonTrainer(Pokemon* pokemonTrainer1);
        void setPokemonWild(Pokemon* pokemonWild1);

        void toString();

        void swapPokemon();
        void throwPokeball();
        void Attack();
        void RunAway();
};

#endif //!DS_POKE_COMBAT