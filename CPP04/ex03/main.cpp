#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    //std::cout << "DEBUG WARINING1" << std::endl;
    me->use(1, *bob);
    //std::cout << "DEBUG WARINING2" << std::endl;

/*     std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "<<<<<<<<<<<Testing Deep Copies>>>>>>>>>>>" << std::endl;
	std::cout << std::endl;
	ICharacter* a = new Character("alex");
	ICharacter* a2 = a->clone();

	std::cout << std::endl;
	a->printAddress();
	a2->printAddress();
	std::cout << std::endl;
 */
    delete bob;
    delete me;
    delete src;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "<<<<<<<<<<<Testing the full materia to learn>>>>>>>>>>>" << std::endl;
    std::cout << "<<<<<<<<<<<    and wrong types   >>>>>>>>>>>" << std::endl;
    std::cout << std::endl;
    IMateriaSource* src2 = new MateriaSource();
    src2->learnMateria(new Ice());
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());
    src2->learnMateria(new Cure());
    src2->learnMateria(new Cure());
    std::cout << std::endl;
    std::cout << "<<<< wrong type >>>>>" << std::endl;
    ICharacter* evaluator = new Character("evaluator");
    AMateria* tmp1;
    tmp1 = src2->createMateria("ice1");
    evaluator->equip(tmp1);
    tmp1 = src2->createMateria("curee");
    tmp1 = src2->createMateria("ice");
    tmp1 = src2->createMateria("cure");
    
    delete evaluator;
    delete src2;
    return 0;
}
