#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat a("alex", 5);

    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
    if (rrf)
    {
        try {
            a.signForm(*rrf);
            a.executeForm(*rrf);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    delete rrf;
    return (0);
}