/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/29 11:07:04 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string.h>
#include <iostream>

class HumanA {

	public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	
	void	attack();

	private:
	
	Weapon		&_weapon;
	std::string	_name;
};

#endif