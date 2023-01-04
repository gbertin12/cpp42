/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 10:24:20 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(const FragTrap& obj);
	FragTrap& operator=(const FragTrap& rhs);
	
	void	attack(const std::string &target);
	void	setAttackDamage(void);
	int		getAttackDamage(void) const;
	void	highFivesGuys(void);
};

#endif