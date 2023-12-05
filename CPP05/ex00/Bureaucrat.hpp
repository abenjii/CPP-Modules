#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat& operator=(const Bureaucrat &o_copy);
        std::string getName() const;
        int getGrade() const;
        void    incrementGrade();
        void    decrementGrade();
        class   GradeTooHighException : public std::exception {
            virtual const char* what() const throw() {
                return ("My exception Too High Happened");
            }
        };
        class   GradeTooLowException : public std::exception {
            virtual const char * what() const throw () {
                return ("My eception Too Low Happened");
            }
        };
        ~Bureaucrat();
};

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs );


#endif