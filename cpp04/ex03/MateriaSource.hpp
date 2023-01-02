/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/02 07:35:07 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "Materia/AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:

	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(const MateriaSource& obj);
	MateriaSource& operator=(const MateriaSource& rhs);

	void		learnMateria(AMateria* learn);
	AMateria*	createMateria(std::string const & type);
	
	private:
	
	AMateria* _stock[4];

};

#endif