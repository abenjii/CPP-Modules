#include "Form.hpp"

Form::Form() : name("Default"), signature(false), toSign(15), toExec(10) {
    std::cout << "Form Default Constructor called." << std::endl;
}

Form::Form(std::string const name, int toSign, int toExec) 
: name(name), toSign(toSign), toExec(toExec) {
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

int Form::getFGrade () const {
    return (this->toSign);
}

int Form::getGradeToExec () const {
    return (this->toExec);
}

void    Form::beSigned(const Bureaucrat &a) {
    if (a.getGrade() > this->toSign)
        throw Form::GradeTooLowException();
    this->signature = true;
}