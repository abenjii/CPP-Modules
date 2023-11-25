/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:55:10 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/18 19:19:31 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	Animal* animals[10];
	std::string thoughts[100] = "Starving!"; "Fish..."; "Play! :D"; "Complaining..."; "Drink Water";

	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();

	std::cout << std::endl;
	std::cout << animals[0]->getType() << std::endl;


	std::cout << std::endl;
	for (int j = 0; j < 10; j++)
		delete animals[j];

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "<<<<<<<<<<<Testing Deep Copies>>>>>>>>>>>" << std::endl;
	std::cout << std::endl;
	Animal* a = new Dog();
	Animal* b = new Dog();
	Animal* a2 = new Cat();
	Animal* b2 = new Cat();

	std::cout << "Dog class" << std::endl;
	a->printAddress();
	b->printAddress();

	std::cout << "Cat class" << std::endl;
	a2->printAddress();
	b2->printAddress();

	delete a;
	delete b;
	delete a2;
	delete b2;

	return (0);
}