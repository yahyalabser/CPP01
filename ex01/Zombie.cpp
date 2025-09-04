#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
   this->name = name;
}

Zombie::Zombie() {}
Zombie::~Zombie() {}

void Zombie::announce(void)
{
   std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::addName(std::string name)
{
   this->name = name;
}
