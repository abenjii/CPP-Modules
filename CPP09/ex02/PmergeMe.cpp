#include "PmergeMe.hpp"
#include "unistd.h"

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
    //this->printMyVec();
}

void    PmergeMe::exportDataDeque(int ac, char **args) {
    for (int i = 1; i < ac; i++) {
        int nbr = atoi(args[i]);
        myDeque.push_back(nbr);
    }
}


void    PmergeMe::sortVec(std::vector<int> left, std::vector<int> right, std::vector<std::vector<int> > vecArr) {
    //left vector
    for (size_t i = 0; i < left.size() / 2; i++) {
        std::vector<int> pair;
        if (left[i * 2] && left[i * 2 + 1]) {
            if (left[i * 2] > left[i * 2 + 1]) {
                pair.push_back(left[i * 2 + 1]);
                pair.push_back(left[i * 2]);
            }
            else if (left[i * 2] < left[i * 2 + 1]){
                pair.push_back(left[i * 2]);
                pair.push_back(left[i * 2 + 1]);
            }
            vecArr.push_back(pair);
        }
    }
    if (left.size() % 2 != 0) {
        std::vector<int> pair;
        pair.push_back(left[left.size() - 1]);
        vecArr.push_back(pair);
    }
    while (vecArr.size() > 1) {
        std::vector<int> tmp;
        while (!vecArr[0].empty() || !vecArr[1].empty()) {
            if (vecArr[0].front() && vecArr[1].empty()) {
                tmp.push_back(vecArr[0].front());
                vecArr[0].erase(vecArr[0].begin ());
            }
            else if (vecArr[1].front() && vecArr[0].empty()) {
                tmp.push_back(vecArr[1].front());
                vecArr[1].erase(vecArr[1].begin ());
            }
            else if (vecArr[0].front() > vecArr[1].front()) {
                tmp.push_back(vecArr[1].front());
                vecArr[1].erase(vecArr[1].begin());
            }
            else if (vecArr[0].front() < vecArr[1].front()) {
                tmp.push_back(vecArr[0].front());
                vecArr[0].erase(vecArr[0].begin());
            }
        }
        vecArr.erase(vecArr.begin());
        vecArr.erase(vecArr.begin());
        vecArr.push_back(tmp);
    }
    //right vector
    std::vector<std::vector<int> >vecArrTmp;
    for (size_t i = 0; i < right.size() / 2; i++) {
        std::vector<int> pair2;
        if (right[i * 2] && right[i * 2 + 1]) {
            if (right[i * 2] > right[i * 2 + 1]) {
                pair2.push_back(right[i * 2 + 1]);
                pair2.push_back(right[i * 2]);
            }
            else if (right[i * 2] < right[i * 2 + 1]) {
                pair2.push_back(right[i * 2]);
                pair2.push_back(right[i * 2 + 1]);
            }
            vecArrTmp.push_back(pair2);
        }
    }
    if (right.size() % 2 != 0) {
        std::vector<int> pair2;
        pair2.push_back(right[right.size() - 1]);
        vecArrTmp.push_back(pair2);
    }
    while (vecArrTmp.size() > 1) {
        std::vector<int> tmpR;
        while (!vecArrTmp[0].empty() || !vecArrTmp[1].empty()) {
            if (vecArrTmp[0].front() && vecArrTmp[1].empty()) {
                tmpR.push_back(vecArrTmp[0].front());
                vecArrTmp[0].erase(vecArrTmp[0].begin());
            }
            else if (vecArrTmp[1].front() && vecArrTmp[0].empty()) {
                tmpR.push_back(vecArrTmp[1].front());
                vecArrTmp[1].erase(vecArrTmp[1].begin());
            }
            else if (vecArrTmp[0].front() > vecArrTmp[1].front()) {
                tmpR.push_back(vecArrTmp[1].front());
                vecArrTmp[1].erase(vecArrTmp[1].begin ());
            }
            else if (vecArrTmp[0].front() < vecArrTmp[1].front()) {
                tmpR.push_back(vecArrTmp[0].front());
                vecArrTmp[0].erase(vecArrTmp[0].begin ());
            }
        }
        vecArrTmp.erase(vecArrTmp.begin());
        vecArrTmp.erase(vecArrTmp.begin());
        vecArrTmp.push_back(tmpR);
    } 
    vecArr.push_back(vecArrTmp[0]);
    while (vecArr.size() > 1) {
        std::vector<int> tmp;
        while (vecArr.size() > 1) {
            if (vecArr[0].front() && vecArr[1].empty()) {
                tmp.push_back(vecArr[0].front());
                vecArr[0].erase(vecArr[0].begin ());
            }
            else if (vecArr[1].front() && vecArr[0].empty()) {
                tmp.push_back(vecArr[1].front());
                vecArr[1].erase(vecArr[1].begin ());
            }
            else if (vecArr[0].front() > vecArr[1].front()) {
                tmp.push_back(vecArr[1].front());
                vecArr[1].erase(vecArr[1].begin());
            }
            else if (vecArr[0].front() < vecArr[1].front()) {
                tmp.push_back(vecArr[0].front());
                vecArr[0].erase(vecArr[0].begin());
            }
            if (vecArr[0].empty() && vecArr[1].empty()) {
                vecArr.erase(vecArr.begin());
                vecArr.erase(vecArr.begin());
            }
        }
        vecArr.push_back(tmp);
    }
/*     std::cout << "After:  ";
    for (size_t j = 0; j < vecArr[0].size(); j++)
            std::cout << " " << vecArr[0][j];
    std::cout << std::endl; */
}

