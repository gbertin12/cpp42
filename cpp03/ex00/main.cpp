/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/01 17:30:30 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap marvin("Marvin");

	marvin.attack("wolf");
	marvin.attack("wolf");
	marvin.attack("wolf");
	marvin.attack("wolf");
	marvin.attack("wolf");
	marvin.attack("wolf");
	marvin.attack("wolf");
	marvin.attack("wolf");
	marvin.attack("wolf");
	marvin.attack("wolf");
	marvin.takeDamage(5);
	marvin.beRepaired(3);
	marvin.attack("Spider");
	marvin.takeDamage(8);
	marvin.attack("Pig");
	return (0);
}