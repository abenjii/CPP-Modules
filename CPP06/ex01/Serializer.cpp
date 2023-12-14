#include "Serializer.hpp"

Serializer::Serializer() {
    //std::cout << "Serializer Default Constructor called." << std::endl; 
}

Serializer::Serializer(const Serializer &copy) {
    if (this != &copy)
        *this = copy;
}

Serializer& Serializer::operator=(const Serializer &o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    //std::cout << "Serializer Assigment operator called." << std::endl;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
}

Serializer::~Serializer() {
    //std::cout << "Serializer Destructor called." << std::endl;
}