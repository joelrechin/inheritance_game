#ifndef BALROGS_H
#define BALROGS_H
#include "Creature.h"
#include "Demon.h"

using namespace std;

namespace cs_creature
{

class Balrog: public Demon
{
    public:
        Balrog();
        Balrog(const int newStrength, const int newHitPoints);
        int getDamage() const;
        string getSpecies() const;
};

}

#endif // BALROGS_H
