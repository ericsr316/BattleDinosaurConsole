/*
File where the game basically where the game is build and we use the class Dinosaur and Attack. Furthermore, I use
vector, time libraries. Vector is used to build a dinamyc array of kind "Dinosaur". I did the same with the attacks.
*/

#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include "Dinosaur.h"
#include "Attack.h"

void menu();
void game();
int attacks(int atq,bool ai);

std::vector<Dinosaur> dinosaurs;
std::vector<Attack> Attacks;
std::string nickname;

int id;
int nid = 0;
/*
we push on the stack with objetcts of kind "Dinosaur"
*/
void setDinosaurs()
{
    dinosaurs.push_back(Dinosaur(0,"Diplodocus"));
    dinosaurs.push_back(Dinosaur(1,"pachycephalosaurus"));
    dinosaurs.push_back(Dinosaur(2,"Brachiosaurus"));
    dinosaurs.push_back(Dinosaur(3,"Galliminus"));
    dinosaurs.push_back(Dinosaur(4,"Iguanodon"));
    dinosaurs.push_back(Dinosaur(5,"Triceratops"));
    dinosaurs.push_back(Dinosaur(6,"Dilophosaurus"));
    dinosaurs.push_back(Dinosaur(7,"Deinonichus"));
    dinosaurs.push_back(Dinosaur(8,"Raptor"));
    dinosaurs.push_back(Dinosaur(9,"Allosaurus"));
    dinosaurs.push_back(Dinosaur(10,"Tiranosaurus Rex"));
    dinosaurs.push_back(Dinosaur(11,"Spinosaurus"));
    dinosaurs.push_back(Dinosaur(12,"Carnotaurus"));
    dinosaurs.push_back(Dinosaur(13,"Baryonix"));
}

/*
A Stack with objetcts of kind "Attack"
*/
void setAttacks()
{
    Attacks.push_back(Attack(0,"header",5));
    Attacks.push_back(Attack(1,"claw",5));
    Attacks.push_back(Attack(2,"charge",5));
    Attacks.push_back(Attack(3,"stomp",5));
    Attacks.push_back(Attack(4,"lash",5));
    Attacks.push_back(Attack(5,"bite",5));
    Attacks.push_back(Attack(6,"horns",5));
    Attacks.push_back(Attack(7,"raptor claw",10));
    Attacks.push_back(Attack(8,"destructive jaw",10));
    Attacks.push_back(Attack(9,"tear",10));
    Attacks.push_back(Attack(10,"stomp tons",10));
    Attacks.push_back(Attack(11,"bomb helmet",10));
    Attacks.push_back(Attack(12,"galliminus kicks",10));
    Attacks.push_back(Attack(13,"slap",10));
    Attacks.push_back(Attack(14,"steel claw",10));
    Attacks.push_back(Attack(15,"trhrust",10));

}

