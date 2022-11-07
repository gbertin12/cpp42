/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 09:47:53 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{

	public:

	Cat(void);
	~Cat(void);
	Cat(const Cat& obj);
	Cat& operator=(const Cat& rhs);

	virtual void	makeSound(void);
};

#endif