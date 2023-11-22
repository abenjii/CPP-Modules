/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:53:33 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/17 10:51:15 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() : Animal("Dog") {
	std::cout << "Default Dog Constructor called." << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
	std::cout << "Dog Constructor called." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog Copy Constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &o_copy) {
	std::cout << "Dog Copy Assigment called" << std::endl;
	if (this == &o_copy)
		return (*this);
	*this = o_copy;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog Destructor called." << std::endl;
}