/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:59:49 by alex              #+#    #+#             */
/*   Updated: 2023/11/14 14:37:00 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Few Arguments!\nPlease set number of Zombie and a name for each one."<< std::endl;
        return (0);
    }
    int sizeArr = atoi(av[1]);
    Zombie *horde = zombieHorde(sizeArr, av[2]);
    if (!horde)
        return (0);
    delete[] horde;
}