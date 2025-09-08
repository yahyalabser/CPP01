/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:31:54 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:31:54 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int   main()
{
   Zombie* zombie1 = newZombie("Heap zombie");
   zombie1->announce();
   randomChump("Stack zombie");
   delete (zombie1);
   return (0);
}
