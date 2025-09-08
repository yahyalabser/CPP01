/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:33:57 by ylabser           #+#    #+#             */
/*   Updated: 2025/09/04 15:33:57 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
   std::string str = "HI THIS IS BRAIN";
   std::string *stringPTR = &str;
   std::string &stringREF = str;

   std::cout << "The memory address of the string variable: " << &str << std::endl; 
   std::cout << "The memory address held by stringPTR: " << &stringPTR << std::endl; 
   std::cout << "The memory address held by stringREF: " << &stringREF << std::endl; 

   std::cout << "The value of the string variable: " << str << std::endl; 
   std::cout << "The value pointed to by stringPTR: " << stringPTR << std::endl; 
   std::cout << "The value pointed to by stringREF: " << stringREF << std::endl; 
}
