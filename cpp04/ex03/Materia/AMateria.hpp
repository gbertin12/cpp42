/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 12:43:40 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include "AMateria.hpp"
#include "../ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria {

	public:

	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(const AMateria& obj);
	AMateria& operator=(const AMateria& rhs);

	
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
	
	void				setType(std::string type);
	std::string const	&getType() const;

	protected:
	
	std::string _type;
	

};

#endif