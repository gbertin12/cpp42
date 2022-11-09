/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/08 08:49:19 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string.h>

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "HumanB Constructor called" << std::endl;
	return ;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB Destructor called" << std::endl;
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with their ";
	if (this->_weapon)
		std::cout << this->_weapon->getType() << std::endl;
	else 
		std::cout << "nothing" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}