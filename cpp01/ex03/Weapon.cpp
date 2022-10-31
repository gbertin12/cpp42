/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/29 11:04:55 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type) {
	return ;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon was instantiated" << std::endl;
	return ;
}

std::string const	&Weapon::getType(void) const
{
	return this->_type;
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}