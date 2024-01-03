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
    try {
        if (this->myVec.size() >= this->maxSize)
            throw fullStore();
        this->myVec.push_back(nbr);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

int Span::getMaxSize() const {
    return this->maxSize;
}

void    Span::printSpan() {
    try {
        if (myVec.empty())
            throw emptyVector();
        for (std::vector<int>::iterator print = myVec.begin(); print != myVec.end(); print++)
        {
            std::cout << *print << std::endl;
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void    Span::shortestSpan() {
    int shortest = myVec.at(0);
    try {    
        if (myVec.empty())
            throw emptyVector();
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    for (std::vector<int>::iterator result = myVec.begin(); result != myVec.end(); result++)
    {
        if (*result < shortest)
            shortest = *result;
    }
    std::cout << "The Shortest Number is: " << shortest << std::endl;
}

void    Span::longestSpan() {
    int shortest = myVec.at(0);
    try {    
        if (myVec.empty())
            throw emptyVector();
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    for (std::vector<int>::iterator result = myVec.begin(); result != myVec.end(); result++)
    {
        if (*result > shortest)
            shortest = *result;
    }
    std::cout << "The longest Number is: " << shortest << std::endl;
}