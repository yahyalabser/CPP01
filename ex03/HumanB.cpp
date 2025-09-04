#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
   this->name = name;
   this->weapon = nullptr;
}

HumanB::~HumanB(void) {}

void HumanB::attack(void)
{
   if (weapon)
      std::cout << name << " attacks with their " << weapon->getType() << std::endl;
   else
      std::cout << name << " has no weapon to attack with!" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
   this->weapon = &weapon;
}
