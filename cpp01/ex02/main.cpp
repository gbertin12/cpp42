/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:24:02 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/07 11:27:49 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;
	//std::string &strBADREF;

	std::cout << "ADRESSE" << std::endl;
	std::cout << &str << std::endl;
	std::cout << strPTR << std::endl;
	std::cout << &strREF << std::endl << std::endl;
	
	std::cout << "VALEUR" << std::endl;
	std::cout << str << std::endl;
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl << std::endl;

	*strPTR = "YOUYOU";

	std::cout << "VALEUR" << std::endl;
	std::cout << str << std::endl;
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl << std::endl;

	std::string str2 = "NEW BRAIN";
	strPTR = &str2;
	//&strREF = str2;

	std::cout << "ADRESSE" << std::endl;
	std::cout << &str << std::endl;
	std::cout << strPTR << std::endl;
	std::cout << &strREF << std::endl << std::endl;
	
	std::cout << "VALEUR" << std::endl;
	std::cout << str << std::endl;
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl << std::endl;
}