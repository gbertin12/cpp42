/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:34:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/28 22:14:17 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(5, "James");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
}