/*
Each dinosaur has an array of kind Attack where there are four elements
so each dinosaur has four attacks so the program pick by the id of attack from the
Stack Attacks and bring to the array.
*/
void assignAttacks()
{
    dinosaurs.at(0).attacks[0] = Attacks.at(2);
    dinosaurs.at(0).attacks[1] = Attacks.at(4);
    dinosaurs.at(0).attacks[2] = Attacks.at(3);
    dinosaurs.at(0).attacks[3] = Attacks.at(10);

    dinosaurs.at(1).attacks[0] = Attacks.at(5);
    dinosaurs.at(1).attacks[1] = Attacks.at(0);
    dinosaurs.at(1).attacks[2] = Attacks.at(3);
    dinosaurs.at(1).attacks[3] = Attacks.at(11);

    dinosaurs.at(2).attacks[0] = Attacks.at(2);
    dinosaurs.at(2).attacks[1] = Attacks.at(5);
    dinosaurs.at(2).attacks[2] = Attacks.at(3);
    dinosaurs.at(2).attacks[3] = Attacks.at(10);

    dinosaurs.at(3).attacks[0] = Attacks.at(2);
    dinosaurs.at(3).attacks[1] = Attacks.at(4);
    dinosaurs.at(3).attacks[2] = Attacks.at(3);
    dinosaurs.at(3).attacks[3] = Attacks.at(12);

    dinosaurs.at(4).attacks[0] = Attacks.at(1);
    dinosaurs.at(4).attacks[1] = Attacks.at(2);
    dinosaurs.at(4).attacks[2] = Attacks.at(5);
    dinosaurs.at(4).attacks[3] = Attacks.at(14);

    dinosaurs.at(5).attacks[0] = Attacks.at(0);
    dinosaurs.at(5).attacks[1] = Attacks.at(2);
    dinosaurs.at(5).attacks[2] = Attacks.at(6);
    dinosaurs.at(5).attacks[3] = Attacks.at(15);

    dinosaurs.at(6).attacks[0] = Attacks.at(1);
    dinosaurs.at(6).attacks[1] = Attacks.at(2);
    dinosaurs.at(6).attacks[2] = Attacks.at(5);
    dinosaurs.at(6).attacks[3] = Attacks.at(14);

    dinosaurs.at(7).attacks[0] = Attacks.at(1);
    dinosaurs.at(7).attacks[1] = Attacks.at(2);
    dinosaurs.at(7).attacks[2] = Attacks.at(5);
    dinosaurs.at(7).attacks[3] = Attacks.at(7);

    dinosaurs.at(8).attacks[0] = Attacks.at(1);
    dinosaurs.at(8).attacks[1] = Attacks.at(5);
    dinosaurs.at(8).attacks[2] = Attacks.at(2);
    dinosaurs.at(8).attacks[3] = Attacks.at(9);

    dinosaurs.at(9).attacks[0] = Attacks.at(2);
    dinosaurs.at(9).attacks[1] = Attacks.at(3);
    dinosaurs.at(9).attacks[2] = Attacks.at(5);
    dinosaurs.at(9).attacks[3] = Attacks.at(8);

    dinosaurs.at(10).attacks[0] = Attacks.at(0);
    dinosaurs.at(10).attacks[1] = Attacks.at(5);
    dinosaurs.at(10).attacks[2] = Attacks.at(3);
    dinosaurs.at(10).attacks[3] = Attacks.at(8);

    dinosaurs.at(11).attacks[0] = Attacks.at(2);
    dinosaurs.at(11).attacks[1] = Attacks.at(5);
    dinosaurs.at(11).attacks[2] = Attacks.at(4);
    dinosaurs.at(11).attacks[3] = Attacks.at(8);

    dinosaurs.at(12).attacks[0] = Attacks.at(2);
    dinosaurs.at(12).attacks[1] = Attacks.at(3);
    dinosaurs.at(12).attacks[2] = Attacks.at(5);
    dinosaurs.at(12).attacks[3] = Attacks.at(8);

    dinosaurs.at(13).attacks[0] = Attacks.at(2);
    dinosaurs.at(13).attacks[1] = Attacks.at(5);
    dinosaurs.at(13).attacks[2] = Attacks.at(4);
    dinosaurs.at(13).attacks[3] = Attacks.at(8);

}


/*
The only one method that will be in the Main Class
*/
void start()
{

    setDinosaurs();
    setAttacks();
    assignAttacks();
    menu();
}

/*
Print the full Stack of kind Dinosaur
*/
void showDinosaurs()
{
    for(int i = 0; i < dinosaurs.size(); i++)
    {
        std::cout<<dinosaurs.at(i).getId()<<" "<<dinosaurs.at(i).getName()<<"\n";
    }
    std::cout<<"\n";
}

/*
Find the dinosaur by the ID if it exists then "found" will be true so
the function findDinosaur will return true.

If it doesn't do then it will return false
*/

bool findDinosaur(int d)
{
    bool found = false;
    for(int i = 0; i < dinosaurs.size(); i++)
    {
        if(d == dinosaurs.at(i).getId())
        {
            std::cout<<dinosaurs.at(i).getName()<<" has been found!\n";
            id = d;
            found = true;
            break;
        }
        else
        {
            found = false;
        }
    }
    if(!found)
    {
        std::cout<<"That dinosaur was not found\n";
    }

    return found;
}



void setDinosaurUser()
{
    int d;
    char op;
    bool retry = false;
    do
    {
        std::cout<<"type its number and press enter\n\n";
        std::cin>>d;
        if(findDinosaur(d))
        {
            std::cout<<"This is ur dino fighter: ";
            std::cout<<dinosaurs.at(d).getName()<<"\n";
            std::cout<<"Are u sure?\n";
            std::cout<<"press Y for yes or N for no\n";
            std::cin>>op;
            if(op == 'y' || op == 'Y')
            {
                id = d;
                retry = false;
                std::cout<<"ur dino figther is: "<<dinosaurs.at(id).getName()<<"\n";
            }

            else
            {
                retry = true;
            }
        }
    }
    while(retry==true);
    game();
}



