#include "Shrubbery.hpp"

class Bureaucrat;

Shrubbery::Shrubbery() : target("Default") {
    std::cout << "Shrubbery Default Constructor called." << std::endl;
}

Shrubbery::Shrubbery(std::string target) : target(target) {
    std::cout << "Shrubbery Constructor called." << std::endl;
}

Shrubbery::Shrubbery(const Shrubbery &copy) :AForm(copy), target(copy.target) {
    //*this = copy;
    std::cout << "Shrubbery Copy Constructor called." << std::endl;
}

Shrubbery& Shrubbery::operator=(const Shrubbery &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    std::cout << "Shrubbery Assigment operator called." << std::endl;
    return (*this);
} 

Shrubbery::~Shrubbery() {
    std::cout << "Shrubbery Destructor called." << std::endl;
}

void    Shrubbery::execForm(const Bureaucrat& executor) {
    std::string fileName = this->getName() + "_shrubbery";

    std::ofstream file(fileName.c_str());
    try {
        if (executor.getGrade() > 137)
            throw Shrubbery::gradeToSignLow();
        file <<
        "          .     .  .      +     .      .          .\n"
        "     .       .      .     #       .           .\n"
        "        .      .         ###            .      .      .\n"
        "      .      .   *#:. .:##*##:. .:#*  .      .\n"
        "          .      . *####*###*####*  .    .\n"
        "       .     *#:.    .:#*###*#:.    .:#*  .        .       .\n"
        "  .             *#########*#########*        .        .\n"
        "        .    *#:.  *####*###*####*  .:#*   .       .\n"
        "     .     .  *#######*##*##*#######*                  .\n"
        "                .*##*#####*#####*##*           .      .\n"
        "    .   *#:. ...  .:##*###*###*##:.  ... .:#*     .\n"
        "      .     *#######*##*#####*##*#######*      .     .\n"
        "    .    .     *#####*#######*#####*    .      .\n"
        "            .     *      000      *    .     .\n"
        "       .         .   .   000     .        .       .\n"
        ".. .. ..................O000O........................ ......\n";
        file.close();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

std::string Shrubbery::getName() const {
    return (this->target);
}