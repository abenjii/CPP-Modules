#include "Cure.hpp"

Cure::Cure() : type("cure") {
    std::cout << "Cure Default Constructor called." << std::endl;
}

Cure::Cure(std::string type) : type("cure") {
    (void) type;
    std::cout << "Cure Constructor called. (" << this->type;
    std::cout << ")" << std::endl;
}

Cure::Cure(const Cure &copy) : type(copy.type) {
    std::cout << "Cure Copy Constructor called." << std::endl;
}

Cure &Cure::operator=(const Cure &o_copy) {
    if (this == &o_copy)
        return (*this);
    *this = o_copy;
    return (*this);
    std::cout << "Cure Assigment operator called." << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure Destructor called." << std::endl;
}

void    Cure::use(ICharacter &target) {
    std::cout << "Cure: * shoots a " << this->type;
    std::cout << " bolt at " << target.getName() << "." << std::endl;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}
