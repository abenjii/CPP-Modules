#include "Span.hpp"

int main() {
    Span mySpan(10);
    try {
        //std::cout << mySpan3.longestSpan() << std::endl;
        //std::cout << mySpan3.shortestSpan() << std::endl;
        mySpan.addNumber(-10);
        mySpan.addNumber(-22);
        mySpan.addNumber(10);
        mySpan.addNumber(0);
        mySpan.addNumber(43);
        mySpan.addNumber(60);
        mySpan.addNumber(57);
        mySpan.addNumber(34);
        mySpan.addNumber(41);
        //mySpan.addNumber(123);
        std::cout << mySpan.longestSpan() << std::endl;
        std::cout << mySpan.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}