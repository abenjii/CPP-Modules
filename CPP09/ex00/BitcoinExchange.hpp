#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <cstdlib>
# include <sstream>
# include <exception>
# include <limits>
# include <cctype>
# include <sstream>

# define MAX 2147483647

class   BitcoinExchange {
    private:
        std::map<std::string, float> data;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange& operator=(const BitcoinExchange &o_copy);
        ~BitcoinExchange();

        void    validFormat(std::string fileName);
        void    extractData();
        void    printMap();
        void    runProgram(std::string arg);
        std::string    getDate(std::string line);
        float   getValue(std::string line);
        bool    notPositive(std::string line);
        bool    isNumber(std::string line);
        bool    invDate(std::string date);
        bool    maxExpected(std::string line);
        bool    checkDate(std::string line);
        std::string    resize(std::string line);
};

#endif