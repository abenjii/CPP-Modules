/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:55:10 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/27 13:48:57 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	Animal* animals[4];

	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
	{
		animals[i] = new Dog();
		std::cout << animals[i]->getType() << std::endl;
		std::cout << std::endl;
	}
	
	for (int i = 2; i < 4; i++)
	{
		animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
		std::cout << std::endl;
	}

	for (int j = 0; j < 4; j++)
	{
		std::cout << animals[j]->getType() << std::endl;
		std::cout << std::endl;
		delete animals[j];
	}

	std::cout << std::endl;
	std::cout << "<<<<<<<<<<<Testing Deep Copies>>>>>>>>>>>" << std::endl;
	std::cout << std::endl;
	Animal* a = new Dog();
	Animal* b = a->clone();
	Animal* a2 = new Cat();
	Animal* b2 = a2->clone();

	std::cout << std::endl;
	std::cout << "Dog class" << std::endl;
	a->printAddress();
	b->printAddress();
	std::cout << std::endl;
	std::cout << "Cat class" << std::endl;
	a2->printAddress();
	b2->printAddress();
	
	std::cout << std::endl;
	std::cout << "<<<<<<<<<<<Free Memory>>>>>>>>>>>" << std::endl;
	delete a;
	delete b;
	delete a2;
	delete b2;

	std::cout << std::endl;
	std::cout << "<<<<<<<<<<<Testing Brain Works>>>>>>>>>>>" << std::endl;
	std::cout << std::endl;
	
	Cat morango;

	morango.getCbrain().setIdeas("(cat)starving...\n");
	morango.getCbrain().setIdeas("(cat)want to eat...\n");
	morango.getCbrain().setIdeas("(cat)and drink...\n");
	std::cout << std::endl;
	morango.makeSound();
	std::cout << std::endl;
	std::cout << morango.getCbrain().getIdeas(0) << std::endl;
	std::cout << morango.getCbrain().getIdeas(1) << std::endl;
	std::cout << morango.getCbrain().getIdeas(2) << std::endl;
	std::cout << morango.getCbrain().getIdeas(100) << std::endl;
	std::cout << std::endl;


	Dog brownie;
	
	brownie.getDbrain().setIdeas("(dog)starving...\n");
	brownie.getDbrain().setIdeas("(dog)want to eat...\n");
	brownie.getDbrain().setIdeas("(dog)and drink...\n");
	std::cout << std::endl;
	brownie.makeSound();
	std::cout << std::endl;
	std::cout << brownie.getDbrain().getIdeas(0) << std::endl;
	std::cout << brownie.getDbrain().getIdeas(1) << std::endl;
	std::cout << brownie.getDbrain().getIdeas(2) << std::endl;
	std::cout << brownie.getDbrain().getIdeas(100) << std::endl;


/* 	std::cout << "<<<<<<<<<<<Abstract Class's>>>>>>>>>>>" << std::endl;
	Animal j;

	j.makeSound(); */
	
	return (0);
}