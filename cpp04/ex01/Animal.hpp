/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 16:55:28 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include "Animal.hpp"
#include <iostream> 

class Animal {

	public:

	Animal(void);
	Animal(std::string	type);
	virtual ~Animal(void);
	Animal(const Animal& obj);
	Animal& operator=(const Animal& rhs);

	virtual void	makeSound(void);
	std::string		getType(void);
	virtual void	addIdea(std::string idea);
	virtual void	printIdeas(void);
	
	protected:

	std::string _type;

};

#endif