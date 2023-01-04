/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 10:38:22 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat Constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& obj) {
	this->_type = obj._type;
	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj) {
	this->_type = obj._type;
	return *this;
}

void	WrongCat::makeSound(void) {
	std::cout << "Miaou miou !" << std::endl;
}