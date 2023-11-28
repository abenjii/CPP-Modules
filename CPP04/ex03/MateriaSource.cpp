#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++) // teste with sizeof(learned) / sizeof(AMaterial*)
        this->learned[i] = 0;
    std::cout << "MateriaSource Default Constructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    std::cout << "MateriaSource Copy Constructor called." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &o_copy)
{
    if (this == &o_copy)
        return (*this);
    *this = o_copy;
    return (*this);
    std::cout << "MateriaSource Assigment operator called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor called." << std::endl;
}

void MateriaSource::learnMateria(AMateria *tolearn)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->learned[i] == 0)
            
    }
}

/* AMateria* MateriaSource::createMateria(std::string const & type) {
    for (i <)
} */
