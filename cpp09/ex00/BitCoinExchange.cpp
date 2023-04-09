/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/03/30 14:45:50 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <ctime>

BitCoinExchange::BitCoinExchange(void) : _filename("filename") 
{
	std::ifstream	ifs("data.csv");
	std::string		newline;
	std::string		date;
	std::string 	value;
	int				skipFirstLine = 0;
	
	if (!ifs.is_open())
	{
		std::cout << "Error: you don't have access of file" << std::endl;
		return ;
	}
	while (getline(ifs, newline))
	{
		if (skipFirstLine == 0)
		{
			skipFirstLine = 1;
			continue ;
		}
		date = newline.substr(0, newline.find(','));
		value = newline.substr(newline.find(',') + 1, newline.size() - 1);
		float	num = std::strtol(value.c_str(), NULL, 10);
		std::cout << date << " : " << num << std::endl;
		_mapBitcoin.insert(std::pair<std::string, float>(date, num));
	}
	ifs.close();
}

BitCoinExchange::BitCoinExchange(std::string filename) : _filename(filename)
{
	std::ifstream	ifs("data.csv");
	std::string		newline;
	std::string		date;
	std::string 	value;
	int				skipFirstLine = 0;
	
	if (!ifs.is_open())
	{
		std::cout << "Error: you don't have access of file" << std::endl;
		return ;
	}
	while (getline(ifs, newline))
	{
		if (skipFirstLine == 0)
		{
			skipFirstLine = 1;
			continue ;
		}
		date = newline.substr(0, newline.find(','));
		value = newline.substr(newline.find(',') + 1, newline.size() - 1);
		float	num = std::stof(value.c_str());
		_mapBitcoin.insert(std::pair<std::string, float>(date, num));
		//std::cout << _mapBitcoin.rbegin()->first << " : " << _mapBitcoin.rbegin()->second << std::endl;
	}
	ifs.close();
}

BitCoinExchange::~BitCoinExchange(void) {
}

BitCoinExchange::BitCoinExchange(const BitCoinExchange& obj) {
	(void)obj;
	return ;
}

BitCoinExchange&	BitCoinExchange::operator=(const BitCoinExchange& obj) {
	(void)obj;
	return *this;
}

static void get_tm(std::tm& t, const std::string& str) {
    std::istringstream ss(str);
    char sep;
    ss >> t.tm_year >> sep >> t.tm_mon >> sep >> t.tm_mday;
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_sec = 0;
}

float		BitCoinExchange::getValue(std::tm& searchDate)
{
	std::map<std::string, float>::iterator 	it;
	std::map<std::string, float>::iterator 	it2;
	std::tm									tm = {};
	std::tm									tmNext = {};
	std::time_t								searchTime = std::mktime(&searchDate);
	
	it = _mapBitcoin.begin();
	it2 = _mapBitcoin.begin();
	it2++;
	get_tm(tm, it->first);
	std::time_t		time = std::mktime(&tm);
	std::time_t		timeNext;
	// check if date is before first date
	if (searchTime < time)
		return -1;
	it++;
	it2++;
	while (it != _mapBitcoin.end())
	{
		// get lowerDate
		get_tm(tm, it->first);
		time = std::mktime(&tm);
		
		if (it2 != _mapBitcoin.end())
		{
			// get upperDate
			get_tm(tmNext, it2->first);
			timeNext = std::mktime(&tmNext);
			// check if date is between lowerDate and upperDate
			if (searchTime >= time && searchTime < timeNext)
			{
				//std::cout << "date found = " << it->first << " " << it->second << " date next = " << it2->first << std::endl;
				return it->second;
			}
		}
		else
		{
			if (searchTime >= time)
				return it->second;
		}
		it++;
		it2++;
	}
	return -1;
}

void	BitCoinExchange::printOutput()
{
	std::ifstream									ifs(_filename.c_str());
	std::string										newline;
	std::string										date;
	std::string 									value;
	std::tm											tm = {};

	if (!ifs.is_open())
	{
		std::cout << "Error: you don't have access of file" << std::endl;
		return ;
	}
	while (getline(ifs, newline))
	{
		if (newline.find('|') != std::string::npos)
		{
			// parsing line, separate date and value
			date = newline.substr(0, newline.find('|'));
			value = newline.substr(newline.find('|') + 1, newline.size() - 1);
			date.erase(remove_if(date.begin(), date.end(), ::isspace), date.end());
			value.erase(remove_if(value.begin(), value.end(), ::isspace), value.end());
			// check if date or value is empty
			if (date.empty() == false && value.empty() == false)
			{
				//check if date is valid
				get_tm(tm, date);
				//std::cout << "Print date : " << tm.tm_year << " " << tm.tm_mon << " " << tm.tm_mday << std::endl;
				if (tm.tm_mon < 1 || tm.tm_mon > 12 || tm.tm_mday < 1 || tm.tm_mday > 31 || tm.tm_year < 1)
				{
					std::cout << "Error: bad date format => " << date << std::endl;
					continue ;
				}
				else
				{
					float	nbBitcoin = std::stof(value.c_str());
					float	price = getValue(tm);
					
					if (price == -1)
					{
						std::cout << "Error: no price for this date => " << date << std::endl;
						continue ;
					}
					if (nbBitcoin <= 1000 && nbBitcoin > -1)
					{
						// if (price == 0)
						// 	std::cout << date << " => " << value << " = " << price << std::endl;
						// else
						std::cout << date << " => " << nbBitcoin << " = " << nbBitcoin * price << std::endl;
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