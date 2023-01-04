/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 08:50:39 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 15:23:15 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Materia/AMateria.hpp"
#include "Materia/Ice.hpp"
#include "Materia/Cure.hpp"

int main()
{
	std::cout << "------------------------------" << std::endl;
	std::cout << "CALL CONSTRUCTOR" << std::endl;
	std::cout << "------------------------------" << std::endl << std::endl;
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	AMateria* tmp;
	ICharacter* bob = new Character("bob");
	
	std::cout << "------------------------------" << std::endl;
	std::cout << " LEARN NEW MATERIA" << std::endl;
	std::cout << "------------------------------" << std::endl << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	
	std::cout << "------------------------------" << std::endl;
	std::cout << "Create Materia AND EQUIP TO CHARACTER" << std::endl;
	std::cout << "------------------------------" << std::endl << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->unequip(4);
	me->use(4, *bob);
	me->use(3, *bob);
	me->unequip(3);
	
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	
	std::cout << "------------------------------" << std::endl;
	std::cout << "USE MATERIA" << std::endl;
	std::cout << "------------------------------" << std::endl << std::endl;
	me->use(0, *bob);
	me->use(4, *bob);

	std::cout << "------------------------------" << std::endl;
	std::cout << "UNEQUIP MATERIA" << std::endl;
	std::cout << "------------------------------" << std::endl << std::endl;
	me->unequip(2);
	me->use(2, *bob);
	std::cout << "------------------------------" << std::endl;
	std::cout << "CALL DESTRUCTOR" << std::endl;
	std::cout << "------------------------------" << std::endl << std::endl;
	delete src;
	delete me;
	delete bob;
	return 0;
}