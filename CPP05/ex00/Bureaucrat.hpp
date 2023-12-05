#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

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
        ~Bureaucrat();
};

#endif