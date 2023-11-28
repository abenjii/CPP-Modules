#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include <string>
# include <cmath>
# include <fstream>

class Ice {
    private:
        std::string type;
    public:
        Ice();
        Ice(std::string &type);
        Ice(const Ice &copy);
        Ice &operator=(const Ice &o_ccopy);
        ~Ice();
};

#endif