/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/01 15:18:07 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) {
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed(int const nb_int) {
	this->_rawBits = nb_int << frationPart;
}

Fixed::Fixed(float const nb_float) {
	this->_rawBits = int(roundf(nb_float * (1 << frationPart)));
}

Fixed::Fixed(const Fixed& obj) {
	this->_rawBits = obj.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed& obj) {
	this->_rawBits = obj.getRawBits();
	return *this;
}

Fixed::~Fixed(void) {
	return ;
}

int		Fixed::getRawBits(void) const {
	return this->_rawBits;
}

void	Fixed::setRawBits(const int raw) {
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

bool	Fixed::operator>(const Fixed& rhs)
{
	if (this->toFloat() > rhs.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed& rhs)
{
	if (this->toFloat() < rhs.toFloat())
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed& rhs)
{
	if (this->toFloat() >= rhs.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed& rhs)
{
	if (this->toFloat() <= rhs.toFloat())
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed& rhs)
{
	if (this->toFloat() == rhs.toFloat())
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed& rhs)
{
	if (this->toFloat() != rhs.toFloat())
		return true;
	return false;
}

Fixed	Fixed::operator+(const Fixed& rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed& rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed& rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed& rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed	Fixed::operator++()
{
	Fixed	temp;
	temp._rawBits = ++_rawBits;
	return temp;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp;
	temp._rawBits = _rawBits++;
	return temp;
}

Fixed	Fixed::operator--()
{
	Fixed	temp;
	temp._rawBits = --_rawBits;
	return temp;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp;
	temp._rawBits = _rawBits--;
	return temp;
}

float	Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1.toFloat());
	return(f2.toFloat());
}

float	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1.toFloat());
	return(f2.toFloat());
}

float	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1.toFloat());
	return(f2.toFloat());
}

float	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1.toFloat());
	return(f2.toFloat());
}
