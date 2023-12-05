#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(0) {
    std::cout << "Bureaucrat Default Constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade){
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
        std::cout << "Too Hight Grade." << std::endl;  
        return ;
        //guess its similar to this output but need to understand exceptions first
    }
    this->grade = this->grade - 1;
}

void    Bureaucrat::decrementGrade() {
    if ((this->grade + 1) > 150)
    {
        std::cout << "Too Low Grade." << std::endl;
        return ;
        //guess its similar to this output but need to understand exceptions first
    }
    this->grade = this->grade + 1;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor called." << std::endl;
}