void menu()
{
    int did = 0;
    int opc = 0;
    std::cout<<"||==========================================||\n";
    std::cout<<"||                                          ||\n";
    std::cout<<"||       Battle Dinosaur Console!!          ||\n";
    std::cout<<"||                                          ||\n";
    std::cout<<"||==========================================||\n";
    std::cout<<"Type ur name user: ";
    std::cin>>nickname;
    std::cout<<"Welcome "<<nickname<<"\n";
    std::cout<<"Choose ur dinosaur\n";
    showDinosaurs();
    setDinosaurUser();
}


void game()
{
    int atqp = 0;    //moveset id
    int damage = 0;  //damage per attack
    char op;      //option if you would like continue with another fight  Y/N (Yes or No)
    bool nextFight = true; //var to validate if the player wish play a new fight
    system("cls");
    nid = rand() % 13;   //nid represents the id dinosaur from the ai. This one is chose with rand()
    do
    {
        std::cout<<"Player name: "<<nickname<<"\n";
        std::cout<<"Player: "<<dinosaurs.at(id).getName()<<"     health:"<<dinosaurs.at(id).getHealth()<<"%\n";
        std::cout<<"Enemy: "<<dinosaurs.at(nid).getName()<<"       health:"<<dinosaurs.at(nid).getHealth()<<"%\n";

        for(int i = 0; i < 4; i++)
        {
            std::cout<<(i+1)<<": "<<dinosaurs.at(id).attacks[i].getName()<<"   ";
            if(i==1)
            {
                std::cout<<"\n";
            }
        }
        std::cout<<"\n";
        std::cin>>atqp;
        damage = attacks(atqp,false);
        damage = dinosaurs.at(nid).getHealth() - damage;
        dinosaurs.at(nid).setHealth(damage);
        damage = attacks(rand()% 3,true);
        damage = dinosaurs.at(id).getHealth() - damage;
        dinosaurs.at(id).setHealth(damage);
        if(dinosaurs.at(nid).getHealth()<=0)
        {
            std::cout<<"Congratulations "<<nickname<<" have won\n";
            std::cout<<"Do u wanna try with a new fight? e.e Y/N\n";
            std::cin>>op;
            if(op == 'N' || op == 'n')
            {
                nextFight == false;
                exit(0);
            }
            else
            {
                nid = rand() % 3;
            }
        }

        if(dinosaurs.at(id).getHealth()<=0)
        {
            std::cout<<"you died\n";
        }
    }
    while(dinosaurs.at(id).getHealth()>0 && nextFight == true );
}


int attacks(int atq, bool ai)
{
    switch(atq)
    {
    case 1:
        if(ai)
        {
            std::cout<<dinosaurs.at(nid).getName()<<" had use: "<<dinosaurs.at(nid).attacks[0].getName()<<"\n";
            return dinosaurs.at(nid).attacks[0].getDamage();
        }
        else
        {
            std::cout<<dinosaurs.at(id).getName()<<" had use: "<<dinosaurs.at(id).attacks[0].getName()<<"\n";
            return dinosaurs.at(id).attacks[0].getDamage();
        }
        break;

    case 2:
        if(ai)
        {
            std::cout<<dinosaurs.at(nid).getName()<<" had use: "<<dinosaurs.at(nid).attacks[1].getName()<<"\n";
            return dinosaurs.at(nid).attacks[1].getDamage();
        }
        else
        {
            std::cout<<dinosaurs.at(id).getName()<<" had use: "<<dinosaurs.at(id).attacks[1].getName()<<"\n";
            return dinosaurs.at(id).attacks[1].getDamage();
        }
        break;

    case 3:
        if(ai)
        {
            std::cout<<dinosaurs.at(nid).getName()<<" had use: "<<dinosaurs.at(nid).attacks[2].getName()<<"\n";
            return dinosaurs.at(nid).attacks[2].getDamage();
        }
        else
        {
            std::cout<<dinosaurs.at(id).getName()<<" had use: "<<dinosaurs.at(id).attacks[2].getName()<<"\n";
            return dinosaurs.at(id).attacks[2].getDamage();
        }
        break;

    case 4:
        if(ai)
        {
            std::cout<<dinosaurs.at(nid).getName()<<" had use: "<<dinosaurs.at(nid).attacks[3].getName()<<"\n";
            return dinosaurs.at(nid).attacks[3].getDamage();
        }
        else
        {
            std::cout<<dinosaurs.at(id).getName()<<" had use: "<<dinosaurs.at(id).attacks[3].getName()<<"\n";
            return dinosaurs.at(id).attacks[3].getDamage();
        }
        break;

    default:
        return 0;
    }
}
#endif // JUEGO_H_INCLUDED
