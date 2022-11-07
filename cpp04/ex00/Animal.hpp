/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 09:47:55 by gbertin          ###   ########.fr       */
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
	~Animal(void);
	Animal(const Animal& obj);
	Animal& operator=(const Animal& rhs);

	virtual void	makeSound(void);
	std::string		getType(void);
	
	protected:

	std::string _type;

};

#endif