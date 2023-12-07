#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool signature;
        int const toSign;
        int const toExec;
    public:
        Form();
        Form(std::string const name, int toSign, int toExec);
        Form(const Form &copy);
        Form &operator=(const Form &o_copy);
        ~Form();

        std::string getName() const;
        bool    getSignature() const;
        int getToSign() const;
        int getToExec() const;
        class   GradeTooHighException : public std::exception {
            virtual const char* what() const throw() {
                return ("Too Hight Grade Form");
            }
        };

        class   GradeTooLowException : public std::exception {
            virtual const char* what() const throw() {
                return ("Too Low Grade Form");
            }
        };

        void    beSigned(const Bureaucrat& a);

};

#endif