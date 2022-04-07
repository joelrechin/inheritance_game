#include <iostream>
#include "Cyberdemon.h"
#include "Demon.h"
#include "Creature.h"
#include <cstdlib>

using namespace std;

namespace cs_creature
{

Cyberdemon::Cyberdemon()
{

}






Cyberdemon::Cyberdemon(const int newStrength, const int newHitPoints)
: Demon(newStrength, newHitPoints)
{
}





string Cyberdemon::getSpecies() const
{
    string type = "Cyberdemon";
    return type;
}

}

