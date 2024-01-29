#include "PmergeMe.hpp"
#include <cstdlib>

int checkvalues(int ac, char **av) {
    for (int i = 1; i < ac; i++) {
        int nbr = atoi(av[i]);
        if (nbr <= 0)
            return 0;
        //std::cout << "nbr = " << nbr << std::endl;
        int flag = 0;
        for (int j = 0; av[i][j]; j++) {
            //std::cout << "i = " << i << "; j = " << j << std::endl;
            //std::cout << "av[i][j] = " << av[i][j] << std::endl;
            if (!isdigit(av[i][j]) && av[i][j] != ' ' && !flag) {
                return 0;
            }
            else if (isdigit(av[i][j]) && !flag)
                flag  = 1;
        }
    }
    return 1;
}

int main(int ac, char **av) {
    if (ac <= 2 || !checkvalues(ac, av)) {
        std::cout << "Error\n";
        return 0;
    }
    PmergeMe ford;
    ford.exportData(ac, av);
    ford.merge(ac, av);
    //std::cout << "Valid\n";
    return 0;
}