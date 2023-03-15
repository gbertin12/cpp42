/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2023/03/15 15:31:26 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitCoinExchange.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		BitCoinExchange btc(argv[1]);
		btc.printOutput();
	}
	else
		std::cout << "./btc <filename" << std::endl;
	return (0);
}