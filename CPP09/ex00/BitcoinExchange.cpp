#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    //std::cout << "BitcoinExchange Constructor called.\n";
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
    this->data = copy.data;
    //std::cout << "BitcoinExchange Copy Cosntructor called.\n";
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &o_copy) {
    this->data = o_copy.data;
    //std::cout << "BitcoinExchange Assigment operator called.\n";
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {
    //std::cout << "BitcoinExchange Desstructor called.\n";
}

void    BitcoinExchange::validFormat(std::string fileName) {
    int dotPos = fileName.find_last_of('.');
    std::string format = fileName.substr(dotPos + 1);
    if (format != "csv")
        throw badExtension();
}