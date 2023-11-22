/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:59:22 by alex              #+#    #+#             */
/*   Updated: 2023/09/10 12:49:39 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"


HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    std::cout << this->name << " HumanA Constructor called." << std::endl;
    this->name = name;
    //this->weapon = weapon->getType();
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their ";
    std::cout << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->name << " HumanA is free!" << std::endl;
}