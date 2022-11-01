/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/01 15:22:44 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
int main( void ) {
	Fixed a(10);
	Fixed b(5);
	Fixed c(a + b);
	Fixed d(a - b);
	Fixed e(b * a);
	Fixed f(a / b);
	Fixed z;
	std::cout << z << std::endl;
	std::cout << "[OPERATORS]" << std::endl; 
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c: a + b = " << c << std::endl;
	std::cout << "d: a - b = " << d << std::endl;
	std::cout << "e: b * a = " << e << std::endl;
	std::cout << "f: a / b = " << f << std::endl;
	std::cout << std::endl << "[CONDITIONS]" << std::endl; 
	if (a > b)
		std::cout << "a > b" << std::endl;
	else
		std::cout << "a not superior to b" << std::endl;
	if (a < e)
		std::cout << "a < e" << std::endl;
	else
		std::cout << "a not inferior to e" << std::endl;
	if (b == d)
		std::cout << "d == b" << std::endl;
	else
		std::cout << "d not egual to b" << std::endl;
	if (d == b)
		std::cout << "d <= b" << std::endl;
	else
		std::cout << "d not inferior or equal to b" << std::endl;
	if (d >= b)
		std::cout << "d >= b" << std::endl;
	else
		std::cout << "d not superior or egual to b" << std::endl;
	if (f != e)
		std::cout << "f != e " << std::endl;
	else
		std::cout << "f not different to e" << std::endl;
	const Fixed g(20);
	const Fixed h(30);
	std::cout << std::endl << "[FUNCTIONS]" << std::endl; 
	std::cout << "MIN a b " << Fixed::min(a, b) << std::endl;
	std::cout << "MAX a b " << Fixed::max(a, b) << std::endl;
	std::cout << "g = " << g << " h = " << h << std::endl;
	std::cout << "MIN g h " << Fixed::min(g, h) << std::endl;
	std::cout << "MAX g h " << Fixed::max(g, h) << std::endl;
	std::cout << std::endl << "[INCREMENTATIONS]" << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "++a " << ++a << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "--a " << --a << std::endl;
	std::cout << "a-- " << a-- << std::endl;
	std::cout << "a " << a << std::endl;
}