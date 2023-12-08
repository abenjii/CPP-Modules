#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default"), signature(false), toSign(20), toExec(20) {
    std::cout << "Form Default Constructor called." << std::endl;
}

Form::Form(std::string const name, int toSign, int toExec) 
: name(name), toSign(toSign), toExec(toExec) {
    if (toSign  > 150 || toExec > 150)
    {
        throw Form::GradeTooLowException();
    }
    if (toSign < 1 || toExec < 1)
    {
        throw Form::GradeTooHighException();
    }
    this->signature = false;
    std::cout << "Form Constructor called." << std::endl;
}

Form::Form(const Form &copy) : name(copy.name), toSign(copy.toSign), toExec(copy.toExec){
    std::cout << "Form Copy Constructor called." << std::endl;
}

Form& Form::operator=(const Form &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    std::cout << "Form Copy Assigment called." << std::endl;
    return (*this);
}

Form::~Form() {
    std::cout << "Form Destructor called." << std::endl;
}

std::string Form::getName() const {
    return (this->name);
}

bool    Form::getSignature() const {
    return (this->signature);
}

int Form::getToSign () const {
    return (this->toSign);
}

int Form::getToExec () const {
    return (this->toExec);
}

void    Form::beSigned(const Bureaucrat &a) {
    if (a.getGrade() > this->toSign)
        throw Form::GradeTooLowException();
    this->signature = true;
}

std::ostream& operator<<( std::ostream& o_form, const Form& form ) {
    o_form << "Form Name: "<< form.getName() << std::endl;
    o_form << "Form signed status "<< form.getSignature() << std::endl;
    o_form << "Form Grade Required: "<< form.getToSign() << std::endl;
    o_form << "Form Grade to Execute: "<< form.getToExec() << std::endl;
    return o_form;
}
