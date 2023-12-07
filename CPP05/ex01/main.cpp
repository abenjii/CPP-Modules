#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("alex", 20);

    for (int i = 0; i < 10; i++)
    {
        try {
            a.incrementGrade();
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << a << std::endl;
    }
    Form b("Form B", 15, 15);
    try {
        b.beSigned(a);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    a.signForm(b);
/*     Bureaucrat b("evaluator", 141);
    for (int i = 0; i < 10; i++)
    {
        try {
            b.decrementGrade();
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << b << std::endl;
    } */
    return (0);
}