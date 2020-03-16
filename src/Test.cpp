#include "../include/Test.h"
#include <assert.h>

Test::Test(/* args */)
{
	Pokemon newPokemon = Pokemon("Pikachu");
	assert(newPokemon.toString() == "{\"name\":\"Pikachu\",\"hp\":100,\"hpMax\":100,\"type\":\"normal\",\"xp\":0,\"level\":1}");
	Attack newAttack = Attack();
    assert(newAttack.toString() == "{\"name\":\"Eclair\",\"type\":\"electrique\",\"damage\":20}");
}

Test::~Test()
{
}