#include <QCoreApplication>
#include "weaponbehavior.h"
#include "swordbehavior.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeaponBehavior *wb = new SwordBehavior;
    wb->useWeapon();
    return a.exec();
}
