#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <cstdlib>
# include <ctime>

class Base {
    public:
        Base();
        Base(const Base & copy);
        Base& operator=(const Base& o_copy);
        virtual ~Base();
};

class A : public Base {
    public:
        A(){};
        ~A(){};
};

class B : public Base {
    public:
        B(){};
        ~B(){};
};

class C : public Base {
    public:
        C(){};
        ~C(){};
};

Base * generate(void);
void    identify(Base* p);
void    identify(Base& p);

#endif