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
#include <iostream>

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug( void )
{
   std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
   std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
   std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
   std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
   std::string s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
   void (Harl::*p[4]) ()= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
   int i = 0;

   while (i < 4 && s[i].compare(level) != 0)
      i++;
   if (i > 3)
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
   if (i < 4)
      (this->*p[i])();
}
