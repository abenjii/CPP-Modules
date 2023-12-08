#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm {
    private:
        std::string const target;
    public:
        RobotomyRequestForm ();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm & copy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &o_copy);
        ~RobotomyRequestForm ();

        std::string getName() const;

        void    execForm(const Bureaucrat& executor) const;
        
        class gradeToExecLow : public std::exception {
            virtual const char * what() const throw() {
                return ("To low grade to execute this Form");
            }
        };

        class   failedToExec: public std::exception {
            virtual const char * what() const throw() {
                return ("Failed to robotomize");
            }
        };
};

#endif