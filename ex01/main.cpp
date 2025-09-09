/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:33:13 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:33:13 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <climits>


int getN(void)
{
   std::string index;
   while(true)
   {
      std::cout << "Insert number of zombies: ";
      if (!std::getline(std::cin, index) ||index.empty()) continue;

      int nbr = 0;
      int i = 0;
      while (index[i])
      {
         if (index[i] < '0' || index[i] > '9')
         {
            std::cout << "Please enter a valid number >:(" << std::endl;
            nbr = 0;
            break;
         }
         nbr = nbr * 10 + (index[i] - '0');
         i++;
      }
      if (nbr > 0 && nbr <= INT_MAX) return (nbr);
   }
   return (0);
}

std::string getName(void)
{
   std::string name;
   while (true)
   {
      std::cout << "Name the zombies: ";
      if (!std::getline(std::cin, name)) continue;
      if (!name.empty()) break;
   }
   return (name);
}

int main()
{
   int N = getN();
   std::string name = getName();

   Zombie* zombies = zombieHorde(N, name);

   for (int i = 0; i < N; i++)
      zombies[i].announce();
   
   delete[] zombies;
   return (0);
}
