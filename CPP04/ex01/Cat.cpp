/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:43:26 by alex              #+#    #+#             */
/*   Updated: 2023/11/17 10:58:35 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    brain = new Brain();
    std::cout << "Cat Default Constructor called." << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
    brain = new Brain();
    std::cout << "Cat Constructor called." << std::endl;
}

void    Cat::setType(std::string type) {
    this->type = type; 
}

std::string Cat::getType() const{
    return (this->type);
}

Cat::Cat(const Cat &copy) {
    this->brain = new Brain(*copy.brain);
    this->setType(copy.type);
    std::cout << "Cat Copy Constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &o_copy) {
    std::cout << "Cat Assigment operator called." << std::endl;
    if (this == &o_copy)
        return (*this);
    *this = o_copy;
    return (*this);
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat Destructor called." << std::endl;
}