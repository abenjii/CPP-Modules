#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : maxSize(N) {}

Span::Span(const Span &copy) {
    maxSize = copy.maxSize;
    myVec = copy.myVec;
    if (this != &copy)
        *this = copy;
}

Span& Span::operator=(const Span &o_copy) {
    maxSize = o_copy.maxSize;
    myVec = o_copy.myVec;
    return (*this);
}

Span::~Span() {
//    std::cout << "Span Destructor called." << std::endl;
}

void    Span::addNumber(int nbr) {
    if (myVec.size() == maxSize)
        throw std::runtime_error("Error: Span already full on elements.");
    this->myVec.push_back(nbr);

}

int Span::getMaxSize() const {
    return this->maxSize;
}

void    Span::printSpan() {
    if (myVec.empty())
        throw std::runtime_error("Error: No Numbers Stored in the Span.");
    for (std::vector<int>::iterator print = myVec.begin(); print != myVec.end(); print++)
        std::cout << *print << std::endl;
}

int    Span::shortestSpan(){
    if (myVec.empty() || myVec.size() < 2)
        throw std::runtime_error("Error: No Numbers Stored in the Span.");
    std::vector<int>::iterator it;
    int shortDiff = myVec.at(0) - myVec.at(1);
    for (size_t i = 0; i != myVec.size(); i++) {
        for (size_t j = 0 ; j != myVec.size(); j++) {
            int nb1 = myVec[i];
            int nb2 = myVec[j];
            if (i != j) {
                int res = nb1 - nb2;
                if (res < 0)
                    res *= -1;
                if (res < shortDiff)
                    shortDiff = res;
            }
        }
    }
    return shortDiff;
}

int     Span::longestSpan() {
    if (myVec.empty() || myVec.size() < 2)
        throw std::runtime_error("Error: Not Enough Numbers Stored in the Span.");
    int minValue = myVec.at(0);
    for (std::vector<int>::iterator result = myVec.begin(); result != myVec.end(); result++)
    {
        if (*result < minValue)
            minValue = *result;
    }
    int maxValue = myVec.at(0);
    for (std::vector<int>::iterator result = myVec.begin(); result != myVec.end(); result++)
    {
        if (*result > maxValue)
            maxValue = *result;
    }
    return maxValue - minValue;
}