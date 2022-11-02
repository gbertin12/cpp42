/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/02 13:03:57 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ClapTrap {

	public:

	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap& obj);
	ClapTrap& operator=(const ClapTrap& rhs);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printInfo(void);
	
	protected:
	
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

};

#endif