#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Cure Default Constructor called." << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria("cure") {
    *this = copy;
    std::cout << "Cure Copy Constructor called." << std::endl;
}

Cure &Cure::operator=(const Cure &o_copy) {
    if (this != &o_copy)
    {
        this->type = o_copy.getType();
    }
    std::cout << "Cure Assigment operator called." << std::endl;
    return (*this);
}

Cure::~Cure() {
    std::cout << "Cure Destructor called." << std::endl;
}

void    Cure::use(ICharacter &target) {
    std::cout << "Cure: * heals a " << target.getName();
    std::cout << "'s. wounds *" << std::endl;
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}
