#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "ICharacter.hpp"

class Ice : public AMateria {
    private:
        std::string type;
    public:
        Ice();
        Ice(std::string type);
        Ice(const Ice &copy);
        Ice &operator=(const Ice &o_ccopy);
        ~Ice();
        void    use(ICharacter &target);
        AMateria* clone() const;
};

#endif