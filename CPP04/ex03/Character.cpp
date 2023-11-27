/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:50:33 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/27 20:59:24 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Default") {
    std::cout << "Character Default Constructor called." << std::endl;
}

Character::Character(std::string name) : name(name) {
    std::cout << "Character Constructor called. (" << this->name;
    std::cout << ")." << std::endl;
}

Character::Character(const Character &copy) : name(copy.name) {
    std::cout << "Character Copy Constructor called." << std::endl;
}

Character &Character::operator=(const Character &o_copy) {
    std::cout << "Character Assigment operator called." << std::endl;
    if (this == &o_copy)
        return (*this);
    *this = o_copy;
    return (*this);
}

Character::~Character() {
    std::cout << "Default Destructor called." << std::endl;
}