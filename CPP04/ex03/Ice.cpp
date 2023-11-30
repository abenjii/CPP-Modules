#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Ice Default Constructor called." << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria("ice") {
    *this = copy;
    std::cout << "Ice Copy Constructor called." << std::endl;
}

Ice &Ice::operator=(const Ice &o_copy) {
    if (this == &o_copy)
        return (*this);
    *this = o_copy;
    return (*this);
    std::cout << "Ice Assigment operator called." << std::endl;
}

void    Ice::use(ICharacter &target) {
    std::cout << "Ice: * shoots an " << this->type;
    std::cout << " bolt at " << target.getName() << " *." << std::endl;
}

AMateria* Ice::clone() const {
    return (new Ice(*this));
}

Ice::~Ice() {
    std::cout << "Ice Destructor called." << std::endl;
}