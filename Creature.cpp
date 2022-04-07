#include <iostream>
#include "Creature.h"
#include <cstdlib>

using namespace std;

namespace cs_creature
{

Creature::Creature()
{
    strength = 10;
    hitpoints = 10;
}






Creature::Creature(const int newStrength, const int newHitPoints)
{
    strength = newStrength;
    hitpoints = newHitPoints;
}






int Creature::getStrength()
{
    return strength;
}





int Creature::getHitpoints()
{
    return hitpoints;
}






int Creature::getDamage() const
{
    int damage;
    damage = (rand() % strength) + 1;

    cout <<"The " << getSpecies() << " attacks for " << damage << " points!" << endl;

    return damage;
}






void Creature::takeDamage(int const damage)
{
    hitpoints -= damage;
}





void Creature::reviveHitpoints(int const health)
{
    hitpoints = health;
}

}



