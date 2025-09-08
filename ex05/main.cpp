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

   harl.complain("DEBUG");
   harl.complain("INFO");
   harl.complain("WARNING");
   harl.complain("ERROR");
   harl.complain("a");
   return(0);
}