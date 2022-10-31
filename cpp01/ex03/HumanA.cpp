/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/29 11:06:56 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string.h>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	return ;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA was instantiated" << std::endl;
	return ;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}