#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template<typename S>
void    swap(S &firstArg, S &secoundArg) {
    S tmp = firstArg;
    firstArg = secoundArg;
    secoundArg = tmp;
}

template<typename Max>
Max&    max(Max &firstArg, Max &secoundArg) {
    if(firstArg <= secoundArg)
        return secoundArg;
    else
        return firstArg;
}

template<typename Min>
Min&    min(Min &firstArg, Min &secoundArg) {
    if (firstArg >= secoundArg)
        return secoundArg;
    else
        return firstArg;
}


#endif