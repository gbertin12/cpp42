/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/04/11 05:27:52 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <cstdlib>
#include <sys/time.h>

PmergeMe::PmergeMe(void){
std::cout << "PmergeMe Constructor called" << std::endl;
	return ;
}

PmergeMe::~PmergeMe(void) {
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

static void    checkInput(char *nb)
{
    if (std::atoi(nb) < 0)
    {
        std::cerr << "Invalid input number" << std::endl;
		std::cout << nb << std::endl;
        exit(0);
    }
}

PmergeMe::PmergeMe(char **list, size_t size) : _list(list), _sizeList(size), _last(0), _odd(false)
{
	_output = "Before: ";
	if (_sizeList % 2 == 0)
	{
		checkInput(list[_sizeList -1]);
		_last = std::atoi(list[_sizeList - 1]);
		_list[_sizeList - 1] = NULL;
		_sizeList--;
		_odd = true;
	}
	for (size_t i = 1; i < _sizeList; i++)
	{
		checkInput(list[i]);
		_output += list[i];
		_output += " ";
	}
	_output += "\n";
}

template <typename T>
static void sortPairsByBiggestElement(T &container)
{
	for (size_t i = 1; i < container.size(); i++)
	{
		for (size_t j = 0; j < container.size() - i; j++)
		{
			if (container[j].second > container[j + 1].second)
			{
				std::pair<int, int> tmp = container[j];
				container[j] = container[j + 1];
				container[j + 1] = tmp;
			}
		}
	}
}

void	PmergeMe::sortDeque()
{
	std::deque<int> tmpTab;
	// add smaller element in tmpTab and biggest element in finalTab
	_dequeSorted.push_back(_deque[0].first);
	_dequeSorted.push_back(_deque[0].second);
	for (size_t i = 1; i < _deque.size(); i++)
	{
		tmpTab.push_back((_deque[i]).first);
		_dequeSorted.push_back((_deque[i]).second);
	}
	// insert smaller element in finalTab
	for (size_t i = 0; i < tmpTab.size(); i++)
	{
		for (size_t j = 0; j < _dequeSorted.size(); j++)
		{
			if (_odd)
			{
				if (_last < _dequeSorted[j])
				{
					_dequeSorted.insert(_dequeSorted.begin() + j, _last);
					_odd = false;
				}
			}
			if (tmpTab[i] < _dequeSorted[j])
			{
				_dequeSorted.insert(_dequeSorted.begin() + j, tmpTab[i]);
				break;
			}
		}
	}
	// update output
	// _output += "After: ";
	// for (size_t i = 0; i < finalTab.size(); i++)
	// {
	// 	_output += std::to_string(finalTab[i]);
	// 	_output += " ";
	// }
	// _output += "\n";
}

void	PmergeMe::sortVector()
{
	std::vector<int> tmpTab;
	// add smaller element in tmpTab and biggest element in finalTab
	_vectorSorted.push_back(_vector[0].first);
	_vectorSorted.push_back(_vector[0].second);
	for (size_t i = 1; i < _vector.size(); i++)
	{
		tmpTab.push_back((_vector[i]).first);
		_vectorSorted.push_back((_vector[i]).second);
	}
	// insert smaller element in finalTab
	for (size_t i = 0; i < tmpTab.size(); i++)
	{
		for (size_t j = 0; j < _vectorSorted.size(); j++)
		{
			if (_odd)
			{
				if (_last < _vectorSorted[j])
				{
					_vectorSorted.insert(_vectorSorted.begin() + j, _last);
					_odd = false;
				}
			}
			if (tmpTab[i] < _vectorSorted[j])
			{
				_vectorSorted.insert(_vectorSorted.begin() + j, tmpTab[i]);
				break;
			}
		}
	}
}


void	PmergeMe::handleDeque()
{
	struct timeval start, end;
	long sec, micro;
	
	gettimeofday(&start, NULL);
	//make pair and add too container deque
	for (size_t i = 1; i < _sizeList; i += 2)
	{
		int a = std::atoi(_list[i]);
		int b = std::atoi(_list[i + 1]);
		if (a > b)
			_deque.push_back(std::make_pair(b, a));
		else
			_deque.push_back(std::make_pair(a, b));
	}
	// sort pair by biggest element of each pair
	sortPairsByBiggestElement(_deque);
	sortDeque();
	gettimeofday(&end, NULL);
    sec = end.tv_sec - start.tv_sec;
    micro = end.tv_usec - start.tv_usec;
    long diff = (sec / 1000000) + (micro);
	_output += "Time to process a range of " + std::to_string(_sizeList - 1) + " elements with std::deque : " + std::to_string(diff) + " microseconds\n"; 
}

void PmergeMe::handleVector()
{
	struct timeval start, end;
	long sec, micro;
	
	gettimeofday(&start, NULL);
	//make pair and add too container deque
	for (size_t i = 1; i < _sizeList; i += 2)
	{
		int a = std::atoi(_list[i]);
		int b = std::atoi(_list[i + 1]);
		if (a > b)
			_vector.push_back(std::make_pair(b, a));
		else
			_vector.push_back(std::make_pair(a, b));
	}
	// sort pair by biggest element of each pair
	sortPairsByBiggestElement(_vector);
	// create final tab and tmp tab
	sortVector();
	gettimeofday(&end, NULL);
    sec = end.tv_sec - start.tv_sec;
    micro = end.tv_usec - start.tv_usec;
    long diff = (sec / 1000000) + (micro);
	_output += "Time to process a range of " + std::to_string(_sizeList - 1) + " elements with std::vector : " + std::to_string(diff) + " microseconds\n"; 
}

void	PmergeMe::output()
{
	std::cout << _output << std::endl;
}
