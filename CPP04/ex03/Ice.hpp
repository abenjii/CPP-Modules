#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice &copy);
        Ice &operator=(const Ice &o_ccopy);
        ~Ice();

        virtual void    use(ICharacter &target);
        virtual AMateria* clone() const;
};

#endif