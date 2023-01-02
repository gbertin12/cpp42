/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/30 12:54:42 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void) : _type("Animal") {
std::cout << "AAnimal Constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type) : _type(type) {
std::cout << "AAnimal Constructor called" << std::endl;
	return ;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal Destructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal& obj) {
	return ;
}

AAnimal&	AAnimal::operator=(const AAnimal& obj) {
	return *this;
}

std::string	AAnimal::getType(void)
{
	return this->_type;
}