/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:34:49 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/28 18:09:52 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.cpp"
#include "newZombie.cpp"
int main(void)
{
	Zombie *denis;
	
	denis = newZombie("denis");
	denis->announce();
	
	delete denis;
	denis->~Zombie();
}