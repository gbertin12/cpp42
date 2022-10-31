/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamReplace.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/30 08:05:26 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StreamReplace.hpp"
#include <iostream>
#include <fstream>

StreamReplace::StreamReplace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2) {
	return ;
}

StreamReplace::~StreamReplace(void) {
	std::cout << "StreamReplace was instantiated" << std::endl;
	return ;
}

void	StreamReplace::replaceOccurance(void)
{
	std::ifstream	ifs(this->_filename);
	int				index;
	
	if (ifs.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "Error: File is empty or you don't have access !" << std::endl;
		return ;
	}
	std::ofstream ofs("outfile");
	if (!ofs.is_open())
	{
		std::cout << "Can't opn output file" << std::endl;
		return ;
	}
	std::string occurence;
	while(getline(ifs, occurence))
	{
		occurence = searchAndReplace(occurence, this->_s1, this->_s2);
		std::cout << occurence << std::endl;
		ofs << occurence << std::endl;
	}
	ifs.close();
	ofs.close();
	
}