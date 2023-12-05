#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("alex", 10);

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

    Bureaucrat b("evaluator", 141);
    for (int i = 0; i < 10; i++)
    {
        try {
            b.decrementGrade();
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << b << std::endl;
    }
    return (0);
}