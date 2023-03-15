/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/03/14 16:15:58 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include "BitCoinExchange.hpp"

class BitCoinExchange {

	public:

	BitCoinExchange(void);
	~BitCoinExchange(void);
	BitCoinExchange(const BitCoinExchange& obj);
	BitCoinExchange& operator=(const BitCoinExchange& rhs);

	private:

};

#endif