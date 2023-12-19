#include "Array.hpp"

int main() {
    std::cout << "= * = * = Testing with ints = * = * =" << std::endl;
    std::cout << "- - - - Set as expected - - - -" << std::endl;
    Array<int>  nbr;
    try {
        std::cout << nbr[0] << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    int *a = new int();
    std::cout << a[0] << std::endl;
    delete a;

    std::cout << "- - - - Copy & Changes - - - -" << std::endl;
    Array<int> nbr1(10);
    Array<int> nbr2 = nbr1;
    std::cout << "(ORIGINAL)" << std::endl;
    for (int i = 0; i < nbr1.size() && nbr2.size(); i++)
    {
        std::cout << "Nbr 1: " << nbr1[i] << std::endl;
        std::cout << "Nbr 2: " << nbr2[i] << std::endl;
    }
    std::cout << "Changing the values..." << std::endl;
    std::cout << "(AFTER)" << std::endl;
    for (int i = 0; i < nbr1.size(); i++)
    {
        nbr1[i] += 777;
        std::cout << "Nbr 1: " << nbr1[i] << std::endl;
        std::cout << "Nbr 2: " << nbr2[i] << std::endl;
    }
    std::cout << "= * = * = Testing with Strings = * = * =" << std::endl;
    std::cout << "- - - - Set as expected - - - -" << std::endl;
    Array<std::string> stringA(10);
    Array<std::string> stringB = stringA;
    try {
        for (int i = 0; i < stringA.size(); i++)
        {
            stringA[i] = "alexandre"; 
            std::cout << "stringA: " << stringA[i] << std::endl;
            std::cout << "stringB: " << stringB[i] << std::endl;
        }
        std::cout << "stringA: " << stringA[10] << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}