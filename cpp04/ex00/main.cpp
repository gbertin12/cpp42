/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 12:29:21 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Wrong/WrongAnimal.hpp"
#include "Wrong/WrongCat.hpp"
#include "Wrong/WrongDog.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	std::cout << std::endl;
	std::cout << "J : " << j->getType() << " " << std::endl;
	std::cout << "I : " << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	WrongAnimal* wrongMeta = new WrongAnimal();
	WrongAnimal* wrongJ = new WrongDog();
	WrongAnimal* wrongI = new WrongCat();
	std::cout << std::endl;
	std::cout << "Wrong J : " << wrongJ->getType() << " " << std::endl;
	std::cout << "Wrong I : " << wrongI->getType() << " " << std::endl;
	wrongI->makeSound(); //will output the cat sound!
	wrongJ->makeSound();
	wrongMeta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongJ;
	delete wrongI;
}