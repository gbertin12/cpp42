/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 10:53:48 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
	this->_index = 0;
	std::cout << "Brain Constructor called" << std::endl;
	return ;
}

Brain::~Brain(void) {
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain& obj) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	this->_index = obj._index;
	return ;
}

Brain&	Brain::operator=(const Brain& obj) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	this->_index = obj._index;
	return *this;
}

void	Brain::addIdea(std::string idea)
{
	if (this->_index < 100)
	{
		this->_ideas[this->_index] = idea;
		this->_index++;
	}
	else
		std::cout << "You add maximal ideas !" << std::endl;
}

int		Brain::getIndex(void) {
	return this->_index;
}

std::string Brain::getIdeaById(int id) {
	return this->_ideas[id];
}