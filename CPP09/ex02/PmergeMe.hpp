#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <string>
# include <cstdlib>
# include <deque>
# include <iomanip>

class PmergeMe {
    private:
        std::vector<int> myVec;
        std::deque<int> myDeque;
        //std::vector<int> tmp;
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &o_copy);
    public:
        PmergeMe();
        ~PmergeMe();
        void    exportData(int ac, char **args);
        void    exportDataDeque(int ac, char **args);
        void    printMyVec();
        void    mergeVector(int ac, char **av);
        void    mergeDeque(int ac, char **av);
        void    sortVec(std::vector<int> left, std::vector<int> right, std::vector<std::vector<int> > vector);
        void    sortDeque(std::deque<int> left, std::deque<int> right, std::deque<std::deque<int> > deque);
        int     sortVerification(std::vector<int> vector);
};

#endif