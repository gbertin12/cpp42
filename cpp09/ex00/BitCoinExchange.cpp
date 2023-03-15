/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:49 by gbertin           #+#    #+#             */
/*   Updated: 2023/03/14 16:15:39 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoinExchange.hpp"
#include <iostream>

BitCoinExchange::BitCoinExchange(void){
std::cout << "BitCoinExchange Constructor called" << std::endl;
	return ;
}

BitCoinExchange::~BitCoinExchange(void) {
	std::cout << "BitCoinExchange Destructor called" << std::endl;
	return ;
}

BitCoinExchange::BitCoinExchange(const BitCoinExchange& obj) {
	return ;
}

BitCoinExchange&	BitCoinExchange::operator=(const BitCoinExchange& obj) {
	return *this;
}