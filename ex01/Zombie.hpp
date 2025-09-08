/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:33:36 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:33:36 by ylabser          ###   ########.fr       */
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
      Zombie();
      Zombie(std::string name);
      ~Zombie();
      void announce( void );
      void addName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif