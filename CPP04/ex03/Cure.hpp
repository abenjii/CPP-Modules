#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include <string>
# include <cmath>
# include <fstream>

class Cure {
    private:
        std::string type;
    public:
        Cure();
        Cure(std::string &type);
        Cure(const Cure &copy);
        Cure &operator=(const Cure &o_ccopy);
        ~Cure();
};

#endif