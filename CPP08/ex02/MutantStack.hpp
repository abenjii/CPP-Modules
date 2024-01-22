#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <exception>
# include <vector>
# include <cstdlib>
# include <ctime>
# include <limits>
# include <stack>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T, std::deque<T> > {
    public:
        MutantStack() {
            //std::cout << "MutantStack Default Constructor called." << std::endl;
        };
        MutantStack& operator=(const MutantStack &o_copy) {
            if (this != &o_copy)
            *this = o_copy;
            return (*this);
        };
        MutantStack(const MutantStack &copy) {
            if (this != &copy)
            *this = copy;
        };
        ~MutantStack() {
            //std::cout << "MutantStack Destructor called." << std::endl;
        };
        typedef typename std::deque<T>::iterator iterator;
        
        iterator begin() {
            return this->c.begin();
        }
        iterator end() {
            return this->c.end();
        }
};

#endif