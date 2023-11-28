#ifndef IMATERIASOURCE_HPP
# define IMATERIAL_HPP
# include <iostream>
# include <string>
# include <cmath>
# include <fstream>
# include "AMateria.hpp"

class IMateriaSource {
    protected:
    public:
        virtual ~IMateriaSource();
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif