#include "whatever.hpp"

int main( void ) {
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}

/* int main() {
    int nbr1 = 5;
    int nbr2 = 7;

    std::cout << "- - - -   With Int   - - - -" << std::endl;
    std::cout << "(swap)" << std::endl;
    swap(nbr1, nbr2);
    std::cout << "First argument: '" << nbr1 << "'" << std::endl;
    std::cout << "Secound argument: '" << nbr2 << "'" << std::endl;
    std::cout << "(max)" << std::endl;
    max(nbr1, nbr2);
    std::cout << max(nbr1, nbr2) << std::endl;
    std::cout << "(min)" << std::endl;
    min(nbr1, nbr2);
    std::cout << min(nbr1, nbr2) << std::endl;
    std::cout << std::endl;

    std::string string1 = "Alexandre";
    std::string string2 = "Barbosa";

    std::cout << "- - - -   With String   - - - -" << std::endl;
    std::cout << "(swap)" << std::endl;
    swap(string1, string2);
    std::cout << "First argument: '" << string1 << "'" << std::endl;
    std::cout << "Secound argument: '" << string2 << "'" << std::endl;
    std::cout << "(max)" << std::endl;
    max(string1, string2);
    std::cout << max(string1, string2) << std::endl;
    std::cout << "(min)" << std::endl;
    std::cout << min(string1, string2) << std::endl;
    std::cout << std::endl;

    float float1 = 21.4;
    float float2 = 42.2;

    std::cout << "- - - -   With Float   - - - -" << std::endl;
    std::cout << "(swap)" << std::endl;
    swap(float1, float2);
    std::cout << "First argument: '" << float1 << "'" << std::endl;
    std::cout << "Secound argument: '" << float2 << "'" << std::endl;
    std::cout << "(max)" << std::endl;
    std::cout << max(float1, float2) << std::endl;
    std::cout << "(min)" << std::endl;
    std::cout << min(float1, float2) << std::endl;
    std::string stringD = "Compile Error";
    float floatD = 42.2;

    std::cout << "- - - -   With Different Types \"Compile error\"  - - - -" << std::endl;
    swap(stringD, floatD);
    std::cout << "First argument: '" << float1 << "'" << std::endl;
    std::cout << "Secound argument: '" << float2 << "'" << std::endl;
    std::cout << std::endl;
    return (0);
}
*/