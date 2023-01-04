/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 13:12:07 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {

	public:

	AForm(std::string name, int gradeForSign, int gradeForExecute);
	AForm(std::string name, std::string target, int gradeForSign, int gradeForExecute);
	~AForm(void);
	AForm(const AForm& obj);
	
	AForm& operator=(const AForm& rhs);

	virtual void			beSigned(const Bureaucrat& bureaucrat);
	virtual void			execute(const Bureaucrat &executor) const;
	virtual void			makeAction(const Bureaucrat &executor) const = 0; 
	
	std::string 			getName() const;
	bool					getSigned() const;
	int						getGradeForSign() const;
	int						getGradeForExecute() const;
	std::string 			getTarget() const;

	protected:
	
	std::string const	_name;
	bool				_signed;
	int const			_gradeForSign;
	int const			_gradeForExecute;
	std::string const 	_target;

	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw()
			{
				return ("Grade too high");
			}
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw()
			{
				return ("Grade too low");
			}
	};

	class FormNotSignException : public std::exception {
		public:
			virtual const char *what() const throw()
			{
				return ("The Form must be sign before execution !");
			}
	};
};

std::ostream& operator<<(std::ostream& o, const AForm& rhs);


#endif