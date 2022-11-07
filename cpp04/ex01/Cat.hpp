/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 16:55:39 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{

	public:

	Cat(void);
	virtual ~Cat(void);
	Cat(const Cat& obj);
	Cat& operator=(const Cat& rhs);

	virtual void	makeSound(void);
	virtual void	addIdea(std::string idea);
	virtual void	printIdeas(void);
	
	private:
	
	Brain	*_brain;
};

#endif