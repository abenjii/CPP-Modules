#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <exception>
# include <vector>
# include <cstdlib>
# include <ctime>
# include <limits>

class Span {
    private:
        Span();
        unsigned int maxSize;
        std::vector<int> myVec;
    public:
        ~Span();
        Span(unsigned int N);
        Span(const Span &copy);
        Span& operator=(const Span &o_copy);
        void    addNumber(int nbr);
        int    shortestSpan();
        int    longestSpan();
        int getMaxSize() const;
        void    printSpan();
};

#endif