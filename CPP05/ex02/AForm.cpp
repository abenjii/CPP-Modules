#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default"), signature(false), toSign(20), toExec(20) {
    //this->signature = false;
    std::cout << "AForm Default Constructor called." << std::endl;
}

AForm::AForm(std::string const name, int toSign, int toExec) 
: name(name), toSign(toSign), toExec(toExec) {
    if (toSign  > 150 || toExec > 150)
    {
        throw AForm::GradeTooLowException();
    }
    if (toSign < 1 || toExec < 1)
    {
        throw AForm::GradeTooHighException();
    }
    this->signature = false;
    std::cout << "AForm Constructor called." << std::endl;
}

AForm::AForm(const AForm &copy) : name(copy.name), toSign(copy.toSign), toExec(copy.toExec){
    std::cout << "AForm Copy Constructor called." << std::endl;
}

AForm& AForm::operator=(const AForm &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    std::cout << "AForm Copy Assigment called." << std::endl;
    return (*this);
}

AForm::~AForm() {
    std::cout << "AForm Destructor called." << std::endl;
}

std::string AForm::getName() const {
    return (this->name);
}

bool    AForm::getSignature() const {
    return (this->signature);
}

int AForm::getToSign () const {
    return (this->toSign);
}

int AForm::getToExec () const {
    return (this->toExec);
}

void    AForm::beSigned(const Bureaucrat &a) {
    if (a.getGrade() > this->toSign)
        throw GradeTooLowException();
    this->signature = true;
}

std::ostream& operator<<( std::ostream& o_form, const AForm& form ) {
    o_form << "Form Name: "<< form.getName() << std::endl;
    o_form << "Form signed status "<< form.getSignature() << std::endl;
    o_form << "Form Grade Required: "<< form.getToSign() << std::endl;
    o_form << "Form Grade to Execute: "<< form.getToExec() << std::endl;
    return o_form;
}
