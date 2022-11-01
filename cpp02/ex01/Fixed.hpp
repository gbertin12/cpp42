/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/01 09:34:16 by gbertin          ###   ########.fr       */
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
	Fixed& operator=(const Fixed& obj);

	~Fixed(void);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
	
	private:

	static int const	frationPart = 8;
	int					_rawBits;

};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);

#endif