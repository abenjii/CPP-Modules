#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat a("alex", 10);

/*     AForm* b = new ShrubberyCreationForm("Form A");
    try {
        a.signForm(*b);
        a.executeForm(*b);
    }
    catch (std::exception &e)
    {
        std::cout << a.getName() << e.what() << std::endl;
    }
    delete b; */

/*     AForm* b = new RobotomyRequestForm("Form A");
    try {
        a.signForm(*b);
        a.executeForm(*b);
    }
    catch (std::exception &e)
    {
        std::cout << a.getName() << e.what() << std::endl;
    }
    delete b; */

    AForm* b = new PresidentialPardonForm("Form A");
    try {
        a.signForm(*b);
        a.executeForm(*b);
    }
    catch (std::exception &e)
    {
        std::cout << a.getName() << e.what() << std::endl;
    }
    delete b;
    return (0);
}