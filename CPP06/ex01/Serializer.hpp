#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <string>
# include <cstdlib>

class   Data {
    //private:
    public:
        int nbr;
        Data(int nbr) : nbr(nbr){};
        ~Data(){};
};

class Serializer {
    private:
        Serializer();
    public:
        Serializer(const Serializer &copy);
        Serializer& operator=(const Serializer &o_copy);
        virtual ~Serializer();

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
    
};

#endif