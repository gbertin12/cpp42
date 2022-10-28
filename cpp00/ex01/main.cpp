/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:22:46 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/28 12:08:31 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "headers/PhoneBook.class.hpp"

int	main()
{
	std::string	cmd;
	PhoneBook	phoneBook;
	
	phoneBook.start_msg();
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phoneBook.add();
		else if (cmd == "SEARCH")
		{
			phoneBook.show_contact();
			phoneBook.search_contact();
		}
		else if (cmd == "EXIT")
		{
			std::cout << "Thank you for your participation" << std::endl;
			break ;
		}
	}
	return (0);
}