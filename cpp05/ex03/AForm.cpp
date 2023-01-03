/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/02 16:14:37 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

AForm::AForm(std::string name, int gradeForSign, int gradeForExecute) 
	: _name(name), _gradeForSign(gradeForSign), _gradeForExecute(gradeForExecute), _signed(false) {
	std::cout << "AForm Constructor called" << std::endl;
	if (this->_gradeForExecute < 1 || this->_gradeForSign < 1)
		throw AForm::GradeTooHighException();
	else if (this->_gradeForExecute > 150 || this->_gradeForSign > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(std::string name, std::string target, int gradeForSign, int gradeForExecute)
	: _name(name), _target(target), _gradeForSign(gradeForSign), _gradeForExecute(gradeForExecute), _signed(false)
{
	if (this->_gradeForExecute < 1 || this->_gradeForSign < 1)
		throw AForm::GradeTooHighException();
	else if (this->_gradeForExecute > 150 || this->_gradeForSign > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm(void) {
	std::cout << "AForm Destructor called" << std::endl;
	return ;
}

AForm::AForm(const AForm& obj) 
	: _name(obj.getName()), _signed(obj.getSigned()), _gradeForExecute(obj.getGradeForExecute()), _gradeForSign(obj.getGradeForSign()) {
	return ;
}

AForm&				AForm::operator=(const AForm& obj) {
	(void)obj;
	return *this;
}

void				AForm::beSigned(const Bureaucrat& Bureaucrat)
{
	if (this->_signed)
		std::cout << Bureaucrat.getName() << " couldn't sign " << this->getName() << " because this AForm is already sign" << std::endl;
	else
	{
		if (Bureaucrat.getGrade() <= this->_gradeForSign)
		{
			std::cout << Bureaucrat.getName() << " signed " << this->_name << std::endl;
			this->_signed = true;
		}
		else
		{
			std::cout << Bureaucrat.getName() << " couldn't sign " << this->_name << " because his grade is too low" << std::endl;
			throw AForm::GradeTooLowException();
		}
	}
}

void				AForm::execute(const Bureaucrat &executor) const
{

	if (!this->_signed)
		throw AForm::FormNotSignException();
	if (executor.getGrade() > this->_gradeForExecute)
		throw AForm::GradeTooLowException();
}

std::string const	AForm::getName() const
{
	return this->_name;
}

bool				AForm::getSigned() const
{
	return this->_signed;
}

int const			AForm::getGradeForExecute() const
{
	return this->_gradeForExecute;
}

int const			AForm::getGradeForSign() const
{
	return this->_gradeForSign;
}

std::string const	AForm::getTarget() const
{
	return this->_target;
}

std::ostream& operator<<(std::ostream& o, const AForm& rhs)
{
	o << rhs.getName() << " Grade for sign " << rhs.getGradeForSign() << ", Grade for execute " << rhs.getGradeForExecute() << ", Status " << rhs.getSigned();
	return o;
}