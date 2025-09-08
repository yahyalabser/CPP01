/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:32:16 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:32:16 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
   this->name = name;
}

Zombie::~Zombie()
{
   std::cout << name << " is being killed :(" << std::endl;
}

void Zombie::announce(void)
{
   std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
