/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 11:00:19 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongDog::WrongDog(void)  : WrongAnimal("wrongDog") {
std::cout << "WrongDog Constructor called" << std::endl;
	return ;
}

WrongDog::~WrongDog(void) {
	std::cout << "WrongDog Destructor called" << std::endl;
	return ;
}

WrongDog::WrongDog(const WrongDog& obj) {
	return ;
}

WrongDog&	WrongDog::operator=(const WrongDog& obj) {
	return *this;
}

void	WrongDog::makeSound(void) {
	std::cout << "Wouafff Wouaff !!" << std::endl;
}