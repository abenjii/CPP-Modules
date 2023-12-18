#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <cstring>

template<typename T>
class   Array {
    private:
        T* arr;
    public:
        Array();
        Array(T arg);
        Array(const Array &copy);
        Array& operator=(const Array &o_copy);
        ~Array();

};

# include "Array.tpp"//test this include at the top of file :D


#endif