#ifndef DEMON_H
#define DEMON_H
#include "Creature.h"

using namespace std;

namespace cs_creature
{

class Demon: public Creature
{
    public:
        Demon();
        Demon(const int newStrength, const int newHitPoints);
        int getDamage() const;
        string getSpecies() const;
};

}

#endif // DEMON_H

