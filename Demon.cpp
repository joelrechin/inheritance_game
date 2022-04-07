#include <iostream>
#include "Demon.h"
#include "Creature.h"
#include <cstdlib>

using namespace std;

namespace cs_creature
{

Demon::Demon()
{
}






Demon::Demon(const int newStrength, const int newHitPoints)
: Creature(newStrength, newHitPoints)
{
}






string Demon::getSpecies() const
{
    string type = "Demon";
    return type;
}





int Demon::getDamage() const
{
    int damage;
    damage = Creature::getDamage();

   // cout << "attacks for " << damage << " points!" << endl;

    if(rand() % 4 == 0)
    {
        damage = damage + 50;
        cout << "Demonic attach inflicts 50 additional damage points!" << endl;
    }

    return damage;
}

}



