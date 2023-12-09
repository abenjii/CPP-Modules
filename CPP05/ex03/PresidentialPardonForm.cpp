#include "PresidentialPardonForm.hpp"

class Bureaucrat;

PresidentialPardonForm::PresidentialPardonForm() : target("Default") {
    std::cout << "PresidentialPardonForm Default Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target) {
    std::cout << "PresidentialPardonForm Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), target(copy.target) {
    std::cout << "PresidentialPardonForm Copy Constructor called." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    std::cout << "PresidentialPardonForm Assigment operators called." << std::endl;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm Destructor called." << std::endl;
}

std::string PresidentialPardonForm::getName() const {
    return (this->target);
}

void PresidentialPardonForm::execForm(const Bureaucrat& executor) const {
    if (!this->getSignature())
        throw AForm::notSignedForm();
    if (executor.getGrade() > this->getToExec())
        throw AForm::noGradeToExec();
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}