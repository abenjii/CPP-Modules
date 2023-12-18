#include "Base.hpp"

int main()
{
    Base* obj = generate();
    identify(obj);

    Base* obj2 = generate();
    identify(obj2);
    identify(*obj2);

    delete obj;
    delete obj2;
    return (0);
}