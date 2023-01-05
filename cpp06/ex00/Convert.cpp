/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/05 11:12:26 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

#include <iostream>
#include <cmath>

Convert::Convert(std::string const value) : _value(value) {
	std::cout << "Convert Constructor called" << std::endl;
	if (value.empty())
		throw Convert::InvalidInputException();
	if (value.size() == 1)
	{
		this->charValue = value.front();
		std::cout << "Char " << this->charValue << std::endl;
		this->_idType = this->typeChar;
	}
	else
	{
		char 	*end;
		char	*endLong;
		long	numberLong = std::strtol(value.c_str(), &endLong, 10);
		double 	number = std::strtof(value.c_str(), &end);
		if (endLong[0])
		{
			if (end[0])
			{
				std::cout << "ENTER" << std::endl;
				if (end[0] == 'f')
				{
					this->floatValue = static_cast<float>(number);
					std::cout << "Float " << this->floatValue << std::endl;
					this->_idType = this->typeFloat;
				}
				else
					throw Convert::InvalidInputException();
			}
			else 
			{
				this->doubleValue = number;
				std::cout << "Double " << this->doubleValue << std::endl;
				this->_idType = this->typeDouble;
			}
		}
		else
		{
			if (numberLong > std::numeric_limits<int>::max() || numberLong < std::numeric_limits<int>::min())
				throw Convert::InvalidInputException();
			this->intValue = static_cast<int>(numberLong);
			std::cout << "Int " << this->intValue << std::endl;
			this->_idType = this->typeInt;
		}
	}
	return ;
}

Convert::~Convert(void) {
	std::cout << "Convert Destructor called" << std::endl;
	return ;
}

Convert::Convert(const Convert& obj) {
	this->_value = obj._value;
	this->charValue = obj.charValue;
	this->intValue = obj.intValue;
	this->floatValue = obj.floatValue;
	this->doubleValue = obj.doubleValue;
	this->_idType = obj._idType;
	return ;
}

Convert&	Convert::operator=(const Convert& obj) {
	this->_value = obj._value;
	this->charValue = obj.charValue;
	this->intValue = obj.intValue;
	this->floatValue = obj.floatValue;
	this->doubleValue = obj.doubleValue;
	this->_idType = obj._idType;
	return *this;
}

int			Convert::toInt() const
{
	switch (this->_idType)
	{
	case typeInt:
		return this->intValue;
	case typeChar:
		return static_cast<int>(this->charValue);
	case typeDouble:
		if (std::isnan(this->doubleValue) || std::isinf(this->doubleValue) || this->doubleValue > std::numeric_limits<int>::max() || this->doubleValue < std::numeric_limits<int>::min())
				throw Convert::ImpossibleException();
		return static_cast<int>(this->doubleValue);
	case typeFloat:
		if (std::isnan(this->floatValue) || std::isinf(this->floatValue) || this->floatValue > std::numeric_limits<int>::max() || this->floatValue < std::numeric_limits<int>::min())
				throw Convert::ImpossibleException();
		return static_cast<int>(this->floatValue);
	default:
		return 0;
	}
	return 0;
}

char		Convert::toChar() const
{
	switch (this->_idType)
	{
	case typeInt:
		if (std::isprint(this->intValue))
			return static_cast<char>(this->intValue);
		Convert::NotDisplayableException();
	case typeChar:
		return this->charValue;
	case typeDouble:
		if (std::isnan(this->floatValue) || std::isinf(this->floatValue) || this->floatValue > std::numeric_limits<char>::max() || this->floatValue < std::numeric_limits<char>::min())
			throw Convert::ImpossibleException();
		if (!isprint(static_cast<char>(this->doubleValue)))
			throw Convert::NotDisplayableException();
		return static_cast<char>(this->doubleValue);
	case typeFloat:
		if (std::isnan(this->floatValue) || std::isinf(this->floatValue) || this->floatValue > std::numeric_limits<char>::max() || this->floatValue < std::numeric_limits<char>::min())
			throw Convert::ImpossibleException();
		if (!isprint(static_cast<char>(this->floatValue)))
			throw Convert::NotDisplayableException();
		return static_cast<char>(this->floatValue);
	default:
		return 0;
	}
	return 0;
}

double		Convert::toDouble() const
{
	switch (this->_idType)
	{
	case typeInt:
		return static_cast<double>(this->intValue);
	case typeChar:
		return static_cast<double>(this->charValue);
	case typeDouble:
		return this->doubleValue;
	case typeFloat:
		return static_cast<double>(this->floatValue);
	default:
		return 0;
	}
	return 0;
}

float		Convert::toFloat() const
{
	switch (this->_idType)
	{
	case typeInt:
		return static_cast<float>(this->intValue);
	case typeChar:
		return static_cast<float>(this->charValue);
	case typeDouble:
		return static_cast<float>(this->doubleValue);
	case typeFloat:
		return this->floatValue;
	default:
		return 0;
	}
	return 0;
}

std::ostream& operator<<(std::ostream& o, const Convert& rhs)
{
	try
	{
		o << "char: " << rhs.toChar() << std::endl;
	}
	catch(const std::exception& e)
	{
		o << "char: "  << e.what() << std::endl;
	}
	try
	{
		o << "int: " << rhs.toInt() << std::endl;
	}
	catch(const std::exception& e)
	{
		o << "int: "  << e.what() << std::endl;
	}
	try
	{
		float printFloat = rhs.toFloat();
		
		o << "float: " << printFloat  << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		o << "float: "  << e.what() << std::endl;
	}
	try
	{
		o << "double: " << rhs.toDouble() << std::endl;
	}
	catch(const std::exception& e)
	{
		o << "double: "  << e.what() << std::endl;
	}
	return o;
}