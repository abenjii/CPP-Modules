#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP
# include <iostream>
# include "AForm.hpp"
#include "Bureaucrat.hpp"
# include <fstream>

class Shrubbery: public AForm {
    private:
        std::string target;
    public:
        Shrubbery();
        Shrubbery(std::string target);
        Shrubbery(const Shrubbery &copy);
        Shrubbery &operator=(const Shrubbery &o_copy);
        ~Shrubbery();

        std::string getName() const;

        void    execForm(const Bureaucrat& executor);

        class gradeToSignLow : public std::exception {
            virtual const char* what() const throw() {
                return ("To Low grade to sign the AForm");
            }
        };
};

#endif