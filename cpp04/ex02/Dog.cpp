/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 10:56:25 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : AAnimal("Dog") {
std::cout << "Dog Constructor called" << std::endl;
	return ;
}

Dog::~Dog(void) {
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog& obj) {
	this->_type = obj._type;
	return ;
}

Dog&	Dog::operator=(const Dog& obj) {
	this->_type = obj._type;
	return *this;
}

void	Dog::makeSound(void) {
	std::cout << "Wouafff Wouaff !!" << std::endl;
}