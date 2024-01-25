#include "PmergeMe.hpp"
#include <cstdlib>
/*

O algoritmo Ford-Johnson, também conhecido como "merge-insertion sort," é um algoritmo de ordenação 
que combina técnicas de merge sort e insertion sort. Aqui está uma explicação passo a passo do algoritmo:

Suponha que você tenha uma lista de elementos que precisa ordenar.

    Divisão Inicial:
        Divida a coleção em pares de dois elementos, se possível. Se houver um número ímpar de elementos, 
        o último elemento não será emparelhado.
        
        Ordene cada par de elementos individualmente.

    Ordenação Recursiva:
        Recursivamente, ordene os pares de elementos considerando o elemento de maior valor em cada par.
        Se houver um número ímpar de elementos, o último elemento não é considerado como tendo o maior valor e é deixado no final da coleção.
        Rotule os elementos de maior valor como a1, a2, a3,..., an/2 (onde n é o número total de elementos) e os outros como b1, b2, b3,..., bn/2. 
        Garanta que bk ≤ ak para cada k.

    Inserção na Cadeia Principal:
        Insira os elementos rotulados como "pendentes" (b1, b2, b3,...) na cadeia principal (a1, a2, a3,...) de maneira a manter a cadeia ordenada.
        Inicie com o primeiro elemento pendente, b1, que é menor que a1. Considere b1 como parte da cadeia principal, resultando em {b1, a1, a2, a3,..., an/2}.
        Prossiga inserindo os elementos pendentes de modo a garantir que o tamanho da área de inserção seja uma potência de 2 menos 1, sempre que possível.
        A ordem de inserção segue uma sequência específica, minimizando o número de comparações. Geralmente, a ordem de inserção segue padrões baseados em números de Jacobsthal.

    Repetição:
        Repita o processo até que todos os elementos estejam na cadeia principal e a coleção esteja ordenada.
*/

int checkvalues(int ac, char **av) {
    for (int i = 1; i < ac; i++) {
        int nbr = atoi(av[i]);
        if (nbr < 0)
            return 0;
        //std::cout << "nbr = " << nbr << std::endl;
        int flag = 0;
        for (int j = 0; av[i][j]; j++) {
            //std::cout << "i = " << i << "; j = " << j << std::endl;
            //std::cout << "av[i][j] = " << av[i][j] << std::endl;
            if (!isdigit(av[i][j]) && av[i][j] != ' ' && !flag) {
                return 0;
            }
            else if (isdigit(av[i][j]) && !flag)
                flag  = 1;
        }
    }
    return 1;
}

int main(int ac, char **av) {
    if (ac <= 2 || !checkvalues(ac, av)) {
        std::cout << "Error\n";
        return 0;
    }
    PmergeMe ford;
    ford.exportData(ac, av);
    ford.merge(ac, av);
    std::cout << "Valid\n";
    return 0;
}