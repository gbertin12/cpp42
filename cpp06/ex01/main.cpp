/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:24:07 by gbertin           #+#    #+#             */
/*   Updated: 2023/01/05 11:30:10 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

int main()
{
	Data data;
	
	data.actor = "Bruce Lee";
	data.animal = "Wolf";
	data.book = "Harry Potter";
	data.car = "Ferrari";
	data.number = 42;

	std::cout << "Actor: " << data.actor << std::endl;
	std::cout << "Animal: " << data.animal << std::endl;
	std::cout << "Book: " << data.book << std::endl;
	std::cout << "Car: " << data.car << std::endl;
	std::cout << "Number: " << data.number << std::endl;
	
	std::cout << std::endl << "--------------------------" << std::endl << std::endl;

	uintptr_t	serialize_input = serialize(&data);
	Data*		deserialize_output = deserialize(serialize_input);

	std::cout << "Actor: " << deserialize_output->actor << std::endl;
	std::cout << "Animal: " << deserialize_output->animal << std::endl;
	std::cout << "Book: " << deserialize_output->book << std::endl;
	std::cout << "Car: " << deserialize_output->car << std::endl;
	std::cout << "Number: " << deserialize_output->number << std::endl;
}