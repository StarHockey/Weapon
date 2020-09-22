#include "character.h"

Character::Character()
{

}

void Character::fight() {
    weapon->useWeapon();

}
void Character::setWeapon(WeaponBehavior *w) {
    this->weapon = w;
}
