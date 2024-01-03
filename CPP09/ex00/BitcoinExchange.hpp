#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <cstdlib>
# include <sstream>
# include <exception>

class   BitcoinExchange {
    private:
        std::map<std::string, std::string> data;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange& operator=(const BitcoinExchange &o_copy);
        ~BitcoinExchange();

        void    validFormat(std::string fileName);
        void    extractFile(std::string fileName);
        void    printMap();


};

#endif