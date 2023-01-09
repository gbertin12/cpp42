/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:38:43 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/09 09:21:10 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base*	generate(void)
{
	int i = rand() % 100;
	if (i > 66)
	{
		std::cout << "A" << std::endl;
		return new A();
	}
	if ( i > 33)
	{
		std::cout << "B" << std::endl;
		return new B();
	}
	std::cout << "C" << std::endl;
	return new C();
}

//dynamic cast
void	identify(Base *p)
{
	std::cout << "identify Pointer" << std::endl;
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "C" << std::endl;
	else
		std::cout << "Wrong Cast" << std::endl;
}

void	identify(Base& p)
{
	std::cout << "identify ref" << std::endl;
	try
	{
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) { }
	try
	{
		if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) { std::cerr << "Wrong Cast" << std::endl; }
}

int		main()
{
	srand(time(NULL));
	Base *ptr = generate();
	Base *temp = generate();
	Base &ref = *temp;

	identify(ptr);
	identify(ref);

	delete ptr;
	delete temp;
	
	return (0);
}