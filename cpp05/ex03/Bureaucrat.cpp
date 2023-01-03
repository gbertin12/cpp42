/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/03 08:27:34 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrate Constructor called" << std::endl;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowExeception();
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrate Destructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
	this->_grade = obj.getGrade();
	return ;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj) {
	this->_grade = obj.getGrade();
	return *this;
}

std::string const		Bureaucrat::getName() const
{
	return this->_name;
}

int				Bureaucrat::getGrade() const
{
	return this->_grade;
}

void			Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void			Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowExeception();
	else
		this->_grade++;
}

void			Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.makeAction(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}