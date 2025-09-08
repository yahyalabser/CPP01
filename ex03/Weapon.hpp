/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:35:35 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:35:35 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{
   private:
      std::string type;

   public:
      Weapon(const std::string& type);
      ~Weapon();

      const std::string& getType() const;
      void setType(const std::string& new_val);
};

#endif