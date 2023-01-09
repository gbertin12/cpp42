/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/09 13:49:40 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main(void)
{
	Span span(6);
	std::srand(std::time(NULL));
	try
	{
		span.addNumber(10);
		span.addNumber(23);
		span.addNumber(100);
		span.addNumber(67);
		span.addNumber(2);
		span.addNumber(45);
		span.printVector();
		std::cout << span.longestSpan() << "   " << span.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}