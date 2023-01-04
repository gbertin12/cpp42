/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 12:57:14 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "Cure.hpp"
#include "AMateria.hpp"

class Cure : public AMateria {

	public:

	Cure(void);
	~Cure(void);
	Cure(const Cure& obj);
	Cure& operator=(const Cure& rhs);

	AMateria*	clone() const;
	void		use(ICharacter& target);

	private:

};

#endif