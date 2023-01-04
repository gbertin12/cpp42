/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 10:38:48 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void){
std::cout << "WrongAnimal Constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
std::cout << "WrongAnimal Constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
	this->_type = obj._type;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj) {
	this->_type = obj._type;
	return *this;
}

void	WrongAnimal::makeSound(void) {
	std::cout << "Zzzzz............." << std::endl;
}

std::string	WrongAnimal::getType(void)
{
	return this->_type;
}

