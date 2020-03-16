#include <iostream>
#include "Attack.h"
#include <string>

using namespace std;

Attack::Attack():name("Eclair"),type("electrique"),damage(20){}

Attack::Attack(string pName,string pType, int pDamage){
    (*this).setName (pName);
    (*this).setType (pType);
    (*this).setDamage (pDamage);
}

Attack::~Attack(){}

void Attack::toString(){
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