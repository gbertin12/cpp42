/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/03 10:07:47 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include "Intern.hpp"
#include "AForm.hpp"

class Intern {

	public:

	Intern(void);
	~Intern(void);
	Intern(const Intern& obj);
	Intern& operator=(const Intern& rhs);

	AForm*	makeForm(const std::string &form, const std::string &target) const;

	class BadFormException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Bad form title");
			}
	};
	
	private:

};

#endif