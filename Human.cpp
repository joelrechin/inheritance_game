#include <iostream>
#include "Human.h"
#include "Creature.h"
#include <cstdlib>

using namespace std;

namespace cs_creature
{

Human::Human()
{
}






Human::Human(const int newStrength, const int newHitPoints)
: Creature(newStrength, newHitPoints)
{
}





string Human::getSpecies() const
{
    string type = "Human";
    return type;
}

}


