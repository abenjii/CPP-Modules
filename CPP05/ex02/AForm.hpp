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
        virtual bool    getSignature() const;
        virtual int getToSign() const;
        virtual int getToExec() const;
        class   GradeTooHighException : public std::exception {
            virtual const char* what() const throw() {
                return (" Too Hight Grade to sign AForm");
            }
        };

        class   GradeTooLowException : public std::exception {
            virtual const char* what() const throw() {
                return (" Too Low Grade to sign AForm");
            }
        };

        class notSignedForm : public std::exception {
            virtual const char * what() const throw () {
                return (" Not Signed Form can't execute");
            }
        };

        class   noGradeToExec : public std::exception {
            virtual const char* what() const throw(){
                return (" Not enought Grade to execute");
            }
        };

        void    beSigned(const Bureaucrat& a);
        virtual void    execForm(const Bureaucrat& executor) const = 0;

};

std::ostream& operator<<( std::ostream& o_form, const AForm& form );

#endif