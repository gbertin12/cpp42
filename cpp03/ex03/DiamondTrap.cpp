/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 08:48:46 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap("Empty_clap_name"), ScavTrap(), FragTrap() {
	this->_name = "Empty";
	this->_energyPoints = ScavTrap::getEnergyPoints();
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->_name = name;
	this->_energyPoints = ScavTrap::getEnergyPoints();
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap Destructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) {
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	this->_name = obj._name;
	std::cout << "DiamondTrap copy Constructor called" << std::endl;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj) {
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	this->_name = obj._name;
	std::cout << "DiamondTrap assignement operator called" << std::endl;
	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name
		<< " and the name of my sub object is "
		<< ClapTrap::_name << std::endl;
}