/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/02 11:26:10 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scavtrap("marvin");
	ClapTrap clapTrap("Teddy");
	
	clapTrap.attack("Spider");
	scavtrap.attack("Tiger");
	scavtrap.printInfo();
	scavtrap.takeDamage(30);
	scavtrap.printInfo();
	scavtrap.beRepaired(20);
	for (int i = 0; i < 50; i++)
		scavtrap.attack("Tiger");
	scavtrap.takeDamage(100);
	scavtrap.beRepaired(10);
	scavtrap.printInfo();
	scavtrap.guardGate();
	ScavTrap test(scavtrap);
	test.printInfo();
	return (0);
}