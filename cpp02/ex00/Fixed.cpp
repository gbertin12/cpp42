/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/08 11:25:20 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) {
	std::cout << "Default Fixed constructor called" << std::endl;
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed(const Fixed& obj) {
	std::cout << "Copy Fixed constructor called" << std::endl;
	this->_rawBits = obj.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed& obj) {
	std::cout << "Copy Fixed assignment operator called" << std::endl;
	this->_rawBits = obj.getRawBits();
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Default Fixed Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void	Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
}