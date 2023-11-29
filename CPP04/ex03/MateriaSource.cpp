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
        {
            this->learned[i] = &tolearn[i];
            std::cout << this->learned[i]->getType() << " added to Learn\n";
            return ;
        }
        if (this->learned[i] != 0 && i == 3)
            std::cout << "Already full of Materia's to learn" << std::endl;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++)
        if (this->learned[i] && this->learned[i]->getType() == type)
            return (this->learned[i]->clone());
}
