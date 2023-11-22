/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:41:12 by alex              #+#    #+#             */
/*   Updated: 2023/09/10 12:49:24 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(void)
{
    
}

Weapon::Weapon(std::string weapon)
{
    setType(weapon);
}

const std::string &Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string str)
{
    this->type = str;
}

Weapon::~Weapon()
{
    //std::cout << "weapon: Make code not war" << std::endl;
}