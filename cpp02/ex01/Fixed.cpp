/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/19 11:42:13 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) {
	std::cout << "Default Fixed constructor called" << std::endl;
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed(int const nb_int) {
	std::cout << "Fixed int constructor called" << std::endl;
	this->_rawBits = nb_int << frationPart;
}

Fixed::Fixed(float const nb_float) {
	std::cout << "Fixed float constructor called" << std::endl;
	this->_rawBits = int(roundf(nb_float * (1 << frationPart)));
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
	this->_rawBits = raw;
}

int		Fixed::toInt(void) const {
	return this->_rawBits >> frationPart;
}

float	Fixed::toFloat(void) const {
	return float(this->_rawBits / float(1 << frationPart));
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}