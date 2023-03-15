/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/03/15 15:24:37 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include "BitCoinExchange.hpp"
#include <map>
#include <string>

class BitCoinExchange {

	public:

	BitCoinExchange(void);
	BitCoinExchange(std::string filename);
	~BitCoinExchange(void);

	BitCoinExchange(const BitCoinExchange& obj);
	BitCoinExchange& operator=(const BitCoinExchange& rhs);

	void	printOutput();

	private:

	std::map<std::string, int>	_mapBitcoin;
	const std::string					_filename;

};

#endif