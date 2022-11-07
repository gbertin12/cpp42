/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 09:36:20 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
std::cout << "Dog Constructor called" << std::endl;
	return ;
}

Dog::~Dog(void) {
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