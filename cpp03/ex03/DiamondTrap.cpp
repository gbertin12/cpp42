/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/20 15:58:02 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap("Empty_clap_name"), ScavTrap(), FragTrap() {
	this->_name = "Empty";
	this->_energyPoints = ScavTrap::getEnergy();
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->_name = name;
	this->_energyPoints = ScavTrap::getEnergy();
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap Destructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) {
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	this->_name = obj.getName();
	std::cout << "DiamondTrap copy Constructor called" << std::endl;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj) {
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	this->_name = obj.getName();
	std::cout << "DiamondTrap assignement operator called" << std::endl;
	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name
		<< " and the name of my sub object is "
		<< ClapTrap::_name << std::endl;
}