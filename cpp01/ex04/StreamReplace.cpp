/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamReplace.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/16 12:59:51 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StreamReplace.hpp"
#include <iostream>
#include <fstream>

StreamReplace::StreamReplace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2) {
	std::cout << "StreamReplace Constructor Called" << std::endl;
	return ;
}

StreamReplace::~StreamReplace(void) {
	std::cout << "StreamReplace Destructor Called" << std::endl;
	return ;
}

void	StreamReplace::replaceOccurance(void)
{
	std::ifstream	ifs(this->_filename.c_str());
	std::string		replace;
	
	replace = this->_filename + ".replace";
	if (!ifs.is_open())
	{
		std::cout << "Error: you don't have access of file" << std::endl;
		return ;
	}
	std::ofstream ofs(replace.c_str());
	if (!ofs.is_open())
	{
		std::cout << "Can't open output file" << std::endl;
		ifs.close();
		return ;
	}
	std::string occurence;
	while(getline(ifs, occurence))
	{
		occurence = searchAndReplace(occurence, this->_s1, this->_s2);
		ofs << occurence << std::endl;
	}
	ifs.close();
	ofs.close();
}