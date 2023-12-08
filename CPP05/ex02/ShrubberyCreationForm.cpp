#include "ShrubberyCreationForm.hpp"

class Bureaucrat;

ShrubberyCreationForm::ShrubberyCreationForm() : target("Default") {
    std::cout << "ShrubberyCreationForm Default Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {
    std::cout << "ShrubberyCreationForm Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :AForm(copy), target(copy.target) {
    //*this = copy;
    std::cout << "ShrubberyCreationForm Copy Constructor called." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    std::cout << "ShrubberyCreationForm Assigment operator called." << std::endl;
    return (*this);
} 

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
}

void    ShrubberyCreationForm::execForm(const Bureaucrat& executor) const {
    std::string fileName = this->getName() + "_shrubbery";
    std::ofstream file;
    
    file.open(fileName.c_str(), std::ofstream::out);
    try {
        if (this->getSignature() == false)
            throw ShrubberyCreationForm::notSignedForm();
        if (executor.getGrade() > 137)
            throw ShrubberyCreationForm::gradeToExecLow();
        if (!file.is_open())
            throw ShrubberyCreationForm::fileNotOpen();
        file << "          .     .  .      +     .      .          .\n"
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

std::string ShrubberyCreationForm::getName() const {
    return (this->target);
}