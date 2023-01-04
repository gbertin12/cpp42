/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 12:42:06 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice") {
std::cout << "Ice Constructor called" << std::endl;
	return ;
}

Ice::~Ice(void) {
	std::cout << "Ice Destructor called" << std::endl;
	return ;
}

Ice::Ice(const Ice& obj) : AMateria(obj) {
	return ;
}

Ice&	Ice::operator=(const Ice& obj) {
	this->_type = obj._type;
	return *this;
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}