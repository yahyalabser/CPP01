/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:36:22 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:36:22 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl{
   private:
      void debug( void );
      void info( void );
      void warning( void );
      void error( void );

   public:
      Harl();
      ~Harl();

      void complain(std::string level);
};

#endif