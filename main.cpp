#include <QCoreApplication>
#include "weaponbehavior.h"
#include "swordbehavior.h"
#include "knifebehavior.h"
#include "axebehavior.h"
#include "bowandarrowbehavior.h"
#include "character.h"
#include "king.h"
#include "troll.h"

#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Character *p = new King();
    p->fight();
    WeaponBehavior *knife = new KnifeBehavior();
    p->setWeapon(knife);
    p->fight();

    Character *t = new Troll();
    t->fight();
    WeaponBehavior *axe= new AxeBehavior();
    t->setWeapon(axe);
    t->fight();


    return a.exec(); 
}
