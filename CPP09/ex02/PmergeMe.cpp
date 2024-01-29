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
    (void)vecArr;
    //left vector
    for (size_t i = 0; i < left.size() / 2; i++) {
        std::vector<int> pair;
        if (left[i * 2] && left[i * 2 + 1]) {
            if (left[i * 2] > left[i * 2 + 1]) {
                pair.push_back(left[i * 2 + 1]);
                pair.push_back(left[i * 2]);
            }
            else {
                pair.push_back(left[i * 2]);
                pair.push_back(left[i * 2 + 1]);
            }
            vecArr.push_back(pair);
        }
    }
    for (size_t i = 0; i < vecArr.size(); i++) {
        for (size_t j = 0; j < vecArr[vecArr.size() - 1].size(); j++) {
            std::cout << "vecArr[" << i << "][" << j << "] = " << vecArr[i][j] << std::endl;
        }
    }
    std::cout << "== START ==\n";
    while (vecArr.size() > 1) {
        std::vector<int> tmp;
        while (vecArr.size() > 1) {
            std::cout << "vecArr.size() = " << vecArr.size() << std::endl;
            usleep(10000);
            std::cout << "vecArr[i] = " << vecArr[0][0] << "; " << vecArr[1][0] << std::endl;
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
/*             size_t j = 0;
            while (j < tmp.size()) {
                std::cout << "tmp = " << tmp[j++] << std::endl;
            } */
            if (vecArr[0].empty() && vecArr[1].empty()) {
                vecArr.erase(vecArr.begin());
                vecArr.erase(vecArr.begin());
            }
            else if (vecArr[0].empty())
                vecArr.erase(vecArr.begin());
        }
        vecArr.push_back(tmp);
        std::cout << "vecSize =" << vecArr.size() << std::endl;
    }
    for (size_t i = 0; i < vecArr.size(); i++) {
        for (size_t j = 0; j < vecArr[i].size(); j++)
            std::cout << "vecArr[" << i << "][" << j << "]" << vecArr[i][j] << std::endl;
        // WORKING AS EXPECTED
    }
    //right arr
    std::vector<std::vector<int> >vecArrTmp;
    size_t rightSize = right.size();
    if (right.size() % 2 != 0)
        rightSize++;
    std::cout << rightSize << std::endl;
    for (size_t i = 0; i < rightSize / 2; i++) {
        std::vector<int> pair2;
        if (right[i * 2] && right[i * 2 + 1]) {
            if (right[i * 2] && (!right[i * 2 + 1] || right[i * 2 + 1] < 0))
                pair2.push_back(right[i * 2]);
            else if (right[i * 2] > right[i * 2 + 1]) {
                pair2.push_back(right[i * 2 + 1]);
                pair2.push_back(right[i * 2]);
            }
            else if (right[i * 2] < right[i * 2 + 1]) {
                pair2.push_back(right[i * 2]);
                pair2.push_back(right[i * 2 + 1]);
            }
        }
        vecArrTmp.push_back(pair2);
    }
    for (size_t i = 0; i < vecArrTmp.size(); i++) {
        for (size_t j = 0; j < vecArrTmp[i].size(); j++)
            std::cout << "vecArrTmp[" << i << "][" << j << "]" << vecArrTmp[i][j] << std::endl;
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
            else if (vecArrTmp[0].empty())
                vecArrTmp.erase(vecArrTmp.begin());
        }
        vecArrTmp.push_back(tmpR);
        std::cout << "vecTmpSize =" << vecArrTmp.size() << std::endl;
    }
    for (size_t i = 0; i < vecArrTmp.size(); i++) {
        for (size_t j = 0; j < vecArrTmp[i].size(); j++)
            std::cout << "vecArr[" << i << "][" << j << "]" << vecArrTmp[i][j] << std::endl;
        // WORKING AS EXPECTED
    }
}

void    PmergeMe::merge(int ac, char**av) {
    (void) av;
    (void) ac;
    std::vector<int> result;
    if (!sortVerification(myVec))
        std::cout << "Not sorted\n";
    std::vector<int>l_vec;
    std::vector<int>r_vec;
    size_t sizeVec = myVec.size();
    if (myVec.size() % 2 != 0)
        sizeVec++;
    std::cout << sizeVec << std::endl;
    std::vector<std::vector<int> > vecArr;
    for (size_t i = 0; i < sizeVec; i++) {
        if (i < sizeVec / 2) {
            l_vec.push_back(myVec[i]);
        }
        else {
            r_vec.push_back(myVec[i]);
        }
    }
    sortVec(l_vec, r_vec, vecArr);
}



/*     for (size_t i = 0; i < l_vec.size(); i++) {
        //std::cout << "l_vec = " << l_vec[i] << std::endl;
    }
    //std::cout << l_vec.size() << std::endl;
    std::cout << "OKAY\n";
    for (size_t i = 0; i < l_vec.size() / 2; i++) {
        std::vector<int> tmp;
        tmp.push_back(l_vec[i * 2]);
        if (l_vec[i * 2 + 1])
            tmp.push_back(l_vec[i * 2 + 1]);
        vecArr[i].push_back(tmp);
        if (vecArr[i][0][0] > vecArr[i][0][1]) {
            int tmp;
            tmp = vecArr[i][0][0];
            vecArr[i][0][0] = vecArr[i][0][1];
            vecArr[i][0][1] = tmp; 
        }
        std::cout << "nbr1 = " << vecArr[i][0][0] << std::endl;
        std::cout << "nbr2 = " << vecArr[i][0][1] << std::endl;
    } */
    
    /* while (result.size() != (long unsigned int)(ac - 1)) {
        
    } */

int    PmergeMe::sortVerification(std::vector<int> vector) {
    for (size_t i = 0; i < vector.size() - 1; i++) {
        if (vector[i] > vector[i + 1])
            return 0;
    }
    return 1;
}

/* void    PmergeMe::sort(std::vector<int> left, std::vector<int> right) {
    int tmp;
    (void) right;
    if (!sortVerification(left)) {
        for (size_t i = 0; i < left.size() - 1; i += 2) {
            std::cout << "BEFORE:\n";
            std::cout << "sort -> left["<< i<<"] = " << left[i] << std::endl;
            std::cout << "sort -> left["<< i + 1 <<"] = " << left[i + 1] << std::endl;
            if (left[i] > left[i + 1]) {
                tmp = left[i];
                left[i] = left [i + 1];
                left[i + 1] = tmp;
            }
            std::cout << "AFTER:\n";
            std::cout << "sort -> left["<< i<<"] = " << left[i] << std::endl;
            std::cout << "sort -> left["<< i + 1 <<"] = " << left[i + 1] << std::endl;

        }
    } */
/*     if (!sortVerification(right)) {
        for (size_t i = 0; i < right.size() -1; i += 2) {
            if (right[i] > right[i + 1]) {
                tmp = right[i];
                right[i] = right [i + 1];
                right[i + 1] = tmp;
            }
        }
    } 
}
*/