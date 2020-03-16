#include "Attack.h"

using namespace std;

Attack::Attack():name("Eclair"),type("electrique"),damage(20){}

Attack::Attack(string pName,string pType, int pDamage){
    (*this).setName (pName);
    (*this).setType (pType);
    (*this).setDamage (pDamage);
}

Attack::~Attack(){}

AttackStruct Attack::toStruct(){
    return AttackStruct(name,type,damage);
}
std::string Attack::toString(){
    AttackStruct pokemonStruct = (*this).toStruct();
    return x2struct::X::tojson(pokemonStruct);
}

void Attack::log(){
    cout <<"Attaque : "<< name <<", qui est de type : "<< type <<", et qui inflige :"<< damage << " de degats" << endl;
}

string Attack::getName(){
    return name;
}

string Attack::getType(){
    return type;
}

int Attack::getDamage(){
    return damage;
}

void Attack::setName(string pName){
    name = pName;
}

void Attack::setType(string pType){
    type = pType;
}

void Attack::setDamage(int pDamage){
    damage = pDamage;
}