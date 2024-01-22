#include "RPN.hpp"

RPN::RPN() {
    //std::cout << "RPN Constructor called." << std::endl;
}

/* RPN::RPN(const RPN &copy) {
    this->data = copy.data;
    //std::cout << "RPN Copy Constructor called." << std::endl;
}

RPN& RPN::operator=(const RPN &o_copy) {
    this->data = o_copy.data;
    //std::cout << "RPN Copy Assigment called." << std::endl;
    return (*this);
} */

RPN::~RPN() {
    //std::cout << "RPN Destructor called." << std::endl;
}

int RPN::isSymbol(int c) {
    if (c == '+')
        return 43;
    if (c == '-')
        return 45;
    if (c == '/')
        return 47;
    if (c == '*')
        return 42;
    return 0;
}

int RPN::isNum(int c) {
    if (c >= 0 && c <= 9)
        return c;
    return 0;
}

void    RPN::exportData(std::string arg) {
    std::string sValue;
    int value = 0;
    for (int i = 0; arg[i]; i++) {
        if (isSymbol(arg[i]) && (arg[i+1] == ' ' || !arg[i+1])) {
            value = arg[i];
            this->data.push(value);
        }
        else if (isSymbol(arg[i]) && isdigit(arg[i+1])) {
            sValue += arg[i];
            sValue += arg[++i];
            //std::cout << "sValue: " << sValue << std::endl; 
            value = atoi(sValue.c_str());
            sValue.clear();
            this->data.push(value);
        }
        else if (!isSymbol(arg[i]) && arg[i] != ' ' && arg[i+1] == ' ') {
            sValue += arg[i];
            value = atoi(sValue.c_str());
            sValue.clear();
            this->data.push(value);
        }
    }
}

void    RPN::print() {
    while (!this->data.empty()) {
        std::cout << "stack: " << this->data.top() << std::endl;
        this->data.pop();
    }
}

void    RPN::resolution() {
    std::stack<int> revStack;
    while (!this->data.empty()) {
        revStack.push(this->data.top());
        this->data.pop();
    }
    float result = 0;

    std::cout << result << std::endl;
}
