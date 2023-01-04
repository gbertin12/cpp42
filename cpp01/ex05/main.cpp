/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/16 13:11:21 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl harl;
	
	if (argc == 2)
	{
		int			i = 0;
		std::string levelMin = argv[1];
		std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		
		while (i < 4)
		{
			if (levelMin == levels[i])
				break ;
			i++;
		}
		switch (i) {
			case 0:
				harl.complain("DEBUG");
				break ;
			case 1:
				harl.complain("INFO");
				break ;
			case 2:
				harl.complain("WARNING");
				break ;
			case 3:
				harl.complain("ERROR");
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break ;
		}
	}
	else 
		std::cout << "Write ./Harl following by one of these arguments [DEBUG, INFO, WARNING, ERROR]" << std::endl;
	return (0);
}