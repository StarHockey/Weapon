#ifndef WEAPONBEHAVIOR_H
#define WEAPONBEHAVIOR_H

#include <iostream>
using namespace std;

class WeaponBehavior
{
public:
    WeaponBehavior();
    virtual void useWeapon() = 0;
};

#endif // WEAPONBEHAVIOR_H
