/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:18:20 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/27 20:41:15 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() : name("Default") {
    std::cout << "ICharacter Default Constructor called." << std::endl;
}

ICharacter::ICharacter(std::string const &name) : name(name) {
    std::cout << "ICharacter Constructor called. (" << this->name;
    std::cout << ")." << std::endl;
}

ICharacter::ICharacter(const ICharacter &copy) : name(copy.name) {
    std::cout << "ICharacter Copy Constructor called." << std::endl;    
}

ICharacter &ICharacter::operator=(const ICharacter &o_copy) {
    std::cout << "ICharacter Assigment operator called." << std::endl;
    if (this == &o_copy)
        return (*this);
    *this = o_copy;
    return (*this);
}

ICharacter::~ICharacter() {
    std::cout << "ICharacter Destructor called." << std::endl;
}

std::string const &ICharacter::getName() const {
    return (this->name);
}

void    ICharacter::equip(AMateria *m) {
    for (int i = 0; i < 4; i++)
        this->materia[i] = &m[i];
    std::cout << "NOW I HAVE SOME EQUIPMENT! :D." << std::endl;
}

void    ICharacter::unequip(int idx) {
    delete this->materia[idx];
    std::cout << "I actually don't need this anymore." << std::endl;
}

void    ICharacter::use(int idx, ICharacter &target) {
    std::cout << this->name << " shoots an " << this->materia[idx];
    std::cout << " to " << target.getName();
}