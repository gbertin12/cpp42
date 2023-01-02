/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/30 12:46:55 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Dog.hpp"
#include "AAnimal.hpp"
#include <iostream>

class Dog : public AAnimal
{
	public:

	Dog(void);
	~Dog(void);
	Dog(const Dog& obj);
	Dog& operator=(const Dog& rhs);

	virtual void	makeSound(void);
};

#endif