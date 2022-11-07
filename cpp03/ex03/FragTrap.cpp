/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/03 16:58:24 by gbertin          ###   ########.fr       */
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
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	this->_name = obj._name;
	std::cout << "FragTrap copy called" << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj) {
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	this->_name = obj._name;
	std::cout << "FragTrap assignement operator called" << std::endl;
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "HIGHT FIVES GUYS !" << std::endl;
}

int		FragTrap::getAttackDamage(void) const {
	return this->_attackDamage;
}

void	FragTrap::setAttackDamage(void) {
	this->_attackDamage = 30;
}