/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/01 14:55:04 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include "Fixed.hpp"
#include <iostream>

class Fixed {

	public:

	Fixed(void);
	Fixed(int const nb_int);
	Fixed(float const nb_float);
	Fixed(const Fixed& obj);
	Fixed& operator=(const Fixed& rhs);

	~Fixed(void);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;

	bool	operator>(const Fixed& rhs);
	bool	operator<(const Fixed& rhs);
	bool	operator>=(const Fixed& rhs);
	bool	operator<=(const Fixed& rhs);
	bool	operator==(const Fixed& rhs);
	bool	operator!=(const Fixed& rhs);
	
	Fixed	operator+(const Fixed& rhs);
	Fixed	operator-(const Fixed& rhs);
	Fixed	operator*(const Fixed& rhs);
	Fixed	operator/(const Fixed& rhs);

	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);
	
	static float min(Fixed& f1, Fixed& f2);
	static float min(const Fixed& f1, const Fixed& f2);
	static float max(Fixed& f1, Fixed& f2);
	static float max(const Fixed& f1, const Fixed& f2);

	private:

	static int const	frationPart = 8;
	int					_rawBits;

};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);

#endif