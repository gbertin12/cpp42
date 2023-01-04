/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/16 10:25:07 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StreamReplace.hpp"
#include <iostream>
#include <fstream>
#include <string.h>

int	main(int argc, char const *argv[])
{
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		StreamReplace sr(filename, s1, s2);
		sr.replaceOccurance();
	}
	else
		std::cout << "Error : Wrong entry" << std::endl;
	return (0);
}