/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:57:08 by alex              #+#    #+#             */
/*   Updated: 2023/11/18 20:18:10 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void    PhoneBook::add()
{
    std::string  line;

    std::cout << YELLOW << "(fill every fields empty line are not allowed)\n" << RESET;
	PhoneBook::arr[this->index].setInd(this->index);
	line = "";
	std::cin.ignore();
	while (line == " " || line == "")
	{
		std::cout << "First Name:" << std::endl;
		std::getline(std::cin, line);
		PhoneBook::arr[this->index % 8].setFirst(line);
	}
	line = "";
	while (line == "")
	{
		std::cout << "Last Name:" << std::endl;
		std::getline(std::cin, line);
		PhoneBook::arr[this->index % 8].setLast(line);
	}
	line = "";
	while (line == "")
	{
		std::cout << "Nickname:" << std::endl;
		std::getline(std::cin, line);
		PhoneBook::arr[this->index % 8].setNick(line);
	}
	line = "";
	while (line == "")
	{
		std::cout << "Phone Number:" << std::endl;
		std::getline(std::cin, line);
		for (int i = 0; line[i]; i++)
		{
			if(!isdigit(line[i]))
			{
				line = "";
				
				break ;
			}
		}
		PhoneBook::arr[this->index % 8].setPhone(line);
	}
	line = "";
	while (line == "")
	{
		std::cout << "Dark Secret:" << std::endl;
		std::getline(std::cin, line);
		PhoneBook::arr[this->index % 8].setDark(line);
	}
	this->index++;
    startMessage();
}

void  PhoneBook::search()
{
    int     countIndex;
	int		i = 0;

	std::cout << "|  index   |FirstName | LastName | NickName |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
	if (this->arr[0].getFirst() == "")
	{
		std::cout << YELLOW << "Phonebook is empty" << RESET << std::endl;
		startMessage();
		return ;
	}
	while (i < 8 && i < this->index)
	{
    	std::cout << "|";
        std::cout << std::setw(10) << PhoneBook::arr[i].getIndex() << "|";
		if (PhoneBook::arr[i].getFirst().length() > 9)
        	std::cout << std::setw(9) << PhoneBook::arr[i].getFirst().substr(0, 9) << "." << "|";
		else
        	std::cout << std::setw(10) << PhoneBook::arr[i].getFirst().substr(0, 10) << "|";
		if (PhoneBook::arr[i].getLast().length() > 9)
			std::cout << std::setw(9) << PhoneBook::arr[i].getLast().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << PhoneBook::arr[i].getLast().substr(0, 10) << "|";
		if (PhoneBook::arr[i].getNick().length() > 9)
			std::cout << std::setw(9) << PhoneBook::arr[i].getNick().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << PhoneBook::arr[i].getNick().substr(0, 10) << "|";
		i++;
		std::cout << std::endl;
	}
	
    std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Please select a number between 0 - 7\n";
	std::cout << "To leave just press {ENTER}\n";
	std::string ind;
	std::cin.ignore();
	if (getline(std::cin, ind) && ind != "")
	{
		if (ind.size() == 1 && isdigit(ind[0]) && (ind[0] >= '0' && ind[0] <= '7'))
		{
    		countIndex = PhoneBook::arr[ind[0] - '0'].getIndex();
			if (countIndex != ind[0] - '0')
        		std::cout << YELLOW << "Empty contact" << RESET << std::endl;
			else
			{
				std::cout << "Index: " << PhoneBook::arr[countIndex].getIndex() << std::endl;
				std::cout << "First Name: " << PhoneBook::arr[countIndex].getFirst() << std::endl;
				std::cout << "Last Name: " << PhoneBook::arr[countIndex].getLast() << std::endl;
				std::cout << "Nick Name: " << PhoneBook::arr[countIndex].getNick() << std::endl;
				std::cout << "Phone Number: " << PhoneBook::arr[countIndex].getPhone() << std::endl;
				std::cout << "Dark Secret: " << PhoneBook::arr[countIndex].getDark() << std::endl;
				std::cout << "----------------------------------------------------" << std::endl;
			}
		}
		else
        	std::cout << RED << "Please select just Numbers between 0 - 7" << RESET << std::endl;
		startMessage();
		return ;
	}
    startMessage();
}
