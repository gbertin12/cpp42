/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/02 16:05:59 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(std::string name, int gradeForSign, int gradeForExecute) 
	: _name(name), _gradeForSign(gradeForSign), _gradeForExecute(gradeForExecute), _signed(false) {
	std::cout << "Form Constructor called" << std::endl;
	if (this->_gradeForExecute < 1 || this->_gradeForSign < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeForExecute > 150 || this->_gradeForSign > 150)
	throw Form::GradeTooLowException();
	return ;
}

Form::~Form(void) {
	std::cout << "Form Destructor called" << std::endl;
	return ;
}

Form::Form(const Form& obj) 
	: _name(obj.getName()), _signed(obj.getSigned()), _gradeForExecute(obj.getGradeForExecute()), _gradeForSign(obj.getGradeForSign()) {
	return ;
}

Form&				Form::operator=(const Form& obj) {
	(void)obj;
	return *this;
}

void				Form::beSigned(const Bureaucrat& Bureaucrat)
{
	if (this->_signed)
		std::cout << Bureaucrat.getName() << " couldn't sign " << this->getName() << " because this form is already sign" << std::endl;
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
			throw Form::GradeTooLowException();
		}
	}
}

std::string const	Form::getName() const
{
	return this->_name;
}

bool				Form::getSigned() const
{
	return this->_signed;
}

int const			Form::getGradeForExecute() const
{
	return this->_gradeForExecute;
}

int const			Form::getGradeForSign() const
{
	return this->_gradeForSign;
}

std::ostream& operator<<(std::ostream& o, const Form& rhs)
{
	o << rhs.getName() << " Grade for sign " << rhs.getGradeForSign() << ", Grade for execute " << rhs.getGradeForExecute() << ", Status " << rhs.getSigned();
	return o;
}