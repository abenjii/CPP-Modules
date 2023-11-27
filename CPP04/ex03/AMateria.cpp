/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:03:52 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/27 20:34:48 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("Default") {
    std::cout << "AMateria Default Constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type) {
    std::cout << "AMateria Constructor called. (" << this->type;
    std::cout << ")." << std::endl;
}

AMateria::AMateria(const AMateria &copy) : type(copy.type) {
    std::cout << "AMateria Copy Constructor called." << std::endl;
}

AMateria &AMateria::operator=(const AMateria &o_copy) {
    std::cout << "AMaterial Assigment operator called." << std::endl;
    if (this == &o_copy)
        return (*this);
    *this = o_copy;
    return (*this);
}

AMateria::~AMateria () {
    std::cout << "AMateria Destructor called." << std::endl;
}

std::string const &AMateria::getType () const {
    return (this->type);
}

/* void    AMateria::setType(std::string const &set) {
    this->type = set;
} */
