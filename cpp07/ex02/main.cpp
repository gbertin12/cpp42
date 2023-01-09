/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:30:17 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/09 10:51:56 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "iostream"

int main( void ) {
	Array<int>	intTab(5);
	Array<char>	charTab(5);
	
	for (unsigned int i = 0; i < 5; i++)
		intTab[i] = rand() % 100 + 1;
		
	charTab[0] = 'a';
	charTab[1] = 'b';
	charTab[2] = 'c';
	charTab[3] = 'd';
	charTab[4] = 'e';

	Array<int>	copyInt = intTab;
	Array<char> copyChar = charTab;

	copyInt[0] = 42;
	copyChar[0] = 'z';
	
	std::cout << "Int Tab: " << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << intTab[i] << "   " << copyInt[i] << std::endl;
	std::cout << std::endl << "Char Tab: " << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << charTab[i] << "   " << copyChar[i] << std::endl;

	try
	{
		std::cout << copyInt[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}