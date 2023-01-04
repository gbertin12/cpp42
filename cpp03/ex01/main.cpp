/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 10:18:17 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap clapTrap("Teddy");
	ScavTrap scavtrap("Willy");

	std::cout << std::endl  << "-----------------------------------" << std::endl;
	std::cout  << "SCAVTRAP" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	scavtrap.printInfo();
	
	std::cout << std::endl  << "-----------------------------------" << std::endl;
	std::cout  << "CLAPTRAP" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	clapTrap.printInfo();

	std::cout << std::endl  << "-----------------------------------" << std::endl;
	
	clapTrap.attack("Spider");
	std::cout << "hitpoint : " << scavtrap.getHitPoints() << std::endl; 
	scavtrap.attack("Tiger");
	scavtrap.printInfo();
	scavtrap.takeDamage(30);
	scavtrap.printInfo();
	scavtrap.beRepaired(20);
	scavtrap.printInfo();
	for (int i = 0; i < 50; i++)
		scavtrap.attack("Tiger");
		
	std::cout << std::endl << "-----------------------------------" << std::endl;
	std::cout << "Check NO LIFE" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	scavtrap.takeDamage(100);
	scavtrap.beRepaired(10);
	scavtrap.printInfo();
	
	std::cout << std::endl  << "-----------------------------------" << std::endl;
	std::cout  << "SUPER POWER" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	scavtrap.guardGate();
	
	std::cout << std::endl << "-----------------------------------" << std::endl;
	std::cout  << "DESTRUCTOR" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	return (0);
}