#include <iostream>
#include "Pokemon.h"

int main(int argc, char *argv[]) {
	std::cout << "Hello Easy C++ project!" << std::endl;
	Pokemon testPokemon = Pokemon("Pikachu");
	std::cout << testPokemon.toString() << std::endl;
}