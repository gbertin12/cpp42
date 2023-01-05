/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/05 07:48:18 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter {

	public:

	Character(std::string name);
	virtual ~Character(void);
	Character(const Character& obj);
	Character& operator=(const Character& rhs);

	void		equip(AMateria* m);
	void		unequip(int idx);
	void		use(int idx, ICharacter& target);
	std::string const &getName() const;

	private:
	
	std::string _name;
	AMateria*	_inventory[4];
	AMateria*	_materiaLost[50];
	

};

#endif