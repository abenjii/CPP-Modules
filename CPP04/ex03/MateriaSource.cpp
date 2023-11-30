#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++) // teste with sizeof(learned) / sizeof(AMaterial*)
        this->learned[i] = 0;
    //std::cout << "MateriaSource Default Constructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    //std::cout << "MateriaSource Copy Constructor called." << std::endl;
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &o_copy)
{
    if (this != &o_copy)
    {
        for (int i =0; i < 4; i++)
            learned[i] = o_copy.learned[i];
    }
    //std::cout << "MateriaSource Assigment operator called" << std::endl;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (learned[i] != NULL)
            delete learned[i];
    }
    //std::cout << "MateriaSource Destructor called." << std::endl;
}

void MateriaSource::learnMateria(AMateria *tolearn)
{
    if (this->learned[3] != NULL)
    {
        delete tolearn;
        std::cout << "Already full Materia to learn" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->learned[i] == NULL)
        {
            this->learned[i] = tolearn;
            //std::cout << this->learned[i]->getType() << " added to Learn\n";
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++)
    {
        if (this->learned[i] && this->learned[i]->getType() == type)
            return (this->learned[i]->clone());
    }
    //std::cout << "Wrong Materia Type (" << type << ")" << std::endl;
    return (0);
}
