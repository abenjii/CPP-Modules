#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <cstring>
# include <typeinfo>



template<typename Iter, typename Func>
void    iter(Iter* arr, size_t length, Func func) {
    for (size_t i = 0; i < length; i++)
        func(arr[i]);
}

template<typename E>
void    printElement(E &element) {
    std::cout << element << std::endl;
}

template<typename Add>
void    addCont(Add &element) {
     if (typeid(element) == typeid(char))
    {
        if(element == 90 || element == 122)
        {
            element -= 25;
            return ;
        }
        element += 1;
    }
    element += 1;
}
#endif