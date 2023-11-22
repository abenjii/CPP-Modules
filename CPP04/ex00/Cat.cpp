/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:43:26 by alex              #+#    #+#             */
/*   Updated: 2023/11/18 21:21:03 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat() : Animal("Cat") {
    std::cout << "Default Cat Constructor called." << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
    std::cout << "Cat Constructor called." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
    std::cout << "Cat Copy Constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &o_copy) {
    std::cout << "Cat Assigment operator called." << std::endl;
    if (this == &o_copy)
        return (*this);
    *this = o_copy;
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << this->type << "MIAW!!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat Destructor called." << std::endl;
}
