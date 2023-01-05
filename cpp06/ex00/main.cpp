/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 08:33:34 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/05 11:04:46 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		try
		{
			
			Convert convert(argv[1]);
			std::cout << convert;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cout << "You must enter: ./ScalarConversion <value>" << std::endl;
}

