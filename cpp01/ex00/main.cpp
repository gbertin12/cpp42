/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:34:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/28 21:43:28 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie denis = Zombie("denis");
	Zombie *nils = newZombie("Nils");
	
	denis.announce();
	nils->announce();
	
	randomChump("Zaya");
	
	delete nils;
}