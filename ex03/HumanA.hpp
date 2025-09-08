/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:34:09 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:34:09 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA{
   private:
      std::string name;
      Weapon& weapon;

   public:
      HumanA(std::string name, Weapon& weapon);
      ~HumanA(void);

      void attack(void);
};

#endif