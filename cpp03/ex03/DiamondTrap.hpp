/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/02 14:09:32 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:

	DiamondTrap(void);
	DiamondTrap(std::string name);
	~DiamondTrap(void);
	DiamondTrap(const DiamondTrap& obj);
	DiamondTrap& operator=(const DiamondTrap& rhs);

	void	whoAmI(void);
	
	private:

	std::string _name;

};

#endif