void    PmergeMe::sortDeque(std::deque<int> left, std::deque<int> right, std::deque<std::deque<int> > dequeArr) {
    //left deque
    for (size_t i = 0; i < left.size() / 2; i++) {
        std::deque<int> pair;
        if (left[i * 2] && left[i * 2 + 1]) {
            if (left[i * 2] > left[i * 2 + 1]) {
                pair.push_back(left[i * 2 + 1]);
                pair.push_back(left[i * 2]);
            }
            else if (left[i * 2] < left[i * 2 + 1]){
                pair.push_back(left[i * 2]);
                pair.push_back(left[i * 2 + 1]);
            }
            dequeArr.push_back(pair);
        }
    }
    if (left.size() % 2 != 0) {
        std::deque<int> pair;
        pair.push_back(left[left.size() - 1]);
        dequeArr.push_back(pair);
    }
    while (dequeArr.size() > 1) {
        std::deque<int> tmp;
        while (!dequeArr[0].empty() || !dequeArr[1].empty()) {
            if (dequeArr[0].front() && dequeArr[1].empty()) {
                tmp.push_back(dequeArr[0].front());
                dequeArr[0].erase(dequeArr[0].begin ());
            }
            else if (dequeArr[1].front() && dequeArr[0].empty()) {
                tmp.push_back(dequeArr[1].front());
                dequeArr[1].erase(dequeArr[1].begin ());
            }
            else if (dequeArr[0].front() > dequeArr[1].front()) {
                tmp.push_back(dequeArr[1].front());
                dequeArr[1].erase(dequeArr[1].begin());
            }
            else if (dequeArr[0].front() < dequeArr[1].front()) {
                tmp.push_back(dequeArr[0].front());
                dequeArr[0].erase(dequeArr[0].begin());
            }
        }
        dequeArr.erase(dequeArr.begin());
        dequeArr.erase(dequeArr.begin());
        dequeArr.push_back(tmp);
    }
    //right deque
    std::deque<std::deque<int> >dequeArrTmp;
    for (size_t i = 0; i < right.size() / 2; i++) {
        std::deque<int> pair2;
        if (right[i * 2] && right[i * 2 + 1]) {
            if (right[i * 2] > right[i * 2 + 1]) {
                pair2.push_back(right[i * 2 + 1]);
                pair2.push_back(right[i * 2]);
            }
            else if (right[i * 2] < right[i * 2 + 1]) {
                pair2.push_back(right[i * 2]);
                pair2.push_back(right[i * 2 + 1]);
            }
            dequeArrTmp.push_back(pair2);
        }
    }
    if (right.size() % 2 != 0) {
        std::deque<int> pair2;
        pair2.push_back(right[right.size() - 1]);
        dequeArrTmp.push_back(pair2);
    }
    while (dequeArrTmp.size() > 1) {
        std::deque<int> tmpR;
        while (!dequeArrTmp[0].empty() || !dequeArrTmp[1].empty()) {
            if (dequeArrTmp[0].front() && dequeArrTmp[1].empty()) {
                tmpR.push_back(dequeArrTmp[0].front());
                dequeArrTmp[0].erase(dequeArrTmp[0].begin());
            }
            else if (dequeArrTmp[1].front() && dequeArrTmp[0].empty()) {
                tmpR.push_back(dequeArrTmp[1].front());
                dequeArrTmp[1].erase(dequeArrTmp[1].begin());
            }
            else if (dequeArrTmp[0].front() > dequeArrTmp[1].front()) {
                tmpR.push_back(dequeArrTmp[1].front());
                dequeArrTmp[1].erase(dequeArrTmp[1].begin ());
            }
            else if (dequeArrTmp[0].front() < dequeArrTmp[1].front()) {
                tmpR.push_back(dequeArrTmp[0].front());
                dequeArrTmp[0].erase(dequeArrTmp[0].begin ());
            }
        }
        dequeArrTmp.erase(dequeArrTmp.begin());
        dequeArrTmp.erase(dequeArrTmp.begin());
        dequeArrTmp.push_back(tmpR);
    }
    dequeArr.push_back(dequeArrTmp[0]);
    while (dequeArr.size() > 1) {
        std::deque<int> tmp;
        while (dequeArr.size() > 1) {
            if (dequeArr[0].front() && dequeArr[1].empty()) {
                tmp.push_back(dequeArr[0].front());
                dequeArr[0].erase(dequeArr[0].begin ());
            }
            else if (dequeArr[1].front() && dequeArr[0].empty()) {
                tmp.push_back(dequeArr[1].front());
                dequeArr[1].erase(dequeArr[1].begin ());
            }
            else if (dequeArr[0].front() > dequeArr[1].front()) {
                tmp.push_back(dequeArr[1].front());
                dequeArr[1].erase(dequeArr[1].begin());
            }
            else if (dequeArr[0].front() < dequeArr[1].front()) {
                tmp.push_back(dequeArr[0].front());
                dequeArr[0].erase(dequeArr[0].begin());
            }
            if (dequeArr[0].empty() && dequeArr[1].empty()) {
                dequeArr.erase(dequeArr.begin());
                dequeArr.erase(dequeArr.begin());
            }
        }
        dequeArr.push_back(tmp);
    }
    std::cout << "After:  ";
    for (size_t j = 0; j < dequeArr[0].size(); j++)
            std::cout << " " << dequeArr[0][j];
    std::cout << std::endl;
}

