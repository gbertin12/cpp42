/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/09 13:43:45 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

Span::Span(void) : _size(1) {
	std::cout << "Span Constructor called" << std::endl;
	return ;
}

Span::Span(unsigned int size) : _size(size) {
	std::cout << "Span Constructor called" << std::endl;

}

Span::~Span(void) {
	std::cout << "Span Destructor called" << std::endl;
	return ;
}

Span::Span(const Span& obj) {
	this->_size = obj._size;
	_data = obj._data;
	return ;
}

Span&	Span::operator=(const Span& obj) {
	if (this != &obj)
	{
		this->_size = obj._size;
		_data = obj._data;
	}
	return *this;
}

void	Span::addNumber(int value)
{
	if (_data.size() >= _size)
		throw Span::IndexOutOfRangeException();
	_data.push_back(value);
}

int		Span::shortestSpan()
{
	if (_data.size() <= 1)
		throw Span::ListTooSmallTooException();
	int shortest = 2147483647;
	std::vector<int>::iterator it;
	int	diff = 0;
	
	std::sort(_data.begin(), _data.end());
	for (it = _data.begin(); it != _data.end(); it++)
	{
		diff = std::abs(*(it) - *(it + 1));
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

void	Span::printVector()
{
	std::vector<int>::iterator it;

	std::sort(_data.begin(), _data.end());
	for (it = _data.begin(); it != _data.end(); it++)
		std::cout << *(it) << std::endl;
}

int		Span::longestSpan()
{
	if (_data.size() <= 1)
		throw Span::ListTooSmallTooException();
	std::sort(_data.begin(), _data.end());
	return _data.back() - _data.front();
	
}