/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 10:16:25 by gbertin          ###   ########.fr       */
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
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	this->_name = obj.getName();
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj) {
	std::cout << "ClapTrap assignement Constructor called" << std::endl;
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	this->_name = obj.getName();
	return *this;
}

int		ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int		ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

int		ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

std::string ClapTrap::getName() const
{
	return this->_name;
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
		std::cout << this->_name << " don't have enough energy !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " is die and can't take damage, rest in peace bro" << std::endl;
		return ;
	}
	if (this->_hitPoints > 1)
	{
		std::cout << this->_name << " Taken " << amount << " damage" << std::endl;
		if ((int)amount > this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
	}
	else
		std::cout << this->_name << " already has 0 hits points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " is die and can't be repaired" << std::endl;
		return ;
	}
	if (this->_energyPoints > 0)
	{
		std::cout << this->_name << " gained " << amount << " hit points " << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
		std::cout << "You don't have enough energy !" << std::endl;
}

void	ClapTrap::printInfo(void) {
	std::cout << "name " << this->_name << " hits point " << this->_hitPoints << " energy " << this->_energyPoints << " damage " << this->_attackDamage<< std::endl;
}