/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 22:23:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/04/09 08:57:34 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <string>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		RPN rpn(argv[1]);
		rpn.calculate();
	}
	return (0);
}