/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:30:27 by gbertin           #+#    #+#             */
/*   Updated: 2022/11/04 16:48:43 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* cat = new Cat();
	Animal* dog = new Dog();
	
	cat->addIdea("J'ai faim");
	cat->addIdea("J'ai froid");
	cat->addIdea("Je me sens en danger");
	cat->addIdea("Miaouuuu..... Zzzzz");
	cat->printIdeas();

	dog->addIdea("J'ai faim");
	dog->addIdea("J'ai froid");
	dog->addIdea("Je me sens en danger");
	dog->addIdea("Wouaffffff..... Zzzzz");
	dog->printIdeas();
	delete cat;
	delete dog;
}