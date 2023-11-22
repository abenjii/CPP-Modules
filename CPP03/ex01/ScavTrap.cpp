/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:28:40 by alex              #+#    #+#             */
/*   Updated: 2023/11/16 15:41:52 by alexfern         ###   ########.fr       */
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
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setDamage(10);
    std::cout << "ScavTrap Constructor called." << std::endl;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    std::cout << "ScavTrap Copy Constructor called."<< std::endl;
    return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &o_copy) {
    std::cout << "ScavTrap Assigment operator called." << std::endl;
    ClapTrap::operator=(o_copy);
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor ScavTrap Called." << std::endl;
    return ;
}

void ScavTrap::guardGate() {
    std::cout << "This ScavTrap is now in 'Gate keeper mode'." << std::endl;
}