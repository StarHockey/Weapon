#ifndef KNIFEBEHAVIOR_H
#define KNIFEBEHAVIOR_H

#include "weaponbehavior.h"

class KnifeBehavior : public WeaponBehavior {
public:
    KnifeBehavior();
    virtual void useWeapon();
};

#endif // KNIFEBEHAVIOR_H
