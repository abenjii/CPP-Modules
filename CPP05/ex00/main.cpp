#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat* a = new Bureaucrat("alex", 15);

    std::cout << a->getGrade() << std::endl;
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    a->incrementGrade();
    std::cout << a->getGrade() << std::endl;
    a->incrementGrade();
    std::cout << a->getGrade() << std::endl;
    delete a;
    return (0);
}