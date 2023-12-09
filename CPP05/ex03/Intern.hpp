#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class   AForm;

class Intern {
    private:
    public:
        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &o_copy);
        ~Intern();
        AForm*  makeForm(std::string nameForm, std::string nameTarget);
        AForm*  ShrubberyCreationForm(std::string target);
        AForm*  RobotomyRequestForm(std::string target);
        AForm*  PresidentialPardonForm(std::string target);

        class nameInvalid : public std::exception {
            virtual const char* what() const throw() {
                return ("Cannot Create this form.");
            }
        };
};

#endif