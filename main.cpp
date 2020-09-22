#include <QCoreApplication>
#include "weaponbehavior.h"
#include "swordbehavior.h"
#include "knifebehavior.h"
#include "character.h"
#include "king.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Character *p = new King();
    p->fight();
    WeaponBehavior *knife = new KnifeBehavior();
    p->setWeapon(knife);
    p->fight();

    return a.exec(); 
}
