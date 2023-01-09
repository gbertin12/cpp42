/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/09 13:41:17 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include "Span.hpp"
#include <vector>

class Span {

	public:

	Span(void);
	Span(unsigned int size);
	~Span(void);
	Span(const Span& obj);
	Span& operator=(const Span& rhs);

	void	addNumber(int value);
	void	printVector();

	int		shortestSpan();
	int		longestSpan();
	
	private:
	std::vector<int>		_data;
	unsigned int			_size;

	class IndexOutOfRangeException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Index out of range");
			}
	};
	
	class ListTooSmallTooException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("The list is too small");
			}
	};
};

#endif