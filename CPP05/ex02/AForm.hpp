#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>

class Bureaucrat;

class AForm {
    private:
        const std::string name;
        bool signature;
        int const toSign;
        int const toExec;
    public:
        AForm();
        AForm(std::string const name, int toSign, int toExec);
        AForm(const AForm &copy);
        AForm &operator=(const AForm &o_copy);
        virtual ~AForm();

        virtual std::string getName() const = 0;
        bool    getSignature() const;
        int getToSign() const;
        int getToExec() const;
        class   GradeTooHighException : public std::exception {
            virtual const char* what() const throw() {
                return ("Too Hight Grade to sign AForm");
            }
        };

        class   GradeTooLowException : public std::exception {
            virtual const char* what() const throw() {
                return ("Too Low Grade to sign AForm");
            }
        };
        class   noGradeToExec : public std::exception {
            virtual const char* what() const throw(){
                return (" Not enought Grade to execute");
            }
        };

        void    beSigned(const Bureaucrat& a);

};

std::ostream& operator<<( std::ostream& o_form, const AForm& form );

#endif