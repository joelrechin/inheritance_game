#ifndef HUMAN_H
#define HUMAN_H
#include "Creature.h"

using namespace std;

namespace cs_creature
{

class Human: public Creature
{
    public:
        Human();
        Human(const int newStrength, const int newHitPoints);
        string getSpecies() const;
};

}

#endif // HUMAN_H

