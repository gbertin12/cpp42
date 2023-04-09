/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/04/09 09:21:31 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

static void    checkInput(char *nb1, char *nb2)
{
    if (std::atoi(nb1) < 0 || std::atoi(nb2) < 0)
    {
        std::cerr << "Invalid input number" << std::endl;
        exit(0);
    }
}

PmergeMe::PmergeMe(void){
std::cout << "PmergeMe Constructor called" << std::endl;
	return ;
}

PmergeMe::PmergeMe(char **list, size_t size)
{
	std::string unsortedList = "";
	for (size_t i = 1; i < size; i++)
	{
		if (size % 2 == 0 && i == size - 1)
		{
			_last = std::atoi(list[i]);
			break ;
		}
		checkInput(list[i], list[i + 1]);
		unsortedList += list[i];
		unsortedList += " ";
		_vector.push_back(std::make_pair(std::atoi(list[i]), std::atoi(list[i + 1])));
		_deque.push_back(std::make_pair(std::atoi(list[i]), std::atoi(list[i + 1])));
	}
	std::cout << "Before: " << unsortedList << std::endl;
}

PmergeMe::~PmergeMe(void) {
	std::cout << "PmergeMe Destructor called" << std::endl;
	return ;
}

PmergeMe::PmergeMe(const PmergeMe& obj) {
	return ;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& obj) {
	return *this;
}