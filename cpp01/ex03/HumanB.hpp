/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/29 10:53:46 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string.h>
#include <iostream>

class HumanB {

	public:

	HumanB(std::string name);
	~HumanB(void);
	
	void	attack() const;
	void	setWeapon(Weapon &weapon);
	
	private:

	Weapon		*_weapon;
	std::string	_name;
};

#endif