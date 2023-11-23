/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:28:40 by alex              #+#    #+#             */
/*   Updated: 2023/11/23 09:44:13 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "ClapTrap.h"

ScavTrap::ScavTrap() {
	this->setName("default");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setDamage(10);
    std::cout << "ScavTrap Default Constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	//this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setDamage(10);
    std::cout << "ScavTrap Constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    std::cout << "ScavTrap Copy Constructor called."<< std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &o_copy) {
    std::cout << "ScavTrap Assigment operator called." << std::endl;
    ClapTrap::operator=(o_copy);
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor ScavTrap Called." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "This ScavTrap is now in 'Gate keeper mode'." << std::endl;
}