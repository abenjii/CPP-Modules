#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <string>
# include <cstdlib>
# include <deque>

class PmergeMe {
    private:
        std::vector<int> myVec;
        //std::vector<int> tmp;
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &o_copy);
    public:
        PmergeMe();
        ~PmergeMe();
        void    exportData(int ac, char **args);
        void    printMyVec();
        void    printTmp();
        void    merge(int ac, char **av);
        void    sortVec(std::vector<int> left, std::vector<int> right, std::vector<std::vector<int> >);
        int     sortVerification(std::vector<int> vector);
};

#endif