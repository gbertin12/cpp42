/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/04/10 14:15:12 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <cstdlib>

static void    checkInput(char *nb)
{
    if (std::atoi(nb) == 0)
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
	//make pair and add too container deque
	for (size_t i = 1; i < _sizeList; i += 2)
		_deque.push_back(std::make_pair(std::atoi(_list[i]), std::atoi(_list[i + 1])));
	
	std::deque<std::pair<int, int> >::iterator it;
	// swap element on each pair if first > second
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
	
	// sort pair by biggest element of each pair
	
	// create final tab and tmp tab
	std::deque<int> finalTab;
	std::deque<int> tmpTab;
	// add smaller element in tmpTab and biggest element in finalTab
	for (it = _deque.begin(); it != _deque.end(); it++)
	{
		tmpTab.insert((*it).first);
	}

	// insert 
	_output += "Time to process a range of "; 
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