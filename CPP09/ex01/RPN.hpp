#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <exception>
# include <cctype> 
# include <sstream>
# include <stack>

class RPN : public std::stack<int, std::deque<int> >{
    private:
        std::stack<int> data;
    public:
        RPN();
        //RPN(const RPN &copy);
        //RPN& operator=(const RPN &o_copy);
        ~RPN();
        typedef typename std::deque<int>::iterator iterator;
        iterator being(){return this->c.begin();};
        iterator end(){return this->c.end();};

        int isSymbol(int c);
        int isNum(int c);
        void    exportData(std::string arg);
        void    print();
        void    resolution();



};


#endif