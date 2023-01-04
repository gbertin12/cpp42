/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 10:20:15 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap fragtrap("marvin");
	ClapTrap clapTrap("Teddy");
	ScavTrap scavtrap("Willy");
	
	std::cout << std::endl  << "-----------------------------------" << std::endl;
	std::cout  << "FRAGTRAP" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	fragtrap.printInfo();

	std::cout << std::endl  << "-----------------------------------" << std::endl;
	std::cout  << "SCAVTRAP" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	scavtrap.printInfo();
	
	std::cout << std::endl  << "-----------------------------------" << std::endl;
	std::cout  << "CLAPTRAP" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	clapTrap.printInfo();
	
	std::cout << std::endl  << "-----------------------------------" << std::endl;
	std::cout  << "LOST ENERGY AND HEALTH" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	fragtrap.attack("Spider");
	fragtrap.attack("Tiger");
	fragtrap.printInfo();
	fragtrap.takeDamage(30);
	fragtrap.printInfo();
	fragtrap.beRepaired(20);
	fragtrap.printInfo();
	std::cout << std::endl << "Use all ENERGY" << std::endl;
	for (int i = 0; i < 100; i++)
		fragtrap.attack("Tiger");

	std::cout << std::endl << "-----------------------------------" << std::endl;
	std::cout << "Check NO LIFE" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	fragtrap.takeDamage(100);
	fragtrap.beRepaired(10);
	fragtrap.printInfo();
	
	std::cout << std::endl  << "-----------------------------------" << std::endl;
	std::cout  << "SUPER POWER" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	
	fragtrap.highFivesGuys();

	std::cout << std::endl << "-----------------------------------" << std::endl;
	std::cout  << "DESTRUCTOR" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	return (0);
}