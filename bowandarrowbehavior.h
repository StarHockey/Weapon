#ifndef BOWANDARROWBEHAVIOR_H
#define BOWANDARROWBEHAVIOR_H

#include "weaponbehavior.h"

class BowAndArrowBehavior : public WeaponBehavior {
public:
    BowAndArrowBehavior();
    virtual void useWeapon();
};

#endif // BOWANDARROWBEHAVIOR_H
