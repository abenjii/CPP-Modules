#include "Serializer.hpp"

int main() {
    Data* obj;
    uintptr_t checkvalue;
    Data* checkObj;

    obj = new Data(42);
    checkvalue = Serializer::serialize(obj);
    checkObj = Serializer::deserialize(checkvalue);
    std::cout << "obj nbr = " << obj->nbr << std::endl;
    std::cout << "checkObj nbr = " << checkObj->nbr << std::endl;
}