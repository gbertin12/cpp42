/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 13:25:13 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyForm", target, 145, 137) {
	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyForm", "default", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm(obj) {
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	this->_signed = obj._signed;
	return *this;
}

void					ShrubberyCreationForm::makeAction(const Bureaucrat &executor) const
{
	this->AForm::execute(executor);
	std::string namefile = this->getTarget() + "_shrubbery";
	std::ofstream ofs(namefile.c_str());
	if (!ofs.is_open())
		throw ShrubberyCreationForm::CantOpenFileException();
	ofs << "	   *    *  ()   *  * " << std::endl;
	ofs << "*        * /\\         * " << std::endl;
	ofs << "      *   /i\\    *  * " << std::endl;
	ofs << "    *     o/\\  *      * " << std::endl;
	ofs << " *       ///\\i\\    * " << std::endl;
	ofs << "     *   /*/o\\  *    * " << std::endl;
	ofs << "   *    /i//\\*\\      * " << std::endl;
	ofs << "        /o/*\\i\\   * " << std::endl;
	ofs << "  *    //i//o\\\\     * " << std::endl;
	ofs << "    * /*////\\\\i\\* " << std::endl;
	ofs << " *    //o//i\\*\\\\   * " << std::endl;
	ofs << "   * /i///*/\\\\\\o\\   * " << std::endl;
	ofs << "  *    *   ||     * * " << std::endl;
	
}