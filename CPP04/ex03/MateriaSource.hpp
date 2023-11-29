#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria *learned[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &copy);
        MateriaSource &operator=(const MateriaSource &o_copy);
        ~ MateriaSource();

        void learnMateria(AMateria *tolearn);
        AMateria* createMateria(std::string const & type);

};

#endif