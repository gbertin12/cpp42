/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 13:54:03 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

Intern::Intern(void){
std::cout << "Intern Constructor called" << std::endl;
	return ;
}

Intern::~Intern(void) {
	std::cout << "Intern Destructor called" << std::endl;
	return ;
}

Intern::Intern(const Intern& obj) {
	(void)obj;
	return ;
}

Intern&	Intern::operator=(const Intern& obj) {
	(void)obj;
	return *this;
}

AForm*		Intern::makeForm(const std::string &form, const std::string &target) const
{
	std::string	formTitles[3] = {"Shruberry creation", "Robotomy request", "Presidential pardon"};
	int i;
	AForm* newForm = NULL;
	i = 0;
	while (i < 3 && formTitles[0] != form)
		i++;
	switch (i)
	{
		case 0:
			newForm = new ShrubberyCreationForm(target);
			break ;
		case 1:
			newForm = new RobotomyRequestForm(target);
			break ;
		case 2:
			newForm = new PresidentialPardonForm(target);
			break ;
		default:
			throw Intern::BadFormException();
	}
	std::cout << "Intern creates " << newForm->getName() << std::endl;
	return newForm;
}	