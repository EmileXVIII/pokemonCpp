
#include "../include/Pokemon.h"

typedef unsigned int uint ;

Pokemon::Pokemon(std::string name):xp(0),hpMax(100),hp(100),level(1),type("normal")
{
    (*this).setName(name);
    Attack* newListAttack[] = {0,0,0,0} ;
    listAttacks=newListAttack;
}
Pokemon::Pokemon():xp(0),hpMax(100),hp(100),level(1),type("normal"),name("default")
{
    Attack* newListAttack[] = {0,0,0,0} ;
    listAttacks=newListAttack;
}

void Pokemon::setListAttack(Attack* attack){
    
    int i = 0;

    while(i < 4 && listAttacks[i]==0){
        ++i;
    };

    // secure
    if(i>=4) i = 0;
    
    listAttacks[i] = attack;
    
};

Attack** Pokemon::getListAttack() const{
    Attack* newListAttack[4] ;
    for (size_t i = 0; i < 4; i++)
    {
        *(newListAttack[i])=*(listAttacks[i]);
    }
    return newListAttack;
}

Pokemon::~Pokemon(){
}

std::string Pokemon::getName() const{
    return name;
}
int Pokemon::getHp() const{
    return hp;
}
int Pokemon::getHpMax() const{
    return hpMax;
}
std::string Pokemon::getType() const{
    return type;
}
uint Pokemon::getXp() const{
    return xp;
}
uint Pokemon::getLevel() const{
    return level;
}
void Pokemon::setName(std::string pName){
    name=pName;
};
void Pokemon::setHp(int pHp){
    hp=pHp;
}
void Pokemon::setHpMax(int pHpMax){
    hpMax=pHpMax;
};
void Pokemon::setType(std::string pType){
    type=pType;
}
void Pokemon::setXp(uint pXp){
    xp=pXp;
}
void Pokemon::setLevel(uint pLevel){
    level=pLevel;
};

PokemonStruct Pokemon::toStruct() const{
    return PokemonStruct(name,hp,hpMax,type,xp,level);
}
std::string Pokemon::toString() const {
    PokemonStruct pokemonStruct = (*this).toStruct();
    return x2struct::X::tojson(pokemonStruct);
}