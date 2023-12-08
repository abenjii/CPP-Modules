#include "Bureaucrat.hpp"
#include "Shrubbery.hpp"

int main()
{
    Bureaucrat a("alex", 137);

    AForm* b = new Shrubbery("A");
    try {
        a.executeForm(*b);
    }
    catch (std::exception &e)
    {
        std::cout << a.getName() << e.what() << std::endl;
    }
    delete b;
    return (0);
}