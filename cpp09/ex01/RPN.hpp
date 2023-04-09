/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/04/09 08:53:41 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

#include "RPN.hpp"
#include <list>
#include <string>

class RPN {

	public:

	RPN(void);
	RPN(std::string expression);
	~RPN(void);
	RPN(const RPN& obj);
	RPN& operator=(const RPN& rhs);

	void		calculate();
	void		printStack();
	float		get(int index);
	int			makeOperation(std::string op);

	private:
	
	std::list<float>			_stack;
	std::string					_expression;
};

#endif