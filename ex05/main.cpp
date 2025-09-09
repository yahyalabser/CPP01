/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:36:11 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:36:11 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
   Harl harl;

   std::cout << "=== Testing all levels ===" << std::endl;
   harl.complain("DEBUG");
   harl.complain("INFO");
   harl.complain("WARNING");
   harl.complain("ERROR");
   
   std::cout << "\n=== Testing invalid levels ===" << std::endl;
   harl.complain("");
   harl.complain("a");
   harl.complain("DEBUGINFO");
   harl.complain("123");
   
   return(0);
}