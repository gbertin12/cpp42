/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 10:58:22 by gbertin          ###   ########.fr       */
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
	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj) {
	return *this;
}

void	WrongCat::makeSound(void) {
	std::cout << "Miaou miou !" << std::endl;
}