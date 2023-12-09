#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern Default Constructor called." << std::endl;
}

Intern::Intern(const Intern &copy) {
    *this = copy;
    std::cout << "Intern Copy Constructor called." << std::endl;
}

Intern& Intern::operator=(const Intern &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    std::cout << "Intern Assigment operator called." << std::endl;
    return (*this);
}

Intern::~Intern() {
    std::cout << "Intern Destructor called." << std::endl;
}

AForm* Intern::ShrubberyCreationForm(std::string target) {
    return new class ShrubberyCreationForm(target);
}

AForm* Intern::RobotomyRequestForm(std::string target) {
    return new class RobotomyRequestForm(target);
}

AForm* Intern::PresidentialPardonForm(std::string target) {
    return new class PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string nameForm, std::string nameTarget) {
    std::string arr[3] = {
        "ShrubberyCreation Form",
        "RobotomyRequest Form",
        "PresidentialPardon Form",
    };

    AForm*    (Intern::*funcArr[3])(std::string) = {
        &Intern::ShrubberyCreationForm,
        &Intern::RobotomyRequestForm,
        &Intern::PresidentialPardonForm,
    };

    try {
        for (int i = 0; i < 3; i++)
        {
            if (!arr[i].compare(nameForm))
            {
                std::cout << "Intern creates " << nameForm << std::endl;
                return ((this->*funcArr[i])(nameTarget));
            }
        }
        throw Intern::nameInvalid();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl; 
    }
    return (NULL);
}