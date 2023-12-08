#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm {
    private:
        std::string const target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &o_copy);
        ~ShrubberyCreationForm();

        std::string getName() const;

        void    execForm(const Bureaucrat& executor) const;

        class gradeToExecLow : public std::exception {
            virtual const char* what() const throw() {
                return ("To low grade to execute this Form");
            }
        };

        class fileNotOpen : public std::exception {
            virtual const char * what() const throw() {
                return ("Error opening file");
            }
        };
};

#endif