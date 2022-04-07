include <iostream>
include "Creature.h"
include "Demon.h"
include "Elf.h"
include "Human.h"
include "Balrogs.h"
include "Cyberdemon.h"
include <ctime>
include <stdio.h>
include <stdlib.h>
include <time.h>

using namespace std;
using namespace cs_creature;

void battleArena(Creature& , Creature&);

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    Elf p1(1000,800);
    Human p2(1000,1000);
    Balrog p3(1000,2000);
    Cyberdemon p4(3000,1500);

    battleArena(p1,p2);
    battleArena(p2,p4);
    battleArena(p3,p4);
    battleArena(p2,p3);
    battleArena(p1,p3);

    return 0;

}

void battleArena(Creature& c1, Creature& c2)
{
    int damage1 = 0, damage2 = 0, choice = 1;
    int health1 = c1.getHitpoints(), health2 = c2.getHitpoints();

    do{
    cout << "Welcome to the Battle Arena" << endl;
    cout << "Today our two creatures fighting are: " << endl;
    cout << "A(n) " << c1.getSpecies() << " with " << c1.getHitpoints() << " hitpoints." << endl;
    cout << "A(n) " << c2.getSpecies() << " with " << c2.getHitpoints() << " hitpoints." << endl<<endl;
    cout << "Press enter to begin the battle" << endl;
    cin.ignore();

    while((c1.getHitpoints() > 0) && (c2.getHitpoints() > 0))
    {
        damage1 = c1.getDamage();
        c2.takeDamage(damage1);
        cout << "The " << c2.getSpecies() << " now has "
        << c2.getHitpoints() << " hitpoints." << endl << endl;
        damage1 = 0;
        cout << "Press enter for the next attack." << endl;
        cin.ignore();
        damage2 = c2.getDamage();
        c1.takeDamage(damage2);
        cout << "The " << c1.getSpecies() << " now has "
        << c1.getHitpoints() << " hitpoints." << endl << endl;
        damage2 = 0;
        cout << "Press enter for the next attack." << endl;
        cin.ignore();
    }

    if(c1.getHitpoints() < c2.getHitpoints())
        cout << "The " << c1.getSpecies() << " was defeated by the " << c2.getSpecies() << endl<<endl;
    if(c2.getHitpoints() < c1.getHitpoints())
        cout << "The " << c2.getSpecies() << " was defeated by the " << c1.getSpecies() << endl<<endl;
    if(c1.getHitpoints() == c2.getHitpoints())
        cout << "The " << c1.getSpecies() << " and the " << c2.getSpecies() << " tied." << endl<<endl;

    c1.reviveHitpoints(health1);
    c2.reviveHitpoints(health2);

    cout << "Battle again? (1 for YES and 2 for NO): ";
    cin >> choice;
    cout << endl;

    }while(choice == 1);

}

/*
Welcome to the Battle Arena
Today our two creatures fighting are:
A(n) Elf with 800 hitpoints.
A(n) Human with 1000 hitpoints.

Press enter to begin the battle

The Elf attacks for 265 points!
Magical attack inflicts 265 additional damage points!
The Human now has 470 hitpoints.

Press enter for the next attack.

The Human attacks for 992 points!
The Elf now has -192 hitpoints.

Press enter for the next attack.

The Elf was defeated by the Human

Battle again? (1 for YES and 2 for NO): 2

Welcome to the Battle Arena
Today our two creatures fighting are:
A(n) Human with 1000 hitpoints.
A(n) Cyberdemon with 1500 hitpoints.

Press enter to begin the battle
The Human attacks for 366 points!
The Cyberdemon now has 1134 hitpoints.

Press enter for the next attack.

The Cyberdemon attacks for 371 points!
The Human now has 629 hitpoints.

Press enter for the next attack.

The Human attacks for 517 points!
The Cyberdemon now has 617 hitpoints.

Press enter for the next attack.

The Cyberdemon attacks for 2293 points!
The Human now has -1664 hitpoints.

Press enter for the next attack.

The Human was defeated by the Cyberdemon

Battle again? (1 for YES and 2 for NO): 2

Welcome to the Battle Arena
Today our two creatures fighting are:
A(n) Balrogs with 2000 hitpoints.
A(n) Cyberdemon with 1500 hitpoints.

Press enter to begin the battle
The Balrogs attacks for 254 points!
Balrog speed attack inflicts 2 additional damage points!
The Cyberdemon now has 1244 hitpoints.

Press enter for the next attack.

The Cyberdemon attacks for 2867 points!
The Balrogs now has -867 hitpoints.

Press enter for the next attack.

The Balrogs was defeated by the Cyberdemon

Battle again? (1 for YES and 2 for NO): 2

Welcome to the Battle Arena
Today our two creatures fighting are:
A(n) Human with 1000 hitpoints.
A(n) Balrogs with 2000 hitpoints.

Press enter to begin the battle
The Human attacks for 997 points!
The Balrogs now has 1003 hitpoints.

Press enter for the next attack.

The Balrogs attacks for 565 points!
Balrog speed attack inflicts 31 additional damage points!
The Human now has 404 hitpoints.

Press enter for the next attack.

The Human attacks for 641 points!
The Balrogs now has 362 hitpoints.

Press enter for the next attack.

The Balrogs attacks for 189 points!
Balrog speed attack inflicts 25 additional damage points!
The Human now has 190 hitpoints.

Press enter for the next attack.

The Human attacks for 29 points!
The Balrogs now has 333 hitpoints.

Press enter for the next attack.

The Balrogs attacks for 98 points!
Balrog speed attack inflicts 4 additional damage points!
The Human now has 88 hitpoints.

Press enter for the next attack.

The Human attacks for 79 points!
The Balrogs now has 254 hitpoints.

Press enter for the next attack.

The Balrogs attacks for 586 points!
Demonic attach inflicts 50 additional damage points!
Balrog speed attack inflicts 2 additional damage points!
The Human now has -550 hitpoints.

Press enter for the next attack.

The Human was defeated by the Balrogs

Battle again? (1 for YES and 2 for NO): 2

Welcome to the Battle Arena
Today our two creatures fighting are:
A(n) Elf with 800 hitpoints.
A(n) Balrogs with 2000 hitpoints.

Press enter to begin the battle
The Elf attacks for 960 points!
Magical attack inflicts 960 additional damage points!
The Balrogs now has 80 hitpoints.

Press enter for the next attack.

The Balrogs attacks for 948 points!
Balrog speed attack inflicts 18 additional damage points!
The Elf now has -166 hitpoints.

Press enter for the next attack.

The Elf was defeated by the Balrogs

Battle again? (1 for YES and 2 for NO): 2


Process returned 0 (0x0)   execution time : 141.113 s
Press any key to continue.
*/
