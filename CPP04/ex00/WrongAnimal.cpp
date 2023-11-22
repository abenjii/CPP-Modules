/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:27:38 by alex              #+#    #+#             */
/*   Updated: 2023/11/18 21:49:02 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Default") {
	std::cout << "WrongAnimal Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
	std::cout << "WrongAnimal " << this->type << " Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal Copy constructor called." << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &o_copy) {
	std::cout << "WrongAnimal Assigment operator called." << std::endl;
	if (this == &o_copy)
		return (*this);
	this->type = o_copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << this->type << " Destructor WrongAnimal called." << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "(WrongAnimal Sound)" << std::endl;
}