/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:07:29 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/03 10:00:58 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat Boss("Bobby", 1);
		std::cout << Boss << std::endl << std::endl;
		PresidentialPardonForm presidential("Arthur Dent");
		presidential.beSigned(Boss);
		std::cout << presidential << std::endl;
		Boss.executeForm(presidential);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	try
	{
		Bureaucrat Intern("Dobby", 150);
		std::cout << Intern << std::endl;
		ShrubberyCreationForm shruberry("Garden");
		std::cout << shruberry <<  std::endl;
		shruberry.beSigned(Intern);
		Intern.executeForm(shruberry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	try
	{
		Bureaucrat Steve("Steve", 50);
		std::cout << Steve << std::endl;
		RobotomyRequestForm robotomyRequest("Roboto");
		std::cout << robotomyRequest << std::endl;
		robotomyRequest.beSigned(Steve);
		Steve.executeForm(robotomyRequest);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}