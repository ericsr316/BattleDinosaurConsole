/*
Class Dinosaur that represents its atrributes and behaviour.
Dinosaur have and Attack array object where each dinosaur has 4 attacks.
*/


#ifndef DINOSAURIO_H_INCLUDED
#define DINOSAURIO_H_INCLUDED
#include <iostream>
#include "Attack.h"


class Dinosaur{
private:
    int id;
    std::string name;
    int health = 100;


public:
    Dinosaur(){
    };

    Dinosaur (int i, std::string n)
    :id(i),name(n){
}
    Attack attacks[4];

    int getId(){
    return this->id;
    }

    void setId(int i){
        this->id = i;
    }

    int getHealth(){
    return this->health;
    }

    void setHealth(int s){
    this->health = s;
    }
    void setName(std::string n){
    this->name = n;
    }

    std::string getName(){
    return this->name;
    }


    void debug(){
    std::cout<<"id: "<<this->getId()<<" Name: "<<this->getName()<<" Health: "<<this->getHealth()<<"\n";
    for(int i = 0; i<4;i++){
        std::cout<<" Attack:["<<i+1<<"] "<<attacks[i].getName()<<"\n";
    }
    std::cout<<"\n";
    }
};


#endif // DINOSAURIO_H_INCLUDED
