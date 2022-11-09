/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:47:50 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/07 16:03:28 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	std::string s;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			s = argv[i];
			for(size_t j = 0; j < s.size(); j++)
				std::cout << (char)std::toupper(s[j]);
		}
		std::cout << std::endl;
	}
	return (0);
}