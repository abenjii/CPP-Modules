#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cstdlib>
# include <string>
# include <iomanip>
# include <limits>
# include <cstring>

class ScalarConverter {
    private:
        std::string input;
        ScalarConverter();
    public:
        ScalarConverter(std::string input);
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &o_copy);
        virtual ~ScalarConverter();
        
        //set and get
        void    setInput(std::string content);
        std::string getInput() const;

        //functions
        static void     convert(std::string input);
        static long      toInt(std::string input);
        static float    toFloat(std::string input);
        static double   toDouble(std::string input);
        static char     toChar(std::string input);

        //aux to converter
        static void    converterChar(std::string input);
        static void    converterInt(std::string input);
        static void    converterFloat(std::string input);
        static void    converterDouble(std::string input);
        static size_t  calcPrecision(std::string input);
};

#endif
