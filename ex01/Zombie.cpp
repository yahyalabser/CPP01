/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:33:28 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:33:28 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
