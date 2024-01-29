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
    //this->printMyVec();
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

void    PmergeMe::sortVec(std::vector<int> left, std::vector<int> right, std::vector<std::vector<int> > vecArr) {
    (void)left;
    (void)right;
    //left vector
    for (size_t i = 0; i < left.size(); i++)
        std::cout << "left = " << left[i] << std::endl;
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
    for (size_t i = 0; i < vecArr.size(); i++) {
        for (size_t j = 0; j < vecArr[i].size(); j++) {
            std::cout << "vecArr[" << i << "][" << j << "] = " << vecArr[i][j] << std::endl;
        }
    }
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
            else if (vecArr[0].empty()) {
                while (!vecArr[1].empty())
                {
                    tmp.push_back(vecArr[1].front());
                    vecArr[1].erase(vecArr[1].begin());
                }
                if (vecArr[1].empty())
                    vecArr.erase(vecArr.begin());
                vecArr.erase(vecArr.begin());
            }
        }
        vecArr.push_back(tmp);
        //std::cout << "vecSize =" << vecArr.size() << std::endl;
    }
    for (size_t i = 0; i < vecArr.size(); i++) {
        for (size_t j = 0; j < vecArr[i].size(); j++)
            std::cout << "vecArr[" << i << "][" << j << "]" << vecArr[i][j] << std::endl;
        // WORKING AS EXPECTED
    }

    std::cout << "========== BREAKKKKKK ===========\n";
    std::cout << "== START ==\n";
    //right arr
    std::vector<std::vector<int> >vecArrTmp;
    for (size_t i = 0; i < right.size(); i++)
        std::cout << "right = " << right[i] << std::endl;
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
    for (size_t i = 0; i < vecArrTmp.size(); i++) {
        for (size_t j = 0; j < vecArrTmp[i].size(); j++)
            std::cout << "vecArrTmp[" << i << "][" << j << "] =" << vecArrTmp[i][j] << std::endl;
        // WORKING AS EXPECTED
    }
    while (vecArrTmp.size() > 1) {
        std::vector<int> tmpR;
        while (vecArrTmp.size() > 1) {
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
            if (vecArrTmp[0].empty() && vecArrTmp[1].empty()) {
                vecArrTmp.erase(vecArrTmp.begin());
                vecArrTmp.erase(vecArrTmp.begin());
            }
            else if (vecArrTmp[0].empty()) {
                while (!vecArr[1].empty())
                {
                    tmpR.push_back(vecArrTmp[1].front());
                    vecArr[1].erase(vecArrTmp[1].begin());
                }
                if (vecArrTmp[1].empty())
                    vecArrTmp.erase(vecArrTmp.begin());
                vecArrTmp.erase(vecArrTmp.begin());
            }
        }
        vecArrTmp.push_back(tmpR);
        //std::cout << "vecTmpSize =" << vecArrTmp.size() << std::endl;
    } 
    for (size_t i = 0; i < vecArrTmp.size(); i++) {
        for (size_t j = 0; j < vecArrTmp[i].size(); j++)
            std::cout << "vecArrTmp[" << i << "][" << j << "]" << vecArrTmp[i][j] << std::endl;
        // WORKING AS EXPECTED
    }
    // ===== PRINT =====
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
    std::cout << "After: ";
    for (size_t j = 0; j < vecArr[0].size(); j++)
            std::cout << " " << vecArr[0][j];
    std::cout << std::endl;
}

void    PmergeMe::merge(int ac, char**av) {
    (void) av;
    (void) ac;
    std::vector<int> result;
/*     if (!sortVerification(myVec))
        std::cout << "Not sorted\n"; */
    std::vector<int>l_vec;
    std::vector<int>r_vec;
    size_t sizeVec = myVec.size();
    if (myVec.size() % 2 != 0)
        sizeVec++;
    //std::cout << sizeVec << std::endl;
    std::vector<std::vector<int> > vecArr;
    for (size_t i = 0; i < myVec.size(); i++) {
        if (i < myVec.size() / 2) {
            l_vec.push_back(myVec[i]);
        }
        else {
            r_vec.push_back(myVec[i]);
        }
    }
    sortVec(l_vec, r_vec, vecArr);
}

int    PmergeMe::sortVerification(std::vector<int> vector) {
    for (size_t i = 0; i < vector.size() - 1; i++) {
        if (vector[i] > vector[i + 1])
            return 0;
    }
    return 1;
}


// make re && ./PmergeMe 7 9 6 10 1 4 5 3 8 2