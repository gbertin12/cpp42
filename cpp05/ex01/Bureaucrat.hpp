/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/02 15:47:50 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRATE_H
# define BUREAUCRATE_H

#include "Bureaucrat.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

class Bureaucrat {

	public:

	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat& obj);
	Bureaucrat& operator=(const Bureaucrat& rhs);

	std::string const	getName() const;
	int			getGrade() const;

	void		incrementGrade();
	void		decrementGrade();

	private:
		
	std::string const 	_name;
	int				_grade;

	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw()
			{
				return ("Grade too high");
			}
	};

	class GradeTooLowExeception : public std::exception {
		public:
			virtual const char *what() const throw()
			{
				return ("Grade too low");
			}
	};

};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif