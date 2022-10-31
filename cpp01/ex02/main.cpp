/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:24:02 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/28 22:35:35 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "ADRESSE" << std::endl;
	std::cout << &str << std::endl;
	std::cout << strPTR << std::endl;
	std::cout << &strREF << std::endl << std::endl;
	
	std::cout << "VALEUR" << std::endl;
	std::cout << str << std::endl;
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl;	
}