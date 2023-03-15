/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/03/15 16:03:21 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

BitCoinExchange::BitCoinExchange(void) : _filename("filename") 
{
	std::ifstream	ifs("data.csv");
	std::string		newline;
	std::string		date;
	std::string 	value;
	
	if (!ifs.is_open())
	{
		std::cout << "Error: you don't have access of file" << std::endl;
		return ;
	}
	while (getline(ifs, newline))
	{
		date = newline.substr(0, newline.find(','));
		value = newline.substr(newline.find(',') + 1, newline.size() - 1);
		
		long	num = std::strtol(value.c_str(), NULL, 10);
		std::cout << date << " : " << num << std::endl;
		_mapBitcoin.insert(std::pair<std::string, int>(date, num));
	}
	ifs.close();
}

BitCoinExchange::BitCoinExchange(std::string filename) : _filename(filename)
{
	std::ifstream	ifs("data.csv");
	std::string		newline;
	std::string		date;
	std::string 	value;
	
	if (!ifs.is_open())
	{
		std::cout << "Error: you don't have access of file" << std::endl;
		return ;
	}
	while (getline(ifs, newline))
	{
		date = newline.substr(0, newline.find(','));
		value = newline.substr(newline.find(',') + 1, newline.size() - 1);
		long	num = std::strtol(value.c_str(), NULL, 10);
		std::cout << date << " : " << value << std::endl;
		_mapBitcoin.insert(std::pair<std::string, int>(date, num));
	}
	std::cout << "end constructor" << std::endl;
	ifs.close();
}

BitCoinExchange::~BitCoinExchange(void) {
	std::cout << "BitCoinExchange Destructor called" << std::endl;
}

BitCoinExchange::BitCoinExchange(const BitCoinExchange& obj) {
	(void)obj;
	return ;
}

BitCoinExchange&	BitCoinExchange::operator=(const BitCoinExchange& obj) {
	(void)obj;
	return *this;
}

void	BitCoinExchange::printOutput()
{
	std::ifstream									ifs(_filename.c_str());
	std::string										newline;
	std::string										date;
	std::string 									value;
	std::map<std::string, int>::iterator 			it;

	if (!ifs.is_open())
	{
		std::cout << "Error: you don't have access of file" << std::endl;
		return ;
	}
	while (getline(ifs, newline))
	{
		if (newline.find('|') != std::string::npos)
		{
			date = newline.substr(0, newline.find('|'));
			value = newline.substr(newline.find('|') + 1, newline.size() - 1);
			date.erase(remove_if(date.begin(), date.end(), ::isspace), date.end());
			value.erase(remove_if(value.begin(), value.end(), ::isspace), value.end());
			if (date.empty() == false && value.empty() == false)
			{
				it = _mapBitcoin.find(date);
				if (it == _mapBitcoin.end())
					std::cout << "Error: Date not found in database : " << date << std::endl;
				else 
				{
					char 	*end;
					long	nbBitcoin = std::strtol(value.c_str(), &end, 10);
					
					if (*end == '\0' &&  nbBitcoin <= 1000 && nbBitcoin > 0)
					{
						std::cout << date << " => " << value << " = " << nbBitcoin * it->second << std::endl;
					}
					else if (nbBitcoin > 1000)
						std::cout << "Error: too large a number" << std::endl;
					else if (nbBitcoin < 0 )
						std::cout << "Error: not a positive number" << std::endl;
				}	
			}
			else 
				std::cout << "Error: bad input => " << newline << std::endl;
		}
		else
			std::cout << "Error: bad input => " << newline << std::endl;
	}
	ifs.close();
}