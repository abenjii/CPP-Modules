/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:00:49 by alex              #+#    #+#             */
/*   Updated: 2023/09/03 18:45:23 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void Zombie::nameIt(std::string name)
{
    Zombie::name = name;
    std::cout << Zombie::name << " created" << std::endl;
    Zombie::announce();
}

Zombie *zombieHorde(int n, std::string name)
{
    int i = 0;
    Zombie *horde = new Zombie[n];
    
    if (n <= 0)
    {
        std::cout << "Number os zombie must be a positive number to be created." << std::endl;
        return (NULL);
    }
    while (i < n)
        horde[i++].nameIt(name);
    return (horde);
}
