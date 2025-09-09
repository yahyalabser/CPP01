/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:36:00 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:36:00 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug( void )
{
   std::cout << "More bacon please! I love it!" << std::endl;
}

void Harl::info( void )
{
   std::cout << "Not enough bacon! Add more for free!" << std::endl;
}

void Harl::warning( void )
{
   std::cout << "I'm a regular customer! Give me free bacon!" << std::endl;
}

void Harl::error( void )
{
   std::cout << "I'm very angry! Get me the manager!" << std::endl;
}

void Harl::complain(std::string level)
{
   std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
   void (Harl::*functions[4]) ()= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

   for (int i= 0; i < 4; i++)
      if (levels[i] == level){
         (this->*functions[i])();
         return ;
      }

   std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
