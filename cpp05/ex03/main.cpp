/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:07:29 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/03 10:42:27 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat arthur("Arthur Dent", 5);
	Bureaucrat bobby("bobby", 45);
	Bureaucrat julio("Julio", 137);

	std::cout << arthur << std::endl;
	std::cout << bobby << std::endl;
	std::cout << julio << std::endl;

	Intern intern;

	AForm* shrubbery;
	AForm* presidential;
	AForm* robotomy;
	AForm* badForm;
	try
	{
		shrubbery = intern.makeForm("Shrubbery creation", "Garden");
		presidential = intern.makeForm("Presidential pardon", "Bobby");
		robotomy = intern.makeForm("Robotomy request", "Julio");
		badForm = intern.makeForm("Bad format", "Gypsy");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << std::endl;
	try
	{
		shrubbery->beSigned(arthur);
		std::cout << shrubbery << std::endl;
		arthur.executeForm(*shrubbery);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}