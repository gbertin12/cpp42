/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 17:00:37 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("Animal") {
std::cout << "Animal Constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal& obj) {
	this->_type = obj._type;
	return ;
}

Animal&	Animal::operator=(const Animal& obj) {
	this->_type = obj._type;
	return *this;
}

void	Animal::makeSound(void) {
	std::cout << "Zzzzz............." << std::endl;
}

std::string	Animal::getType(void)
{
	return this->_type;
}