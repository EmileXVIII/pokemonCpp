#if !defined(DS_POKE_ATTACK)
#define DS_POKE_ATTACK

#include <string>
using namespace std;

class Attack{
    private:
        string name;
        string type;
        int damage;
    public:
        Attack();
        Attack(string pName,string pType, int pDamage);
        ~Attack();

        string getName();
        string getType();
        int getDamage();

        void setName(string pName);
        void setType(string pType);
        void setDamage(int pDamage);

        void toString();
};

#endif // !DS_POKE_ATTACK