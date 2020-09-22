#ifndef AXEBEHAVIOR_H
#define AXEBEHAVIOR_H

#include "weaponbehavior.h"

class AxeBehavior : public WeaponBehavior {
public:
    AxeBehavior();
    virtual void useWeapon();
};

#endif // AXEBEHAVIOR_H
