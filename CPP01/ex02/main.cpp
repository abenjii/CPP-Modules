/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:53:47 by alex              #+#    #+#             */
/*   Updated: 2023/09/03 19:22:49 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstring>

int main()
{
    std::string myString = "HI THIS IS BRAIN";

    std::string *stringPTR  = &myString;
    std::string &stringREF = myString;
    
    std::cout << "Memory address:" << std::endl; 
    std::cout << "Memory address of myString " << &myString << std::endl;
    std::cout << "Memory address held by stringPTR " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF " << &stringREF << std::endl;

    std::cout << "\n\nPrint values:" << std::endl;
    std::cout << "Value of myString: " << myString << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringRED: " << stringREF << std::endl;

    return (0);    
}