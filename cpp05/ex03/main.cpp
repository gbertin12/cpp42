/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:07:29 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/05 08:31:08 by gbertin          ###   ########.fr       */
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

	AForm* shrubbery = NULL;
	AForm* presidential = NULL;
	AForm* robotomy = NULL;
	AForm* badForm = NULL;
	try
	{
		shrubbery = intern.makeForm("Shruberry creation", "Garden");
		robotomy = intern.makeForm("Robotomy request", "Julio");
		presidential = intern.makeForm("Presidential pardon", "Bobby");
		shrubbery->beSigned(arthur);
		robotomy->beSigned(arthur);
		presidential->beSigned(arthur);
		std::cout << shrubbery << std::endl;
		arthur.executeForm(*shrubbery);
		arthur.executeForm(*robotomy);
		arthur.executeForm(*presidential);
		badForm = intern.makeForm("Bad format", "Gypsy");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete shrubbery;
	delete presidential;
	delete robotomy;
	return (0);
}