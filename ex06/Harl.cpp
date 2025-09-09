/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:36:18 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:36:18 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug( void )
{
   std::cout << "[DEBUG]" << std::endl;
   std::cout << "More bacon please! I love it!" << std::endl;
}

void Harl::info( void )
{
   std::cout << "[INFO]" << std::endl;
   std::cout << "Not enough bacon! Add more for free!" << std::endl;
}

void Harl::warning( void )
{
   std::cout << "[WARNING]" << std::endl;
   std::cout << "I'm a regular customer! Give me free bacon!" << std::endl;
}

void Harl::error( void )
{
   std::cout << "[ERROR]" << std::endl;
   std::cout << "I'm very angry! Get me the manager!" << std::endl;
}

void Harl::complain(std::string level)
{
   std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
   void (Harl::*functions[4]) ()= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
   int i = 0;

   while (i < 4 && levels[i].compare(level) != 0)
      i++;
   switch (i)
   {
      case 0:(this->*functions[0]) ();
      case 1:(this->*functions[1]) ();
      case 2:(this->*functions[2]) ();
      case 3:(this->*functions[3]) ();
         break;
      default:
         std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
   }
}
