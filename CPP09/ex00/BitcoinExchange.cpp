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

void    BitcoinExchange::extractData() {
    std::string fileName = "data.csv";
    std::ifstream file(fileName.c_str());

    if (!file.is_open())
        throw std::runtime_error("Error: Unable to open data File.");
    else {
        std::string line;

        while (std::getline(file, line)) {
            size_t sepPos = line.find(',');
            if (sepPos) {
                std::string key = line.substr(0, sepPos);
                float value = atof(line.substr(sepPos + 1).c_str());
                data[key] = value;
/*                 std::cout << key << std::endl;
                std::cout << value << std::endl; */
            }
        }
    }
    file.close();
}

void    BitcoinExchange::printMap() {
    std::map<std::string, float>::iterator it;
    for (it = this->data.begin(); it != this->data.end(); it++)
        std::cout << it->first << "|" << it->second << std::endl;
}

void    BitcoinExchange::runProgram(std::string arg) {
    //std::map<std::string, std::string>result;
    std::ifstream iFile(arg.c_str());
    if(!iFile.is_open())
        throw std::runtime_error("Error: Unable to open input File");
    else {
        std::string line;
        int flag = 0;
        if (!std::getline(iFile, line))
                throw std::runtime_error("Error: empty line.");
        while (std::getline(iFile, line)) {
            if (line == "date | value" && !flag) {
                flag = 1;
                continue;
            }
            else {
                std::string date = getDate(line);
                float value = getValue(line);
                float dValue = 0.0;

                if (date == line || !invDate(date))
                    std::cout << "Error: bad input => " << line << std::endl;
                else if (!checkDate(line))
                    std::cout << "Error: invalid date => " << line << std::endl;
                else if (!notPositive(line))
                    std::cout << "Error: not a positive number." << std::endl;
                else if (maxExpected(line))
                    std::cout << "Error: too large a number." << std::endl;
                else {
                    std::string fDate = date;        
                    std::map<std::string, float>::iterator it;
                    for (it = this->data.begin(); it != this->data.end(); it++) {
                        if (it->first == date) {
                            dValue = value * it->second;
                            break ;
                        }
                        else if (it->first > date) {
                            date = resize(date);
                            it = this->data.begin();
                        }
                    }
                    std::cout << fDate << " => " << value << " = " << dValue << std::endl;
                }
            }
        }
    }
}

std::string    BitcoinExchange::getDate(std::string line) {
    int sepFlag = 0;
    int spaceb4 = 0;
    int spaceAf = 0;
    std::string result;
    for (unsigned int i = 0; i < line.length(); i++) {
        if (line[i] == '|') {
            sepFlag++;
            if (line[i - 1] == ' ')
                spaceb4++;
            if (line[i + 1] == ' ')
                spaceAf++;
        }
    }
    if (sepFlag == 1 && spaceb4 == 1 && spaceAf == 1)
        result = line.substr(0, line.find('|') - 1);
    else
        result = line.substr();
    return result;
}

float   BitcoinExchange::getValue(std::string line) {
    float res = 0;;
    size_t sPos = line.find('|');
    std::string subline;
    if (sPos + 2 < line.size())
        subline = line.substr(sPos + 2, line.size());
    res = atof(subline.c_str());
    return res;
}

bool    BitcoinExchange::isNumber(std::string line) {
    bool fDigit = false;
    bool fDot = false;

    for (unsigned int i = 0; i < line.length(); i++) {
        if (std::isdigit(line[i]))
            fDigit = true;
        else if (line[i] == '.' && !fDot)
            fDot = true;
        else
            return false;
    }
    return fDigit;
}

bool    BitcoinExchange::invDate(std::string date) {
    bool res = true;
    for (size_t i = 0; i < date.length(); i++) {
        if (isalpha(date[i]))
            res = false;
    }
    return res;
}

bool    BitcoinExchange::notPositive(std::string line) {
    bool res = true;
    std::string subline;
    size_t sPos = line.find('|');
    if (line.size() >= sPos + 2) 
        subline = line.substr(sPos + 2, line.length());
    if (isalpha(subline[0]))
        res = false;
    if(atof(subline.c_str()) < 0)
        res = false;
    return res;
}

bool    BitcoinExchange::maxExpected(std::string line) {
    bool res = false;
    std::string subline;
    size_t sPos = line.find('|');
    if (line.size() >= sPos + 2)
        subline = line.substr(sPos + 2, line.length());
    if (atof(subline.c_str()) > MAX)
        return true;
    return res;
}

bool    BitcoinExchange::checkDate(std::string line) {
    bool res = true;
    size_t sPos = line.find('|');
    std::string subline;
    int dateSep = 0;
    int year = 0;
    int month = 0;
    int day = 0;
    if (line.size() >= sPos)
        subline = line.substr(0, sPos - 1);
    for (size_t i = 0;i < subline.length();i++) {
        if (line[i] == '-')
            dateSep++;
    }
    if (subline.size() == 10 && dateSep == 2) {
        year = atoi(line.substr(0, 4).c_str());
        if (year < 2009)
            res = false;
        month = atoi(line.substr(5, 6).c_str());
        if (month < 1 || month > 12)
            res = false;
        day = atoi(line.substr(8, 9).c_str());
        if ((day < 1 || day > 31) && (month == 1 || month == 3 || month == 5 
            || month == 7 || month == 8 || month == 10 || month == 12))
            res = false;
        if ((day < 1 || day > 30) && (month == 4 || month == 6 || month == 9 
            || month == 11))
            res = false;
        if (year % 4 != 0 && month == 2 && (day < 1 || day > 28))
            res = false;
    }
    else
        res = false;
    return res;
}

std::string BitcoinExchange::resize(std::string line) {
    std::string res;
    std::stringstream ss;
    for (size_t i = 0; i < line.length(); i++) {
        if (line[i] == '-')
            i++;
        res+= line[i];
    }
    int int_res = atoi(res.c_str());
    int_res--;
    ss << int_res;
    res = ss.str();
    if (res.length() == 8) {
        res.insert(4, "-");
        res.insert(7, "-");
    }
    return res;
}