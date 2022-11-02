/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/02 11:23:48 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	return ;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
	std::cout << "ClapTrap copy Constructor called" << std::endl;
	this->_attackDamage = obj._attackDamage;
	this->_energyPoints = obj._energyPoints;
	this->_hitPoints = obj._hitPoints;
	this->_name = obj._name;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj) {
	std::cout << "ClapTrap assignement Constructor called" << std::endl;
	this->_attackDamage = obj._attackDamage;
	this->_energyPoints = obj._energyPoints;
	this->_hitPoints = obj._hitPoints;
	this->_name = obj._name;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is die and can't attack, rest in peace bro" << std::endl;
		return ;
	}
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "You don't have enough energy !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is die and can't take damage, rest in peace bro" << std::endl;
		return ;
	}
	if (this->_hitPoints > 1)
	{
		std::cout << "ClapTrap " << this->_name << " Taken " << amount << " damage" << std::endl;
		if (amount > this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " already has 0 hits points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is die and can't be repaired, rest in peace bro" << std::endl;
		return ;
	}
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " gained " << amount << " hit points " << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "You don't have enough energy !" << std::endl;
}

void	ClapTrap::printInfo(void) {
	std::cout << "name " << this->_name << " hits point " << this->_hitPoints << " energy " << this->_energyPoints << " damage " << this->_attackDamage<< std::endl;
}