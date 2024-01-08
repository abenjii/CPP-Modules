#include "BitcoinExchange.hpp"

//file format is in .csv
int iscsv(std::string fileName) {
    int dotPos = fileName.find_last_of('.');
    std::string format = fileName.substr(dotPos + 1);
    if (format == "csv")
        return 1;
    return (0);
}

std::map<std::string, float>    fillMap(std::string fileName) {
    std::ifstream file(fileName.c_str());
    std::map<std::string, float> result;

    if(!file.is_open()) {
        std::cout << "Error: Unable to open file.\n";
        return result;
    }
    if(file.is_open()) {  
        std::string line;

        while (std::getline(file, line)) {
            size_t sepPos = line.find_last_of('|');
            if (sepPos != std::string::npos) {
                std::string index = line.substr(0, sepPos - 1);
                float value = std::atof(line.substr(sepPos + 1).c_str());
                result[index] = value;
            }
        }
    }
    file.close();
    return result;
}

void    printMap(std::map<std::string, std::string> input) {
    std::map<std::string, std::string>::iterator it;
    for(it = input.begin(); it != input.end(); it++)
        std::cout << it->first << " | " << it->second << std::endl;
}

int main(int ac, char **av) {
    if (ac == 2) {
        try {
            BitcoinExchange myMap;
            myMap.extractData();
            myMap.validFormat(av[1]);
            //myMap.printMap();
            myMap.runProgram(av[1]);
        } catch (std::exception &e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
    }
    else {
        std::cout << "Error: program need a FILE ARGUMENT \'.csv\'" << std::endl;
        return 1;
    }

    
    return (0);
}