/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/30 12:50:29 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>


Cat::Cat(void) : AAnimal("Cat") {
	std::cout << "Cat Constructor called" << std::endl;
	return ;
}

Cat::~Cat(void) {
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat& obj) {
	this->_type = obj._type;
	return ;
}

Cat&	Cat::operator=(const Cat& obj) {
	this->_type = obj._type;
	return *this;
}

void	Cat::makeSound(void) {
	std::cout << "Miaou miou !" << std::endl;
}