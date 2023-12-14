#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
    //std::cout << "ScalarConverter Default Constructor called." << std::endl;
}

ScalarConverter::ScalarConverter(std::string input) : input(input) {
    //std::cout << "ScalarConverter Constructor called." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) : /* c(copy.c), i(copy.i),
f(copy.f), d(copy.d), */ input(copy.input) {
    //std::cout << "ScalarConverter Copy Constructor called." << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    //std::cout << "ScalarConverter Assigment Operator called." << std::endl;
    return (*this);
}

ScalarConverter::~ScalarConverter() {
    //std::cout << "ScalarConverter Destructor called." << std::endl;
}

void    ScalarConverter::setInput(std::string content) {
    this->input = content;
}

std::string ScalarConverter::getInput() const {
    return (this->input);
}

long  ScalarConverter::toInt(std::string input) {
    long result = atol(input.c_str());
    return (result);
}

void    ScalarConverter::converterInt(std::string input) {
    if (input.length() > 1 && !isdigit(input[0]))
        std::cout << "int: impossible" << std::endl;
    else if (input.length() == 1 && (input[0] >= 1 && input[0] <= 126) 
        && !isdigit(input[0]))
        std::cout << "int: " << toascii(input[0]) << std::endl;
    else if ((atol(input.c_str()) <= std::numeric_limits<int>::max())
        && (atol(input.c_str()) >= std::numeric_limits<int>::min()))
        std::cout << "int: " << toInt(input) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;//se atingir +/- max/min
}

float   ScalarConverter::toFloat(std::string input) {
    const char* c_input = input.c_str();
    float result = atof(c_input);
    return (result);
}

void    ScalarConverter::converterFloat(std::string input) {
    float f = std::numeric_limits<float>::infinity();
    if (!input.compare("nan") || !input.compare("nanf"))
        std::cout << "float: nanf" << std::endl;
    else if (input.length() > 1 && isalpha(input[0]))
        std::cout << "float: impossible" << std::endl;
    else if (input.length() == 1 && (input[0] >= 1 && input[0] <= 126)
        && !isdigit(input[0]))
        std::cout << "float: " << toascii(input[0]) << ".0f" << std::endl;
    else if (!input.compare("-inff") || !input.compare("-inf"))
    {
        f *= -1;
        std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
    }
    else if (!input.compare("+inff") || !input.compare("+inf"))
        std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
    else if ((atof(input.c_str()) <= std::numeric_limits<float>::max())
        && (atof(input.c_str()) >= std::numeric_limits<float>::min()))
    {
        std::cout << "float: " << std::fixed << std::setprecision(calcPrecision(input));
        std::cout << toFloat(input) << "f" << std::endl;
    }
    else
        std::cout << "float: impossible" << std::endl;//se atingir +/- max/min
}

double  ScalarConverter::toDouble(std::string input) {
    const char* c_input = input.c_str();
    double result = atof(c_input);
    return (result);
}

void    ScalarConverter::converterDouble(std::string input) {
    double f = std::numeric_limits<double>::infinity();
    if (!input.compare("nan") || !input.compare("nanf"))
        std::cout << "double: nan" << std::endl;
    else if (input.length() > 1 && isalpha(input[0]))
        std::cout << "double: impossible" << std::endl;
    else if (input.length() == 1 && (input[0] >= 1 && input[0] <= 126)
        && !isdigit(input[0]))
        std::cout << "double: " << toascii(input[0]) << ".0" << std::endl;
    else if (!input.compare("-inff") || !input.compare("-inf"))
    {
        f *= -1;
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    }
    else if (!input.compare("+inff") || !input.compare("+inf"))
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    else if ((atof(input.c_str()) <= std::numeric_limits<double>::max())
        && (atof(input.c_str()) >= std::numeric_limits<double>::min()))
    {
        std::cout << "double: "<< std::fixed << std::setprecision(calcPrecision(input));
        std::cout << toDouble(input) << std::endl;
    }
    else
        std::cout << "double: impossible" << std::endl; 
}

char    ScalarConverter::toChar(std::string input) {
    char result;
    if (input.length() == 1)
        result = input[0];
    return (result);
}

void    ScalarConverter::converterChar(std::string input) {
    if (!input.compare("0"))
        std::cout << "char: " << "Non displayable" << std::endl;
    else if (input.length() > 1 && (toInt(input) > 0 && toInt(input) < 127))
    {
        char res = toascii(toInt(input));
        std::cout << "char: " << "'" << res << "'" << std::endl;
    }
    else if (input.length() == 1)
        std::cout << "char: " << "'" << toChar(input) << "'" << std::endl;
    else if (input.length() > 1)
        std::cout << "char: " << "impossible" << std::endl;
}

size_t    ScalarConverter::calcPrecision(std::string input) {
    size_t res = 0;
    int flag = 0;
    for (size_t i = 0; i < input.length() - 1; i++)
    {
        if (input[i] == '.' && flag == 1)
            return (res);
        if (input[i] == '.' && flag == 0)
            flag = 1;
        if (input[i] && flag == 1 && !isdigit(input[i]))
            res++;
    }
    return (res);
}

void ScalarConverter::convert(std::string input) {
    converterChar(input);
    converterInt(input);
    converterFloat(input);
    converterDouble(input);
}