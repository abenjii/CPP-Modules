#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
        this->inv[i] = 0;
    //std::cout << "Character Constructor called. (" << this->name;
    //std::cout << ")." << std::endl;
}

Character::Character(const Character &copy)
{
    this->name = copy.name;
    for (int i = 0; i < 0; i++)
    {
        if (this->inv[i] != NULL)
            this->inv[i] = copy.inv[i];
        else
            break ;
    }
    //std::cout << "Character Copy Constructor called." << std::endl;
}

Character &Character::operator=(const Character &o_copy)
{
    //std::cout << "Character Assigment operator called." << std::endl;
    if (this != &o_copy)
    {
        this->name = o_copy.getName();
        for (int i = 0; i < 4; i++)
        {
            if (this->inv[i] != NULL)
                this->inv[i] = o_copy.inv[i];
        }
    }
    return (*this);
}

void Character::equip(AMateria *m) {
    if (m == NULL)
    {
        std::cout << "No Materia to learn" << std::endl;
        return ;
    }
    if (m->getType() != "cure" && m->getType() != "ice")
    {
        std::cout << this->name << " can't equip " << m->getType() << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->inv[i] == NULL)
        {
            this->inv[i] = m;
            //std::cout << this->name << " equiped " << this->inv[i]->getType() << std::endl;
            break ;
        }
        if (this->inv[i] != NULL && i >= 3)
        {
            std::cout << this->name << " can't equip " << m->getType() << std::endl;
        }
    }
}

void    Character::unequip(int idx) {
    if (this->inv[idx] != NULL)
    {
        this->inv[idx] = NULL;
        std::cout << "Free space to equip a new Materia" << std::endl;
    }
    else
        std::cout << "Can't unequip that Materia" << std::endl;
}

void    Character::use(int idx, ICharacter &target){
    if (idx < 0 || idx >= 4 || this->inv[idx] == NULL)
    {
        std::cout << "Cant use the Materia" << std::endl;
        return ;
    }
    if (idx >= 0 && idx < 4 && this->inv[idx] != NULL)
        this->inv[idx]->use(target);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inv[i] != NULL)
            delete this->inv[i];
    }
    //std::cout << "Default Destructor called." << std::endl;
}

std::string const& Character::getName() const {
    return (this->name);
}