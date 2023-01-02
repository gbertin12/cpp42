/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:07:29 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/02 16:07:41 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat Boss("Bobby", 1);
		std::cout << Boss << std::endl << std::endl;
		Form credentials("credentiels", 20, 4);
		credentials.beSigned(Boss);
		std::cout << credentials << std::endl;
		credentials.beSigned(Boss);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl;
	try
	{
		Bureaucrat Intern("Dobby", 150);
		std::cout << Intern << std::endl;
		Form interview("interview", 50, 4);
		std::cout << interview <<  std::endl;
		interview.beSigned(Intern);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	try
	{
		Form interview("interview", 160, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}