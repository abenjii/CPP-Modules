#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(1) {
    std::cout << "Bureaucrat Default Constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name){
    if (grade < 1)
        GradeTooHighException();
    if (grade > 150)
        GradeTooLowException();
    this->grade = grade;
    std::cout << "Bureaucrat Constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade) {
    std::cout << "Bureaucrat Copy Constructor called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    std::cout << "Bureaucrat Assigment operator called." << std::endl;
    return (*this);
}

std::string Bureaucrat::getName() const {
    return (this->name);
}

int Bureaucrat::getGrade() const {
    return (this->grade);
}

void    Bureaucrat::incrementGrade() {
    if ((this->grade - 1) < 1)
    {
        throw GradeTooHighException();
    }
    this->grade = this->grade - 1;
}

void    Bureaucrat::decrementGrade() {
    if ((this->grade + 1) > 150)
    {
        throw GradeTooLowException();
    }
    this->grade = this->grade + 1;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor called." << std::endl;
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& bur ) {
    o << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return o;
}

void    Bureaucrat::signForm(AForm &a) {
    try {
        a.beSigned(*this);
        if (a.getSignature() == false)
            throw AForm::GradeTooLowException();
        std::cout << this->getName() << " signed " << a.getName() << std::endl;
    }
    catch (std::exception &excep) {
        std::cout << this->getName() << " couldn't sign " << a.getName();
        std::cout << " because " << excep.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const & form) {
    if (this->getGrade() > form.getToExec())
        throw AForm::noGradeToExec();
    std::cout << this->name << " executed " << form.getName() << std::endl;
}
