/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/20 16:02:33 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap diamond("Diamond");
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
	std::cout  << "DiamondTrap" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	diamond.printInfo();
	
	std::cout << std::endl  << "-----------------------------------" << std::endl;
	std::cout  << "SUPER POWER" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.guardGate();

	std::cout << std::endl  << "-----------------------------------" << std::endl;
	diamond.attack("Tiger");

	std::cout << std::endl << "-----------------------------------" << std::endl;
	std::cout  << "DESTRUCTOR" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	return (0);
}