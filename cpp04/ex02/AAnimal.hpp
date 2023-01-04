/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/04 10:55:51 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

#include "AAnimal.hpp"
#include <iostream>

class AAnimal {

	public:

	AAnimal(void);
	AAnimal(std::string type);
	virtual ~AAnimal(void);
	AAnimal(const AAnimal& obj);
	AAnimal& operator=(const AAnimal& rhs);

	virtual void	makeSound(void) = 0;
	std::string		getType(void);
	
	protected:

	std::string _type;

};

#endif