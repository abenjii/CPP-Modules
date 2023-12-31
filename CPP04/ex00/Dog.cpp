/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:53:33 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/18 21:22:45 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog Default Constructor called." << std::endl;
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

void	Dog::makeSound() const {
	std::cout << this->type << " BARK!" << std::endl;
}