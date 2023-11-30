#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure &copy);
        Cure &operator=(const Cure &o_ccopy);
        ~Cure();

        virtual void    use(ICharacter &target);
        virtual AMateria* clone() const;
};

#endif