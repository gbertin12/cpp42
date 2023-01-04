/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 12:41:38 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure") {
std::cout << "Cure Constructor called" << std::endl;
	return ;
}

Cure::~Cure(void) {
	std::cout << "Cure Destructor called" << std::endl;
	return ;
}

Cure::Cure(const Cure& obj) : AMateria(obj) {
	return ;
}

Cure&		Cure::operator=(const Cure& obj) {
	this->_type = obj._type;
	return *this;
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}