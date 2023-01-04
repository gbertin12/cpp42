/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 15:30:28 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Materia/AMateria.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		this->_stock[i] = NULL;
	std::cout << "MateriaSource Constructor called" << std::endl;
	return ;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i])
			delete this->_stock[i];
	}
	std::cout << "MateriaSource Destructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& obj) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i])
			delete this->_stock[i];
	}
	for (int i = 0; i < 4; i++)
		this->_stock[i] = obj._stock[i]->clone();
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& obj) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i])
			delete this->_stock[i];
	}
	for (int i = 0; i < 4; i++)
		this->_stock[i] = obj._stock[i]->clone();
	return *this;
}

void			MateriaSource::learnMateria(AMateria* learn)
{
	std::cout << "Learn New materia " << learn->getType()  << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_stock[i])
		{
			this->_stock[i] = learn;
			break ;
		}
	}
}

AMateria*		MateriaSource::createMateria(std::string const & type)
{
	std::cout << "Create New materia " << type << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i] != NULL && this->_stock[i]->getType() == type)
			return this->_stock[i];
	}
	return NULL;
}