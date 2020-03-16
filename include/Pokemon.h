#if !defined(DS_POKE_POKEMON)
#define DS_POKE_POKEMON
#include <iostream>
#include "../lib/x2struct-master/x2struct.hpp"
struct PokemonStruct {
    std::string name;
    int hp;
    int hpMax;
    std::string type;
    uint xp;
    uint level;
    PokemonStruct(std::string name,int hp,int hpMax,std::string type,uint xp,uint level):name(name),hp(hp),hpMax(hpMax),type(type),xp(xp),level(level){};
    XTOSTRUCT(O(name,hp,hpMax,type,xp,level));
};
class Pokemon
{
private:
    std::string name;
    int hp;
    int hpMax;
    std::string type;
    uint xp;
    uint level;
public:
    Pokemon(std::string name);
    ~Pokemon();
    std::string getName() const;
    int getHp() const;
    int getHpMax() const;
    std::string getType() const;
    uint getXp() const;
    uint getLevel() const;
    void setName(std::string name);
    void setHp(int hp);
    void setHpMax(int hp);
    void setType(std::string type);
    void setXp(uint xp);
    void setLevel(uint level);
    PokemonStruct toStruct() const;
    std::string toString() const;
};

#endif // DS_POKE_POKEMON

