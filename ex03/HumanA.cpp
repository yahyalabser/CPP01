/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:34:05 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:34:05 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : name(name) , weapon(weapon) {}
HumanA::~HumanA() {}

void HumanA::attack(void)
{
   std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
