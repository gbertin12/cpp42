/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/02 10:04:20 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 50; i++)
		this->_materiaLost[i] = NULL;
	std::cout << "Character Constructor called" << std::endl;
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character Destructor called" << std::endl;
}

Character::Character(const Character& obj) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = obj._inventory[i];
}

Character&	Character::operator=(const Character& obj) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = obj._inventory[i];
	return *this;
}

std::string	const& Character::getName() const
{
	return this->_name;
}

void		Character::equip(AMateria* m)
{
	std::cout << "Equip Materia " << std::endl;
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory Full" << std::endl;
}

void		Character::unequip(int idx)
{
	std::cout << "Unequip Materia " << std::endl;
	int i;
	
	if (idx >= 0 && idx <= 4 && this->_inventory[idx])
	{
		for (i = 0; i < 50; i++)
		{
			if (!this->_materiaLost[i])
				break ;
		}
		if (i < 50)
		{
			this->_materiaLost[i] = this->_inventory[idx];
			this->_inventory[idx] = NULL;
			return ;
		}
		else
			std::cout << "Can't unequip" << std::endl;
	}
	else
		std::cout << "This inventory slot is empty" << std::endl;
	
}

void		Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

