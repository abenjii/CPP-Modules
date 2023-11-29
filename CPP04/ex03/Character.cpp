#include "Character.hpp"

Character::Character() : name("Default")
{
    for (int i = 0; i < 4; i++)
        inv[i] = 0;
    std::cout << "Character Default Constructor called." << std::endl;
}

Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inv[i] = 0;
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
    for (int i = 0; i < 4; i++)
    {
        this->inv[i] = &m[i];
        std::cout << this->name << " equiped " << inv[i]->getType();
        std::cout << "." << std::endl;
    }
}

void    Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
    {
        this->inv[idx] = 0;
        std::cout << "Free space to equip a new Materia" << std::endl;
    }
    else if (!(idx >= 0 && idx < 4))
    {
        return ;
    }
}

void    Character::use(int idx, ICharacter &target){
    if (idx >= 0 && idx < 4)
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
