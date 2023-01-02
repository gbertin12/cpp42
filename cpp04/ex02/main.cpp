/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/12/30 12:55:37 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Dog *i = new Dog();
	Cat *j = new Cat();
	//AAnimal *z = new AAnimal();
	
	std::cout << std::endl;
	std::cout << "J : " << j->getType() << " " << std::endl;
	std::cout << "I : " << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	delete j;
	delete i;
}