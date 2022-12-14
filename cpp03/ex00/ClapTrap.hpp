/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/16 16:15:42 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ClapTrap {

	public:

	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap& obj);
	ClapTrap& operator=(const ClapTrap& rhs);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	int 		getHitPoints() const;
	int 		getEnergyPoints() const;
	int 		getAttackDamage() const;
	std::string getName() const;

	private:

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

};

#endif