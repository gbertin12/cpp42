/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:38:53 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 10:59:43 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_H
# define WRONGDOG_H

#include "WrongDog.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

class WrongDog : public WrongAnimal
{

	public:

	WrongDog(void);
	~WrongDog(void);
	WrongDog(const WrongDog& obj);
	WrongDog& operator=(const WrongDog& rhs);

	void	makeSound();
};

#endif