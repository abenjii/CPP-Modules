#include "RPN.hpp"

int notSymbOrNum(std::string arg) {
    for (int i = 0; arg[i]; i++) {
        if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '+' && arg[i] != '-'
            && arg[i] != '*' && arg[i] != '/' && arg[i] != ' ')
            return 0;
    }
    return 1;
}

int mSymbols(std::string arg) {
    size_t k = 0;
    while (k < arg.length()) {
        if (arg[k] != ' ')
            break;
        k++;
    }
    if (arg[k] == '-' || arg[k] == '+'
        || arg[k] == '/' || arg[k] == '*')
        return 0;
    int j = arg.length() - 1;
    while (j >= 0) {
        if (arg[j] != ' ')
            break;
        j--;
    }
    if (arg[j] != '-' && arg[j] != '+'
        && arg[j] != '/' && arg[j] != '*')
        return 0;
    for (int i = 0; arg[i]; i++) {
        if ((arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/')
            && (arg[i+1] == '+' || arg[i+1] == '-' || arg[i+1] == '*' || arg[i+1] == '/'))
            return 0;
    }
    return 1;
}

int isSymbol_arg(char c) {
    if (c == '-' || c == '+' || c == '/' || c == '*')
        return 1;
    return 0;
}

int checkValue(std::string arg) {
    std::string value;
    for (int i = 0; arg[i]; i++) {
        if ((!isSymbol_arg(arg[i]) && arg[i] != ' ')) {
            if (isdigit(arg[i + 1]))
                return 0;
            value += arg[i];
            //std::cout << "AQUI=" << value << std::endl;
            int check = atoi(value.c_str());
            if (check > 9)
                return 0;
            value.clear();
        }
        if (isSymbol_arg(arg[i]) && (arg[i + 1] != '\0' && !isdigit(arg[i + 1]) && arg[i + 1] != ' ')) {
            return 0;
        }
        else
            continue ;
    }
    return 1;
}

int justSymbols(std::string arg) {
    for (int i = 0; arg[i]; i++) {
        if (isdigit(arg[i]))
            return 0;
    }
    return 1;
}

int cSymbAndDig(char *arg) {
    int cDigit = 0;
    int cSymb = 0;
    for (int i = 0; arg[i]; i++) {
        if (isdigit(arg[i]))
            cDigit++;
        if (isSymbol_arg(arg[i]))
            cSymb++;
    }
    if (cDigit != cSymb + 1)
        return 0;
    return 1;
}

int someSpace(char *arg) {
    for (size_t i = 0; arg[i]; i++) {
        if ((isdigit(arg[i]) || isSymbol_arg(arg[i])) && (isdigit(arg[i+1]) || isSymbol_arg(arg[i+1])))
            return 0;
    }
    return 1;
}


int verifyArgs(char *av) {
    if (!mSymbols(av) || !notSymbOrNum(av) || !cSymbAndDig(av) || !checkValue(av))
        return 0;
    if (justSymbols(av))
        return 0;
    if (!someSpace(av))
        return 0;
    return 1;
}

int countSymbols(char * arg) {
    int res = 0;
    for (size_t i = 0; arg[i]; i++) {
        if (arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/')
            res++;
    }
    return res;
}


int main(int ac, char **av) {
    if (ac != 2 || !verifyArgs(av[1])) {
        std::cout << "Error" << std::endl;
        return (0);
    }
    try {
        RPN stack;
        //std::cout << "AQUI=" << countSymbols(av[1]) << std::endl;
        stack.resolution(av[1]);
        stack.print();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}