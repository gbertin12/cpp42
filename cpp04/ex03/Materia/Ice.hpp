/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 12:57:26 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "Ice.hpp"
#include "AMateria.hpp"

class Ice : public AMateria {

	public:

	Ice(void);
	~Ice(void);
	Ice(const Ice& obj);
	Ice& operator=(const Ice& rhs);

	AMateria*	clone() const;
	void		use(ICharacter& target);
	
	private:

};

#endif