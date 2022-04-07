#include <iostream>
#include "Elf.h"
#include "Creature.h"
#include <cstdlib>

using namespace std;

namespace cs_creature
{

Elf::Elf()
{
}






Elf::Elf(const int newStrength, const int newHitPoints)
: Creature(newStrength, newHitPoints)
{
}






string Elf::getSpecies() const
{
    string type = "Elf";
    return type;
}





int Elf::getDamage() const
{
    int damage;
    damage = Creature::getDamage();

    //cout << "The " << getSpecies() << " attacks for " << damage << "!" << endl;

    if(rand() % 2 == 0)
    {
        cout << "Magical attack inflicts " << damage <<
        " additional damage points!" << endl;
        damage *= 2;
    }

    return damage;
}

}


