/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:11:22 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/07 16:24:05 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <cctype>
#include "../headers/PhoneBook.class.hpp"
#include "../headers/Contact.class.hpp"

PhoneBook::PhoneBook(void) {
	this->_nb_contact = 0;
	this->_older = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::add(void) {
	std::string fields[5] = {"First Name : ", "Last Name : ", "Nickname : ", "Phone Number : ", "Darkest Secret : "};
	std::string answer[5];
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter " << fields[i];
		if (!std::getline(std::cin, answer[i]))
		{
			std::cout << std::endl;	
			return ;
		}
		if (answer[i].empty() || this->empty_string(answer[i]))
		{
			std::cout << fields[i] << " field is empty" << std::endl;
			return ;
		}
	}
	if (this->_nb_contact == 8)
	{
		this->_contacts[_older % 8].set_data(answer[0], answer[1], answer[2], answer[3], answer[4]);
		this->_older++;
	}
	else
	{
		this->_contacts[_nb_contact].set_data(answer[0], answer[1], answer[2], answer[3], answer[4]);
		this->_nb_contact++;
	}
	return ;
}

void	PhoneBook::print_in_tab(std::string s) const
{
	if (std::strlen(s.c_str()) == 10)
		std::cout << s.c_str();
	else if (std::strlen(s.c_str()) < 10)
	{
		for (size_t i = 0; i + s.size() != 10; i++)
			std::cout << " ";
		std::cout << s;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << s[i];
		std::cout << ".";
	}
}

bool	PhoneBook::show_contact(void) const {
	if (this->_nb_contact == 0)
	{
		std::cout << "Sorry, you don't have contact" << std::endl;
		return true;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|First Name| last Name| nick Name|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < this->_nb_contact; i++)
	{
		std::cout << "|";
		this->print_in_tab(std::to_string(i + 1));
		std::cout << "|";
		this->print_in_tab(this->_contacts[i].getFirstName());
		std::cout << "|";
		this->print_in_tab(this->_contacts[i].getLastName());
		std::cout << "|";
		this->print_in_tab(this->_contacts[i].getNickName());
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	return (false);
}

void	PhoneBook::start_msg(void) const {
	std::cout << "> WELCOME IN PHONE BOOK" << std::endl;
	std::cout << "> YOU CAN USE THESE COMMANDS : ADD, SEARCH, EXIT" << std::endl;
}

bool	PhoneBook::empty_string(std::string str) const
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isspace(str[i]))
			return (false);
	}
	return (true);
}	

void	PhoneBook::print_contact_info(int index) const 
{
	std::cout << "First Name : " << this->_contacts[index - 1].getFirstName() << std::endl;
	std::cout << "Last Name : " << this->_contacts[index - 1].getLastName() << std::endl;
	std::cout << "Nick Name : " << this->_contacts[index - 1].getNickName() << std::endl;
	std::cout << "Phone Number : " << this->_contacts[index - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << this->_contacts[index - 1].getDarkestSecret() << std::endl;
}

void	PhoneBook::search_contact(void) const 
{
	std::string index;
	int			i;
	
	std::cout << "enter index for more informations : ";
	if (std::getline(std::cin, index))
	{
		std::cout << std::endl;	
		return ;
	}
	if (index.size() == 1)
	{
		if (std::isdigit(index.c_str()[0]))
		{
			i = std::stoi(index);
			if (i < 1)
				std::cout << "This index is negative" << std::endl;
			else if (i > this->_nb_contact && i < 9)
				std::cout << "This index is empty" << std::endl;
			else if (i == 9)
				std::cout << "9 is forbidden" << std::endl;
			if (i < 1 || (i > PhoneBook::_nb_contact && i < 9) || i == 9)
				return ;
			this->print_contact_info(i);
		}
		else
			std::cout << "You must enter a digit" << std::endl;
	}
	else
		std::cout << "You must enter a number between 1 and 8" << std::endl;
	return ;
}