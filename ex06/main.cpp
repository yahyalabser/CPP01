/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:36:26 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:36:26 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc , char *argv[])
{
   Harl harl;

   if (argc != 2)
   {
      std::cout << "Wrong number of arguments!" << std::endl;
      return (1);
   }
   harl.complain(argv[1]);
   return (0);
}