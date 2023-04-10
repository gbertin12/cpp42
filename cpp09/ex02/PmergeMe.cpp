/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/04/10 12:44:28 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <cstdlib>

static void    checkInput(char *nb)
{
    if (std::atoi(nb))
    {
        std::cerr << "Invalid input number" << std::endl;
        exit(0);
    }
}

PmergeMe::PmergeMe(void){
std::cout << "PmergeMe Constructor called" << std::endl;
	return ;
}

PmergeMe::PmergeMe(char **list, size_t size) : _list(list), _sizeList(size), _last(0), _odd(false)
{
	_output = "Before: ";
	
	if (size % 2 == 0)
	{
		checkInput(list[size -1]);
		_last = std::atoi(list[size - 1]);
		_list[size - 1] = NULL;
		_odd = true;
	}
	for (size_t i = 1; i < size; i += 2)
	{
		checkInput(list[i]);
		_output += list[i];
		_output += " ";
	}
	_output += "\n";
}

void	PmergeMe::sortDeque()
{
	for (size_t i = 1; i < _sizeList; i += 2)
		_deque.push_back(std::make_pair(std::atoi(_list[i]), std::atoi(_list[i + 1])));
	
	std::deque<std::pair<int, int> >::iterator it;
	for (it = _deque.begin(); it != _deque.end(); it++)
	{
		if ((*it).first > (*it).second)
		{
			int tmp = (*it).first;
			(*it).first = (*it).second;
			(*it).second = tmp;
		}
		std::cout << "1:" << (*it).first << " 2:" << (*it).second << std::endl;
	}
	_output += "Time to process a range of " + _sizeList - 1; 
	_output += "elements with std::deque :";
}

PmergeMe::~PmergeMe(void) {
	std::cout << "PmergeMe Destructor called" << std::endl;
	return ;
}

PmergeMe::PmergeMe(const PmergeMe& obj) {
	(void)obj;
	return ;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& obj) {
	(void)obj;
	return *this;
}