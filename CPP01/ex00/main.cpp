/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:31:26 by alex              #+#    #+#             */
/*   Updated: 2023/11/14 14:30:42 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "Zombie.hpp"

int main(int ac, char **av)
{
    if (ac == 3)
	{
    	std::cout << "The randomChump function\n" << std::endl;
    	randomChump(av[1]);
    
    	std::cout << "\nThe newZombie function\n" << std::endl;
    	Zombie* nZom = newZombie(av[2]);
    	//nZom->announce();
		delete nZom;
	}
	else
	    std::cout << "Please type 2 argumntes to test" << std::endl;
    return (0);
}