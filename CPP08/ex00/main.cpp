#include "easyfind.hpp"

int main() {
    std::vector<int> intVec;
    intVec.push_back(244);
    intVec.push_back(425);
    intVec.push_back(22);
    intVec.push_back(46);
    intVec.push_back(122);
    intVec.push_back(96);
    intVec.push_back(16);
    intVec.push_back(345);
    intVec.push_back(1);
    intVec.push_back(935355);
    std::vector<int>::iterator it;
    for (size_t i = 0; i < intVec.size(); i++)
        std::cout << "intVect[]: " << intVec[i] << std::endl;

    try {
        std::vector<int>::iterator res = easyfind(intVec, 1);
        std::cout << "Number in position: ";
        std::cout << std::distance(intVec.begin(), res);
        std::cout << " of the vector." << std::endl;

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::list<int> myList;
    myList.push_back(123);
    myList.push_back(43);
    myList.push_back(233);
    myList.push_back(514);
    myList.push_back(35);
    myList.push_back(456);
    myList.push_back(635);
    myList.push_back(7345);
    myList.push_back(854);
    myList.push_front(9);
    std::list<int>::iterator it_l;
    for (it_l = myList.begin(); it_l != myList.end(); it_l++) {
        std::cout << "myList[]: " << *it_l << std::endl;
    }

    try {
        std::list<int>::iterator resList = easyfind(myList, 9);
        std::cout << "Number in position: ";
        std::cout << std::distance(myList.begin(), resList);
        std::cout << " of the list." << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}