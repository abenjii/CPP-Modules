#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <string>

class PmergeMe {
    private:
        std::vector<int> myVec;
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &o_copy);

};

#endif