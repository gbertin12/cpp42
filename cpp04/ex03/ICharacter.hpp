/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:05:13 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/02 09:02:03 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

#include <iostream>
#include "Materia/AMateria.hpp"

class ICharacter;
class AMateria;

class ICharacter
{
	public:
	
	virtual ~ICharacter() {}
	
	virtual std::string const & getName() const = 0;
	
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif