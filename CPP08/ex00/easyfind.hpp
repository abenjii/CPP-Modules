#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>
# include <list>
# include <map>

template<typename T>
typename T::iterator easyfind(T& container, int nbr) {
    typename T::iterator result = std::find(container.begin(), container.end(), nbr);
    if (result == container.end()) {
        throw std::runtime_error("Error: Number not founded!");
    }
    return result;
};

#endif