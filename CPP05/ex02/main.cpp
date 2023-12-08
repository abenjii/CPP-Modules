#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat a("alex", 45);

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

    AForm* b = new RobotomyRequestForm("Form A");
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