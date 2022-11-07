/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 16:51:49 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
	this->_brain = new Brain();
	std::cout << "Dog Constructor called" << std::endl;
	return ;
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog& obj) {
	return ;
}

Dog&	Dog::operator=(const Dog& obj) {
	return *this;
}

void	Dog::makeSound(void) {
	std::cout << "Wouafff Wouaff !!" << std::endl;
}

void	Dog::addIdea(std::string idea)
{
	this->_brain->addIdea(idea);
}

void	Dog::printIdeas()
{
	std::cout << std::endl;
	std::cout << this->_type << " : " << std::endl << std::endl;
	for (int i = 0; i < this->_brain->getIndex(); i++)
		std::cout << this->_brain->getIdeaById(i) << std::endl;
	std::cout << "-------------------------" << std::endl;
}