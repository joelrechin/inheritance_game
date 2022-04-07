#ifndef CREATURE_H
#define CREATURE_H

using namespace std;

namespace cs_creature
{

class Creature
{
    private:
        int strength;
        int hitpoints;
    public:
        Creature();
        Creature(const int newStrength, const int newHitPoints);
        int getStrength();
        int getHitpoints();
        virtual int getDamage() const;
        virtual string getSpecies() const = 0;
        void takeDamage(int const damage); //more or less setHitpoints :)
        void reviveHitpoints(int const health); //added so you can battle again if you want.
};

}

#endif // CREATURE_H
