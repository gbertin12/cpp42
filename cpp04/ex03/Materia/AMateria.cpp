/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/02 09:43:45 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "AMateria Constructor called" << std::endl;
	return ;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria Destructor called" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria& obj) : _type(obj.getType()) {
	std::cout << "AMateria copy Constructor called" << std::endl;
	return ;
}

AMateria&	AMateria::operator=(const AMateria& obj) {
	this->_type = obj.getType();
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void	AMateria::setType(std::string type)
{
	this->_type = type;
}

void 	AMateria::use(ICharacter& target)
{
	(void)target;
}

