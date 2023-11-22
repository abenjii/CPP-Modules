/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:55:10 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/18 22:04:34 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "WrongCat.hpp"

int	main()
{
	const Animal* i = new Animal();
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	
	std::cout << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	
	std::cout << std::endl;
	std::cout << d->getType() << std::endl;
	d->makeSound();

	std::cout << std::endl;
	std::cout << c->getType() << std::endl;
	c->makeSound();
	
	std::cout << std::endl;
	delete i;
	delete d;
	delete c;
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "WrongCat and WrongAnimal class's" << std::endl;
	std::cout << std::endl;
	
	const WrongAnimal* i2 = new WrongAnimal();
	const WrongAnimal* c2 = new WrongCat();
	
	std::cout << std::endl;
	std::cout << i2->getType() << std::endl;
	i2->makeSound();
	

	std::cout << std::endl;
	std::cout << c2->getType() << std::endl;
	c2->makeSound();

	std::cout << std::endl;
	delete i2;
	delete c2;
	return (0);
}