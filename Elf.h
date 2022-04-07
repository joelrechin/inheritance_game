#ifndef ELF_H
#define ELF_H
#include "Creature.h"

using namespace std;

namespace cs_creature
{

class Elf: public Creature
{
    public:
        Elf();
        Elf(const int newStrength, const int newHitPoints);
        int getDamage() const;
        string getSpecies() const;
};

}

#endif // ELF_H


