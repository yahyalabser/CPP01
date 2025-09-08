/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:34:12 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:34:12 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
