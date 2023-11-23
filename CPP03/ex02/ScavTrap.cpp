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

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name) {
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
    std::cout << "ScavTrap Destroyed Called." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "This ScavTrap is now in 'Gate keeper mode'." << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << this->name << " attacks " << target;
	std::cout << ", causing " << this->getDamage() << " points of damage" << std::endl;
	this->energyPoints--;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints)
	{
		std::cout << "ScavTrap " << getName() << " got hit by " << amount;
		std::cout << " damage." << std::endl;
		this->hitPoints -= amount;
	}
	if (!this->hitPoints)
		std::cout << "ScavTrap " << getName() << " is death." << std::endl;	
}

void	ScavTrap::beRepaired(unsigned int amount) {
	
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << "ScavTrap " << getName() << " repaired " << amount;
		std::cout << " hit points." << std::endl;
		this->energyPoints--;
		this->hitPoints += amount; 
	}
	if (this->energyPoints <= 0 && this->hitPoints)
	{
		std::cout << "ScavTrap " << getName() << " can't do anything without energy.";
		std::cout << std::endl;
	}
	if (!this->hitPoints)
		std::cout << "ScavTrap " << getName() << " is death." << std::endl;
}