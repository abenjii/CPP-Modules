/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:11:11 by alex              #+#    #+#             */
/*   Updated: 2023/11/18 21:59:13 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "Default WrongCat Constructor called." << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    std::cout << "WrongCat Constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
    std::cout << "WrongCat Copy Constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &o_copy) {
    std::cout << "WrongCat Assigment operator called." << std::endl;
    if (this == &o_copy)
        return (*this);
    *this = o_copy;
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor called." << std::endl;
}

void    WrongCat::makeSound() const {
    std::cout << this->type << "MIAW!! (WrongCat)" << std::endl;
}