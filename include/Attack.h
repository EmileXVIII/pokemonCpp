#if !defined(DS_POKE_ATTACK)
    #define DS_POKE_ATTACK
    #if defined(__WIN32__)
        #ifndef WINDOWS
            #define WINDOWS
        #endif
    #endif
    #include "../lib/x2struct-master/x2struct.hpp"
    #include <iostream>
    using namespace std;
    struct AttackStruct{
        std::string name;
        std::string type;
        int damage;
        AttackStruct(std::string name ,std::string type,int damage):name(name),type(type),damage(damage){};
        XTOSTRUCT(O(name,type,damage));
    };
    class Attack{
        private:
            std::string name;
            std::string type;
            int damage;
        public:
            Attack();
            Attack(string pName,string pType, int pDamage);
            ~Attack();

            std::string getName();
            std::string getType();
            int getDamage();

            void setName(string pName);
            void setType(string pType);
            void setDamage(int pDamage);

            void log();
            AttackStruct toStruct();
            std::string toString();
    };

#endif // !DS_POKE_ATTACK