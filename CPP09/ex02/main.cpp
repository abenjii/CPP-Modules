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
    std::cout << "Before: ";
    for (int i = 1; i < ac; i++) {
        std::cout << " " << atoi(av[i]);
    }
    std::cout << std::endl;
    //std::vector
    clock_t startTime = clock();
    ford.exportData(ac, av);
    ford.mergeVector(ac, av);
    clock_t endTime = clock();
    double time = static_cast<double>(endTime - startTime) / 1000000;
    //std::deque
    //clock_t startTimeDeque = clock();
    ford.exportDataDeque(ac, av);
    ford.mergeDeque(ac, av);
    clock_t endTimeDeque = clock();
    double timeDeque = static_cast<double>(endTimeDeque - startTime) / 1000000;
    std::cout << "Time to precess a range of " << (ac - 1);
    std::cout << " elements with std::deque<int>[...] : " << timeDeque << " us" << std::endl;
    std::cout << "Time to precess a range of " << (ac - 1);
    std::cout << " elements with std::vector<int>[...] : " << time << " us" << std::endl;
    return 0;
}