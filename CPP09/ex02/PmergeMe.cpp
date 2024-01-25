#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
    //std::cout << "PmergeMe Default Constructor called." << std::endl;
}

/* 
PmergeMe::PmergeMe(const PmergeMe &copy) {
    *this = copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &o_copy) {
    return (*this);
}
*/

PmergeMe::~PmergeMe() {
    std::cout << "PmergeMe Destructor called." << std::endl;
}

void    PmergeMe::printTmp() {
    std::vector<int>::iterator it;
    for (it = tmp.begin(); it != tmp.end(); it++) {
        std::cout << "tmp = " << *it << std::endl;
    }
}

void    PmergeMe::printMyVec() {
    std::vector<int>::iterator it;
    for (it = myVec.begin(); it != myVec.end(); it++) {
        std::cout << "myVec = " << *it << std::endl;
    }
}

void    PmergeMe::exportData(int ac, char **args) {
    if (ac % 2 == 0) {
        for (int i = 1; i < ac / 2; i++) {
            int nbr = atoi(args[i]);
            myVec.push_back(nbr);
        }
        this->printMyVec();
        for (int j = ac / 2; j < ac; j++) {
            int nbr2 = atoi(args[j]);
            tmp.push_back(nbr2);
        }
        this->printTmp();
    }
    else {
        for (int i = 1; i < (ac / 2) + 1; i++) {
            int nbr = atoi(args[i]);
            myVec.push_back(nbr);
        }
        this->printMyVec();
        for (int j = (ac / 2) + 1; j < ac; j++) {
            int nbr2 = atoi(args[j]);
            tmp.push_back(nbr2);
        }
        this->printTmp();
    }
}