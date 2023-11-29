#include "AMateria.hpp"

AMateria::AMateria() {
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

void    AMateria::use(ICharacter &target) {
    std::cout << "AMateria: * shoots a " << this->type;
    std::cout << " bolt at " << target.getName() << "." << std::endl;
}
