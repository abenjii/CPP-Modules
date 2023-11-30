#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
        this->inv[i] = 0;
    std::cout << "Character Constructor called. (" << this->name;
    std::cout << ")." << std::endl;
}

Character::Character(const Character &copy) : name(copy.name)
{
    std::cout << "Character Copy Constructor called." << std::endl;
}

Character &Character::operator=(const Character &o_copy)
{
    std::cout << "Character Assigment operator called." << std::endl;
    if (this == &o_copy)
        return (*this);
    *this = o_copy;
    return (*this);
}

void Character::equip(AMateria *m) {
    if (m == NULL)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->inv[i] == NULL)
        {
            this->inv[i] = m;
            std::cout << this->name << " equiped " << this->inv[i]->getType();
            std::cout << "." << std::endl;
            break ;
        }
        if (this->inv[i] != NULL && i >= 3)
        {
            std::cout << this->name << " can't equip " << m->getType() << std::endl;
        }
    }
}

void    Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
    {
        this->inv[idx] = 0;
        std::cout << "Free space to equip a new Materia" << std::endl;
    }
    else
        std::cout << "Can't unequip that Materia" << std::endl;
}

void    Character::use(int idx, ICharacter &target){
    if (idx >= 0 && idx < 4 && this->inv[idx] != NULL)
        this->inv[idx]->use(target);
    else if (idx < 0 || idx >= 4)
        std::cout << "Idx is invalid, 0 - 3" << std::endl;
    else
        std::cout << "Cant use the Materia" << std::endl;
}

Character::~Character()
{
    std::cout << "Default Destructor called." << std::endl;
}

std::string const& Character::getName() const {
    return (this->name);
}