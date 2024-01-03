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
        std::map<std::string, float> data;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange& operator=(const BitcoinExchange &o_copy);
        ~BitcoinExchange();

        //void    readFile(std::string fileName);
        void    validFormat(std::string fileName);

        class   badExtension : public std::exception {
            virtual const char* what() const throw() {
                return ("Bad extension file it must be \'.csv\'.");
            }
        };


};

#endif