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

void    RPN::print() {
    while (!this->data.empty()) {
        std::cout << "stack: " << this->data.top() << std::endl;
        this->data.pop();
    }
}

void    RPN::resolution(std::string arg) {
    std::string sValue;
    int value = 0;
    std::string symb = "";
    for (int i = 0; arg[i]; i++) {
        if (isSymbol(arg[i])) {
            symb += arg[i];
        }
        else if (!isSymbol(arg[i]) && arg[i] != ' ' && arg[i+1] == ' ') {
            sValue += arg[i];
            value = atoi(sValue.c_str());
            sValue.clear();
            this->data.push(value);
        }
    }
    std::stack<int> revStack;
    while (!data.empty()) {
        revStack.push(data.top());
        data.pop();
    }
/*     while (!revStack.empty()) {
        std::cout << "RevStack = " << revStack.top() << std::endl;
        revStack.pop();
    } */
    int result = 0;
    int nbr1 = 0;
    int nbr2 = 0;
    int k = 0;
    while (revStack.size() != 1) {
        nbr1 = revStack.top();
        revStack.pop();
        nbr2 = revStack.top();
        revStack.pop();
        //std::cout << "nbr1 = " << nbr1 << std::endl;
        //std::cout << "nbr2 = " << nbr2 << std::endl;
        //std::cout << "symb[] =" << symb[k] << std::endl;
        if (symb[k]) {
            if (symb[k] == '+') {
                result = nbr1 + nbr2;
                //std::cout << "result = " << result << std::endl;
            }
            else if (symb[k] == '-') {
                result = nbr1 - nbr2;
                //std::cout << "result = " << result << std::endl;
            }
            else if (symb[k] == '*') {
                result = nbr1 * nbr2;
                //std::cout << "result = " << result << std::endl;
            }
            else if (symb[k] == '/') {
                if (nbr2 == 0)
                    throw std::runtime_error("Error: Divisionby zero is undefined");
                result = nbr1 / nbr2;
                //std::cout << "result = " << result << std::endl;
            }
            k++;
            //std::cout << "k = " << k << std::endl;
        }
        revStack.push(result);
    }
    //(verificar) se o argumento comeca com 2 numeros



    //std::cout << "Str = " << symb << std::endl;
    std::cout << result << std::endl;
}
