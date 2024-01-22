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
    if (arg[arg.length() - 1] != '-' && arg[arg.length() - 1] != '+'
        && arg[arg.length() - 1] != '/' && arg[arg.length() - 1] != '*')
        return 0;
    for (int i = 0; arg[i]; i++) {
        if ((arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/')
            && (arg[i+1] == '+' || arg[i+1] == '-' || arg[i+1] == '*' || arg[i+1] == '/'))
            return 0;
    }
    return 1;
}

int isSymbol_arg(char c) {
    if (c == '-' || c == '+' || c == '/' || c == '*' || c == ' ')
        return 1;
    return 0;
}

int checkValue(std::string arg) {
    std::string value;
    for (int i = 0; arg[i]; i++) {
        if (!isSymbol_arg(arg[i]))
            value += arg[i];
        else if (isSymbol_arg(arg[i])) {
            int check = atoi(value.c_str());
            if (check < -9 || check > 9)
                return 0;
            value.clear();
        }
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

int verifyArgs(char *av) {
    if (!mSymbols(av) || !notSymbOrNum(av))
        return 0;
    if (!checkValue(av))
        return 0;
    if (justSymbols(av))
        return 0;
    return 1;
}

int main(int ac, char **av) {
    if (ac != 2 || !verifyArgs(av[1])) {
        std::cout << "Error" << std::endl;
        return (0);
    }
    try {
        RPN stack;
        stack.exportData(av[1]);
        stack.resolution();
        stack.print();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}