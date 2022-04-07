#include <iostream>
#include "Balrogs.h"
#include "Demon.h"
#include "Creature.h"
#include <cstdlib>

using namespace std;

namespace cs_creature
{

Balrog::Balrog()
{
}






Balrog::Balrog(const int newStrength, const int newHitPoints)
: Demon(newStrength, newHitPoints)
{
}





string Balrog::getSpecies() const
{
    string type = "Balrogs";
    return type;
}





int Balrog::getDamage() const
{
    int damage, damage2, newStregnth;

    //cout << "The Balrog ";
    damage = Demon::getDamage();

    damage2 = (rand() % newStregnth) + 1;
    cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
    damage += damage2;

    return damage;
}

}