void    PmergeMe::mergeVector(int ac, char**av) {
    (void) av;
    (void) ac;
    std::vector<int> result;
    std::vector<int>l_vec;
    std::vector<int>r_vec;
    size_t sizeVec = myVec.size();
    if (myVec.size() % 2 != 0)
        sizeVec++;
    std::vector<std::vector<int> > vecArr;
    for (size_t i = 0; i < myVec.size(); i++) {
        if (i < myVec.size() / 2) 
            l_vec.push_back(myVec[i]);
        else
            r_vec.push_back(myVec[i]);
    }
    sortVec(l_vec, r_vec, vecArr);
}

void    PmergeMe::mergeDeque(int ac, char**av) {
    (void) av;
    (void) ac;
    std::deque<int> result;
    std::deque<int>l_deque;
    std::deque<int>r_deque;
    size_t sizeDeque = myDeque.size();
    if (myDeque.size() % 2 != 0)
        sizeDeque++;
    std::deque<std::deque<int> > dequeArr;
    for (size_t i = 0; i < myDeque.size(); i++) {
        if (i < myDeque.size() / 2) 
            l_deque.push_back(myDeque[i]);
        else
            r_deque.push_back(myDeque[i]);
    }
    sortDeque(l_deque, r_deque, dequeArr);
}

int    PmergeMe::sortVerification(std::vector<int> vector) {
    for (size_t i = 0; i < vector.size() - 1; i++) {
        if (vector[i] > vector[i + 1])
            return 0;
    }
    return 1;
}
