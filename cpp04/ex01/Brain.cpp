/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 16:38:54 by gbertin          ###   ########.fr       */
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
	return ;
}

Brain&	Brain::operator=(const Brain& obj) {
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