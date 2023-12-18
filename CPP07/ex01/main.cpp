#include "iter.hpp"

int main() {
    std::cout << "- - - - Integers - - - -" << std::endl;
    int arr[] = {1, 2, 3, 4, 5, 90};
    size_t arrSize = sizeof(arr) / sizeof(arr[0]);
    std::cout << "(before)" << std::endl;
    iter(arr, arrSize, printElement<int>);
    iter(arr, arrSize, addCont<int>);
    std::cout << std::endl;
    std::cout << "(after)" << std::endl;
    iter(arr, arrSize, printElement<int>);
    std::cout << std::endl;

    std::cout << "- - - - Floats - - - -" << std::endl; 
    float arrf[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7};
    size_t arrSizef = sizeof(arrf) / sizeof(arrf[0]);
    std::cout << "(before)" << std::endl;
    iter(arrf, arrSizef, printElement<float>);
    iter(arrf, arrSizef, addCont<float>);
    std::cout << std::endl;
    std::cout << "(after)" << std::endl;
    iter(arrf, arrSizef, printElement<float>);
    std::cout << std::endl;

    std::cout << "- - - - Chars - - - -" << std::endl;
    char string[] = "Alexandre";
    size_t arrSizeS = sizeof(string) / sizeof(string[0]) -1;
    std::cout << "(before)" << std::endl;
    iter(string, arrSizeS, printElement<char>);
    iter(string, arrSizeS, addCont<char>);
    std::cout << std::endl;
    std::cout << "(after)" << std::endl;
    iter(string, arrSizeS, printElement<char>);
    std::cout << std::endl;

    return (0);
}