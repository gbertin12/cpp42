/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 13:06:12 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class Form {

	public:

	Form(std::string name, int gradeForSign, int gradeForExecute);
	~Form(void);
	Form(const Form& obj);
	Form& operator=(const Form& rhs);

	void			beSigned(const Bureaucrat& bureaucrat);
	
	std::string const		getName() const;
	bool					getSigned() const;
	int 					getGradeForSign() const;
	int 					getGradeForExecute() const;

	private:
	
	std::string const	_name;
	bool				_signed;
	int const			_gradeForSign;
	int const			_gradeForExecute;

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

};

std::ostream& operator<<(std::ostream& o, const Form& rhs);


#endif