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
    //std::cout << "PmergeMe Destructor called." << std::endl;
}

/* void    PmergeMe::printTmp() {
    std::vector<int>::iterator it;
    for (it = tmp.begin(); it != tmp.end(); it++) {
        std::cout << "tmp = " << *it << std::endl;
    }
} */

void    PmergeMe::printMyVec() {
    std::vector<int>::iterator it;
    for (it = myVec.begin(); it != myVec.end(); it++) {
        std::cout << "myVec = " << *it << std::endl;
    }
}

void    PmergeMe::exportData(int ac, char **args) {
    for (int i = 1; i < ac; i++) {
        int nbr = atoi(args[i]);
        myVec.push_back(nbr);
    }
    this->printMyVec();
}
/*     else {
        for (int i = 1; i < (ac / 2) + 1; i++) {
            int nbr = atoi(args[i]);
            myVec.push_back(nbr);
        }
        this->printMyVec();
        for (int j = (ac / 2) + 1; j < ac; j++) {
            int nbr2 = atoi(args[j]);
            my.push_back(nbr2);
        }
        this->printTmp(); */

void    PmergeMe::merge(int ac, char**av) {
    (void) av;
    (void) ac;
    std::cout << "OKAY\n";
    std::vector<int>l_vec;
    std::vector<int>r_vec;
    for (size_t i = 0; i < myVec.size(); i++) {
        if (i < myVec.size() / 2) {
            l_vec.push_back(myVec[i]);
        }
        else {
            r_vec.push_back(myVec[i]);
        }
    }
    std::cout << "l.size() = " << l_vec.size() << std::endl;
    std::cout << "l.size() = " << r_vec.size() << std::endl;
    for (size_t i = 0; i < l_vec.size(); i++) {
        std::cout << "l_vec[] = " << l_vec[i] << std::endl;
    }
    for (size_t i = 0; i < r_vec.size(); i++) {
        std::cout << "r_vec[] = " << r_vec[i] << std::endl;
    }
}