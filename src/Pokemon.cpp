
#include "../include/Pokemon.h"
Pokemon::Pokemon(std::string name):xp(0),hpMax(100),hp(100),type("normal")
{
    (*this).setName(name);
}

Pokemon::~Pokemon()
{
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
