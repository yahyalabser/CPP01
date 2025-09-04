#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB{
   private:
      std::string name;
      Weapon* weapon;

   public:
      HumanB(std::string name);
      ~HumanB(void);

      void attack(void);
      void setWeapon(Weapon& weapon);
};

#endif