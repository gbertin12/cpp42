/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 13:32:59 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyForm", "default", 72, 45) {
std::cout << "RobotomyRequestForm Constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyForm", target, 72, 45)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj) {
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	this->_signed = obj._signed;
	return *this;
}

void					RobotomyRequestForm::makeAction(const Bureaucrat &executor) const
{
	this->AForm::execute(executor);
	srand((int)time(0));
	std::cout << "* drill sounds *" << std::endl;
	if ((rand() % 100 + 1) < 50)
		std::cout << "Successful robotomy for " << executor.getName() << std::endl;
	else
		std::cout << "Failure roboty for " << executor.getName() << std::endl;
}