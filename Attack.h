/*
Class Attack to define the attacks how the attack works and how much damage will do.
*/

#ifndef ATAQUE_H_INCLUDED
#define ATAQUE_H_INCLUDED
#include <iostream>

class Attack
{

private:
    int id;
    std::string name;
    int damage;

public:

    Attack()
    {
    };

    Attack(int i,std::string n,int e):
        id(i),name(n),damage(e)
    {
    };

    int getId()
    {
        return this->id;
    }

    void setId(int i)
    {
        this->id = i;
    }

    void setName(std::string n)
    {
        this->name = n;
    }

    std::string getName()
    {
        return this->name;
    }

    void setDamage(int e)
    {
        this->damage = e;
    }

    int getDamage()
    {
        return this->damage;
    }

    void debug()
    {
        std::cout<< "Movement ->"<<" id: "<<this->getId()<<" Name : "<<this->getName()<<" Damage: "<<this->getDamage()<<"\n";


    }

};

#endif // ATAQUE_H_INCLUDED
