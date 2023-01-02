/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/30 12:47:19 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Cat.hpp"
#include "AAnimal.hpp"
#include <iostream>

class Cat : public AAnimal
{

	public:

	Cat(void);
	~Cat(void);
	Cat(const Cat& obj);
	Cat& operator=(const Cat& rhs);

	virtual void	makeSound(void);
};

#endif