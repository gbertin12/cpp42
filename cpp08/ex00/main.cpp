/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/09 11:58:52 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

void print(int i)
{
	std::cout << i << std::endl;
}

int	main(void)
{
	std::vector<int> vec;
	
	for(int i = 0; i < 40; i++)
		vec.push_back(i);
	try
	{
		std::vector<int>::iterator iterator = easyFind(vec, 32);
		for_each(iterator, vec.end(), print);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::iterator iterator = easyFind(vec, 70);
		for_each(iterator, vec.end(), print);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}