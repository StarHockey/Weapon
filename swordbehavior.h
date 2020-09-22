#ifndef SWORDBEHAVIOR_H
#define SWORDBEHAVIOR_H

#include "weaponbehavior.h"

class SwordBehavior : public WeaponBehavior {
public:
    SwordBehavior();
    virtual void useWeapon();
};

#endif // SWORDBEHAVIOR_H
