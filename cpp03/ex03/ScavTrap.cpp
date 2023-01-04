/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 10:13:25 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj) {
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	this->_name = obj.getName();
	std::cout << "Scavtrap copy called" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj) {
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	this->_name = obj.getName();
	std::cout << "Scavtrap assignement operator called" << std::endl;
	return *this;
}

void	ScavTrap::attack(const std::string &target) {
	if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is die and can't attack, rest in peace bro" << std::endl;
		return ;
	}
	if (this->_energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << this->_name << " don't have enough energy !" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << this->_name << " enter in guard Gate mode ! [WARNING]" << std::endl;
}

int		ScavTrap::getEnergy(void) {
	return 50;
}