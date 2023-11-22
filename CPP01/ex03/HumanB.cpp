/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:43:38 by alex              #+#    #+#             */
/*   Updated: 2023/09/10 12:49:29 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB()
{
    std::cout << "Default HumanB Constructor called." << std::endl;
}

void HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}

HumanB::HumanB(std::string name)
{
    HumanB::name = name;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->name << "HumanB free" << std::endl;
}
