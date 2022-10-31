/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/10/29 11:04:51 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include "Weapon.hpp"
#include <string.h>
#include <iostream>

class Weapon {

	public:

	Weapon(std::string type);
	~Weapon(void);
	
	std::string	const	&getType(void) const;
	void				setType(std::string type);

	private:
	
	std::string _type;
};

#endif