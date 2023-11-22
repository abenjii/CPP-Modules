/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:44:16 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/18 21:45:47 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal(): type("Default") {
	std::cout << "Animal Default constructor called." << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal " << this->type << " Constructor called." << std::endl;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal Copy constructor called." << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal &o_copy) {
	std::cout << "Animal Assigment operator called." << std::endl;
	if (this == &o_copy)
		return (*this);
	this->type = o_copy.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << this->type << " Destructor Animal called." << std::endl;
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound() const {
	std::cout << "(Animal Sound)" << std::endl;
}