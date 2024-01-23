#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <exception>
# include <cctype> 
# include <sstream>
# include <stack>

class RPN {
    private:
        std::stack<int> data;

        RPN(const RPN &copy);
        RPN& operator=(const RPN &o_copy);
    public:
        RPN();
        ~RPN();

        int isSymbol(int c);
        //int isNum(int c);
        void    print();
        void    resolution(std::string arg);
};


#endif