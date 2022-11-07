/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 17:08:10 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>


Cat::Cat(void) : Animal("Cat") {
	this->_brain = new Brain();
	std::cout << "Cat Constructor called" << std::endl;
	return ;
}

Cat::~Cat(void) {
	delete this->_brain; 
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat& obj) {
	delete this->_brain;
	this->_brain->~Brain();
	this->_brain = new Brain();
	return ;
}

Cat&	Cat::operator=(const Cat& obj) {
	
	this->_type = obj._type;
	return *this;
}

void	Cat::makeSound(void) {
	std::cout << "Miaou miou !" << std::endl;
}

void	Cat::addIdea(std::string idea)
{
	this->_brain->addIdea(idea);
}

void	Cat::printIdeas()
{
	std::cout << std::endl;
	std::cout << this->_type << " : " << std::endl << std::endl;
	for (int i = 0; i < this->_brain->getIndex(); i++)
		std::cout << this->_brain->getIdeaById(i) << std::endl;
	std::cout << "-------------------------" << std::endl;
}
