/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/04/19 07:51:57 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <stack>

RPN::RPN(void) : _expression("") {
}

RPN::RPN(std::string expression) : _expression(expression){
} 

RPN::~RPN(void) {
	return ;
}

RPN::RPN(const RPN& obj) {
	this->_expression = obj._expression;
	this->_stack = obj._stack;
	return ;
}

RPN&	RPN::operator=(const RPN& obj) {
	this->_expression = obj._expression;
	this->_stack = obj._stack;
	return *this;
}

float	RPN::get(int i)
{
	std::list<float>::iterator it = _stack.begin();
	for (int j = 0; j < i; j++)
		it++;
	return *it;
}

int  RPN::makeOperation(std::string op)
{
	float a;
	float b;
	
	if (_stack.size() < 2)
		return 0;
	
	a = get(_stack.size() - 2);
	b = get(_stack.size() - 1);
	_stack.pop_back();
	_stack.pop_back();
	if (op == "+")
		a = a + b;
	else if (op == "-")
		a = a - b;
	else if (op == "*")
		a = a * b;
	else if (op == "/")
	{
		if (b == 0)
			a = 0;
		else
			a = a / b;
	}
	_stack.push_back(a);
	return 1;
}

void	RPN::calculate() 
{
	for (size_t i = 0; i < _expression.length(); i++)
	{
		if (_expression[i] == ' ')
			continue ;
		else if (_expression[i] == '+' || _expression[i] == '-' || _expression[i] == '*' || _expression[i] == '/')
		{
			if (makeOperation(_expression.substr(i, 1)) == 0)
			{
				std::cout << "Invalid expression" << std::endl;
				return ;
			}
		}
		else if (_expression[i] >= '0' && _expression[i] <= '9')
			_stack.push_back(_expression[i] - '0');
		else
		{
			std::cout << "Invalid expression" << std::endl;
			return ;
		}
	}
	printStack();
}

void 	RPN::printStack()
{
	for (size_t i = 0; i < _stack.size(); i++)
		std::cout << get(i) << " ";
	std::cout << std::endl;
}