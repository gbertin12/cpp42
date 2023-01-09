/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/09 08:56:30 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include "Convert.hpp"
#include <string>

class Convert {

	public:

	Convert(std::string const value);
	~Convert(void);
	Convert(const Convert& obj);
	Convert& operator=(const Convert& rhs);
	
	int		toInt() const;
	char	toChar() const;
	double	toDouble() const;
	float	toFloat() const;
	
	private:

	std::string	_value;
	int			intValue;
	char		charValue;
	double		doubleValue;
	float		floatValue;	
	int			_idType;
	enum _type	{ typeInt = 1, typeChar, typeFloat, typeDouble};

	class InvalidInputException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Invalid Input detected");
			}
	};

	class NotDisplayableException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Not displayable character");
			}
	};

	class ImpossibleException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Impossible");
			}
	};
};

std::ostream& operator<<(std::ostream& o, const Convert& rhs);

#endif