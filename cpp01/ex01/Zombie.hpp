/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/29 09:16:06 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string.h>
#include <iostream>

class Zombie {
	
	public:

	Zombie(void);
	~Zombie(void);
	
	void	announce(void) const;
	void	setName(std::string name);
	
	private:
	
	std::string _name;
};

Zombie	*zombieHorde(int n, std::string name);

#endif