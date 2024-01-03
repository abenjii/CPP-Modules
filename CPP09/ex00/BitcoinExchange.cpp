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
        throw std::runtime_error("Error: Bad extension file it must be \'.csv\'.");
}

void    BitcoinExchange::extractFile(std::string fileName) {
    std::ifstream file(fileName.c_str());

    if (!file.is_open())
        throw std::runtime_error("Error: Unable to open File.");
    else {
        std::string line;

        while (std::getline(file, line)) {
            size_t sepPos = line.find('|');
            std::cout << sepPos << std::endl;
            if (sepPos) {
                std::string key = line.substr(0, sepPos - 1);
                std::string value = line.substr(sepPos + 2);
                data[key] = value;
                std::cout << key << " - ";
                std::cout << value << std::endl;
            }
        }
    }
    file.close();
}

void    BitcoinExchange::printMap() {
    std::map<std::string, std::string>::iterator it;
    for (it = this->data.begin(); it != this->data.end(); it++)
        std::cout << it->first << "|" << it->second << std::endl;
}