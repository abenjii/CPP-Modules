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
        IMateriaSource();
        IMateriaSource(const IMateriaSource &copy);
        IMateriaSource &operator=(const IMateriaSource &o_copy); 
        virtual ~IMateriaSource();
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif