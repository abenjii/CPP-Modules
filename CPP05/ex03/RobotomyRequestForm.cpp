#include "RobotomyRequestForm.hpp"

class Bureaucrat;

RobotomyRequestForm::RobotomyRequestForm() : target("Default") {
    std::cout << "RobotomyRequestForm Default Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target) {
    std::cout << "RobotomyRequestForm Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), target(copy.target) {
    std::cout << "RobotomyRequestForm Copy Constructor called." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    std::cout << "RobotomyRequestForm Assigment operator called." << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm Destructor called." << std::endl;
}

std::string RobotomyRequestForm::getName() const {
    return (this->target);
}

void    RobotomyRequestForm::execForm(const Bureaucrat &executor) const {
    try {
        if (!this->getSignature())
            throw RobotomyRequestForm::notSignedForm();
        if (executor.getGrade() > this->getToExec())
            throw RobotomyRequestForm::gradeToExecLow();
        std::srand(std::time(0));
        
        bool success = (rand() % 2 == 0);
        if (!success)
            throw RobotomyRequestForm::failedToExec();
        std::cout << this->getName() << " has been robotomized successfully" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
