#include "Span.hpp"

int main() {
/*     Span mySpan(10);
    std::srand((std::time(0)));
    for (int i = 0; i < mySpan.getMaxSize(); i++)
    {
        mySpan.addNumber(std::rand() % 100);
    }
    Span mySpan2 = mySpan;
    std::cout << "==== mySpan2 ====\n";
    mySpan2.printSpan();
    std::cout << "==== mySpan ====\n";
    mySpan.printSpan();
    mySpan.addNumber(42); //test throw message when full */

    Span mySpan3(10);
    try {
        mySpan3.shortestSpan(); //throw message when empty  !!!NOT WORKING!!!
        mySpan3.longestSpan(); //throw message when empty
    }
    mySpan3.addNumber(-10);
    mySpan3.addNumber(-42);
    mySpan3.addNumber(10);
    mySpan3.addNumber(0);
    mySpan3.addNumber(42);

    std::cout << mySpan3.longestSpan() << std::endl;
    mySpan3.shortestSpan();
    return (0);
}