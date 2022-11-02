/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/01 07:41:12 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include "Fixed.hpp"

class Fixed {

	public:

	Fixed(void);
	Fixed(const Fixed& obj);
	Fixed& operator=(const Fixed& obj);

	~Fixed(void);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	private:

	static int const	frationPart = 8;
	int					_rawBits;

};

#endif