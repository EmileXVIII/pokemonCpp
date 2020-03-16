
#include "../include/Pokemon.h"
Pokemon::Pokemon(std::string name):xp(0),hpMax(100),hp(100),type("normal")
{
    (*this).setName(name);
}

Pokemon::~Pokemon()
{
}