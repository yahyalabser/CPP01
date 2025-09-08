/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:32:35 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:32:35 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
   private:
      std::string name;

   public:
      Zombie(std::string name);
      ~Zombie();
      void announce( void );
};

Zombie*  newZombie( std::string name );
void     randomChump( std::string name );

#endif