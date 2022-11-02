/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/02 15:25:35 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void){
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "name " << this->_name << " hits point " << this->_hitPoints << " energy " << this->_energyPoints << " damage " << this->_attackDamage<< std::endl;
	std::cout << "name " << ScavTrap::_name << " hits point " << ScavTrap::_hitPoints << " energy " << ScavTrap::_energyPoints << " damage " << ScavTrap::_attackDamage<< std::endl;
	std::cout << "name " <<  " hits point " << FragTrap::_hitPoints << " energy " << FragTrap::_energyPoints << " damage " << FragTrap::_attackDamage<< std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap Destructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) {
	return ;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj) {
	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name
		<< " and the name of my sub object is "
		<< ClapTrap::_name << std::endl;
}