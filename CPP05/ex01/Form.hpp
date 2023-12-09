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
                return ("Too Hight Grade to Sign");
            }
        };

        class   GradeTooLowException : public std::exception {
            virtual const char* what() const throw() {
                return ("Too Low Grade to Sign");
            }
        };

        void    beSigned(const Bureaucrat& a);

};

std::ostream& operator<<( std::ostream& o_form, const Form& form);

#endif