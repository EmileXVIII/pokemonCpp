#if !defined(DS_POKE_POKEMON)
#define DS_POKE_POKEMON

#include <iostream>
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
    std::string getHp() const;
    std::string getHpMax() const;
    std::string getType() const;
    std::string getName() const;
    std::string getXp() const;
    std::string getLevel() const;
    void setName();
    void setHp();
    void setHpMax();
    void setType();
    void setName();
    void setXp();
    void setLevel();
};

#endif // DS_POKE_POKEMON

