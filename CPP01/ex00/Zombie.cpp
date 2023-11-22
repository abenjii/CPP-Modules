/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:34:03 by alex              #+#    #+#             */
/*   Updated: 2023/09/03 15:06:11 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(std::string name): name(name)
{
    Zombie::name = name;
    std::cout << Zombie::name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << Zombie::name << " died." << std::endl;
}
