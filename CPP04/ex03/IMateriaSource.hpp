#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include <iostream>
# include "AMateria.hpp"

class IMateriaSource {
    protected:
    public:
        virtual ~IMateriaSource();
        virtual void learnMateria(AMateria* tolearn) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif