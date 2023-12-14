#include "ScalarConverter.hpp"

int main(int ac, char** av) {
    if (ac != 2)
    {
        std::cout << "Select 1 argument to Convert." << std::endl;
        return (0);
    }
    ScalarConverter* a = new ScalarConverter(av[1]);
    a->convert(av[1]);
    //std::cout << "max = " << std::numeric_limits<float>::infinity() << std::endl;
    //std::cout << "min = " << std::numeric_limits<double>::infinity() << std::endl;
    delete a;
    return (0);
}