/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 09:47:48 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	public:

	Dog(void);
	~Dog(void);
	Dog(const Dog& obj);
	Dog& operator=(const Dog& rhs);

	virtual void	makeSound(void);
};

#endif