/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:17:52 by alex              #+#    #+#             */
/*   Updated: 2023/11/14 11:40:12 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void    startMessage()
{
    std::cout << CYAN <<"Select one of the following options\n" << RESET;
    std::cout << "ADD | SEARCH | EXIT" << std::endl;
}

int main()
{
    PhoneBook phone;
    std::string input;
    std::cout << GREEN<< "Welcome to your amazing PhoneBook!"<< std::endl;
    std::cout << "You can store 8 contacts in this PhoneBook, Enjoy it!" << RESET << std::endl;
	startMessage();
	phone.setIndex(0);
    int i = 0;
    while (std::cin >> input)
    {
        if (input == "ADD")
        {
            std::cout << "Please fill the following data" << std::endl;
            phone.add();
            i++;
        }
        else if (input == "SEARCH")
            phone.search();
        else if (input == "EXIT")
            return 0;
    }
    return 0;
}