/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:58 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/28 18:08:06 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.cpp"

Zombie *newZombie(std::string name)
{
	Zombie *newZombie = new Zombie();
	newZombie->setName(name);
	return (newZombie);
}