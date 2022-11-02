/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/02 11:17:29 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap 
{

	public:

	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap(const ScavTrap& obj);
	ScavTrap& operator=(const ScavTrap& rhs);

	void	attack(const std::string &target);
	void	guardGate(void);

};


#endif