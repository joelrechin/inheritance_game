#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "Creature.h"
#include "Demon.h"

using namespace std;

namespace cs_creature
{

class Cyberdemon: public Demon
{
    public:
        Cyberdemon();
        Cyberdemon(const int newStrength, const int newHitPoints);
        string getSpecies() const;
};

}

#endif // CYBERDEMON_H
