/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/28 21:42:01 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string.h>
#include <iostream>

class Zombie {
	
	public:

	Zombie(std::string name);
	~Zombie(void);
	
	void	announce(void) const;
	
	private:
	
	std::string _name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif