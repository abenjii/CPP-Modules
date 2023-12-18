#include "Base.hpp"

Base::Base() {

}

Base::Base(const Base& copy) {
    *this = copy;
}

Base& Base::operator=(const Base& o_copy) {
    if (this != &o_copy)
        *this = o_copy;
    return (*this);
}

Base::~Base() {

}

Base* generate(void) {
    std::srand(static_cast<unsigned>(std::time(NULL)));

    int nbr = std::rand() % 3;
    switch (nbr) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return NULL;
    }
}

void    identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
    
}

void   identify(Base& p) {
    identify(&p);
}
