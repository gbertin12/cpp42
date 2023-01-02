/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:07:29 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/02 15:34:33 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Boss("Bobby", 1);
		std::cout << Boss << std::endl;
		Boss.incrementGrade();
		Bureaucrat Intern("Dobby", 150);
		std::cout << Intern << std::endl;
		Intern.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat Intern("Dobby", 150);
		std::cout << Intern << std::endl;
		Intern.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}