/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 10:11:45 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& obj) {
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	this->_name = obj.getName();
	std::cout << "FragTrap copy called" << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj) {
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	this->_name = obj.getName();
	std::cout << "FragTrap assignement operator called" << std::endl;
	return *this;
}

void	FragTrap::attack(const std::string &target) {
	if (this->_hitPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " is die and can't attack, rest in peace bro" << std::endl;
		return ;
	}
	if (this->_energyPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;

		this->_energyPoints--;
	}
	else
		std::cout << this->_name << " don't have enough energy !" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "HIGHT FIVES GUYS !" << std::endl;
}