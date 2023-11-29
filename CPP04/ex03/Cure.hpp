#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "ICharacter.hpp"

class Cure : public AMateria {
    private:
        std::string type;
    public:
        Cure();
        Cure(std::string type);
        Cure(const Cure &copy);
        Cure &operator=(const Cure &o_ccopy);
        ~Cure();
        void    use(ICharacter &target);
        AMateria* clone() const;
};

#endif