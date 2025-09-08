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

int getN(void)
{
   std::string index;

   while(true)
   {
      int i = 0;
      int nbr = 0;
      std::cout << "Insert number of zombies: ";
      std::getline(std::cin, index);
      if (index.empty())
         continue;
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
      if (nbr > 0)
         return (nbr);
   }
   return (0);
}

std::string getName(void)
{
   std::string name;

   while (true)
   {
      std::cout << "Name the zombies: ";
      std::getline(std::cin, name);
      if (name.empty())
         continue;
      else
         break;
   }
   return (name);
}

int main()
{
   int N = getN();
   std::string name = getName();
   Zombie* zombies = zombieHorde(N, name);

   int i = 0;
   while (i < N)
   {
      zombies[i].announce();
      i++;
   }
   delete []zombies;
   return (0);
}