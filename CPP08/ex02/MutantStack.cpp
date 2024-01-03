#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() {
    std::cout << "MutantStack Default Constructor called." << std::endl;
}

template<typename T>
MutantStack<T>::~MutantStack() {
    std::cout << "MutantStack Destructor called." << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) {
    if (this != &copy)
        *this = copy;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    return (*this);
}