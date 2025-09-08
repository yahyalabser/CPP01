/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:34:16 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:34:16 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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