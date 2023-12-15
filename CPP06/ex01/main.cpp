#include "Serializer.hpp"

int main() {
/*     Data* obj;
    std::uintptr_t checkvalue;
    Data* checkObj;

    obj = new Data(42);
    checkvalue = Serializer::serialize(obj);
    checkObj = Serializer::deserialize(checkvalue);
    std::cout << "obj nbr = " << obj->nbr << std::endl;
    std::cout << "checkObj nbr = " << checkObj->nbr << std::endl; */

    Data* obj = new Data(42);
    Data* alex = new Data(30);
    Data* evaluator;

    std::cout << "obj->nbr=" << obj->nbr << std::endl;
    std::cout << "alex->nbr=" << alex->nbr << std::endl;
    uintptr_t checkvalue = Serializer::serialize(obj);
    std::cout << std::endl;
    std::cout << std::endl;
    evaluator = Serializer::deserialize(checkvalue);
    std::cout << "obj->nbr=" << obj->nbr << std::endl;
    std::cout << "alex->nbr=" << alex->nbr << std::endl;
    std::cout << "evaluator->nbr=" << evaluator->nbr << std::endl;

    delete obj;
    delete alex;
    return (0);
}