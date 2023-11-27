/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:53:33 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/27 13:43:16 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	brain = new Brain();
	std::cout << "Dog Default Constructor called." << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
	brain = new Brain();
	std::cout << "Dog Constructor called." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy.type) {
	std::cout << "Dog Copy Constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &o_copy) {
	std::cout << "Dog Copy Assigment called" << std::endl;
	if (this == &o_copy)
		return (*this);
	*this = o_copy;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << this->type << " BARK!" << std::endl;
}

void    Dog::setType(std::string type) {
	this->type = type;
}

std::string Dog::getType() const {
	return (this->type);
}

Brain &Dog::getDbrain() const {
	return (*this->brain);
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog Destructor called." << std::endl;
}