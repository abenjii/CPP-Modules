#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <cstring>
# include <typeinfo>

template<typename T>
class   Array {
    private:
        T* arr;
        unsigned int sizeArr;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array<T> &copy);
        Array<T>& operator=(const Array<T> &o_copy);
        ~Array();

        //subscript operator []
        T& operator[](unsigned int index);
        int size();
        class   outOfRange : public std::exception {
            virtual const char* what() const throw() {
                return ("Out of Array Range");
            }
        };

        class   emptyArray : public std::exception {
            virtual const char * what() const throw () {
                return ("This Array is empty.");
            }
        };

};

template <typename T>
Array<T>::Array() : arr(new T[0]()), sizeArr(0){
    std::cout << "Array Default Constructor called." << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]()), sizeArr(n) {
    std::cout << "Array Constructor called." << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T> &copy) : arr(new T[copy.sizeArr]), sizeArr(copy.sizeArr) {
    for (int i = 0; static_cast<unsigned int>(i) < copy.sizeArr; i++)
        this->arr[i] = copy.arr[i];
    std::cout << "Array Copy Constructor called." << std::endl;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    std::cout << "Array Copy Assigment called." << std::endl;
    return (*this);
}

template <typename T>
Array<T>::~Array() {
    delete[] this->arr;
    std::cout << "Array Destructor called." << std::endl;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= this->sizeArr && this->sizeArr > 0)
        throw Array::outOfRange();
    else if (index == 0 && sizeArr == 0)
        throw Array::emptyArray();
    return this->arr[index];
}

template <typename T>
int Array<T>::size() {
    return (this->sizeArr);
}


#endif