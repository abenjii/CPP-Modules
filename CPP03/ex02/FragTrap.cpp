/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 00:57:28 by alex              #+#    #+#             */
/*   Updated: 2023/11/16 15:46:44 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "FragTrap.h"

FragTrap::FragTrap() {
	this->setName("default");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setDamage(30);
    std::cout << "FragTrap Default Constructor called." << std::endl;
}

FragTrap::FragTrap(std::string &name) : ClapTrap(name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setDamage(30);
    std::cout << "FragTrap Constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    std::cout << "FragTrap Copy Constructor called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &o_copy) {
    std::cout << "FragTrap Assigment operator called." << std::endl;
    ClapTrap::operator=(o_copy);
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called." << std::endl;
}

void    FragTrap::highFiveGuys() {
    std::cout << "Positive Hight fives request" << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	if (this->energyPoints <= 0 && this->hitPoints)
	{
		std::cout << "FragTrap " << getName() << " can't do anything without energy ";
		std::cout << std::endl;
	}
	if (this->hitPoints <= 0)
		std::cout << "FragTrap " << getName() << " is death." << std::endl;
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->getDamage() << " points of damage" << std::endl;
    	this->energyPoints--;
	}
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints)
	{
		std::cout << "FragTrap " << getName() << " got hit by " << amount;
		std::cout << " damage." << std::endl;
		this->hitPoints -= amount;
	}
	if (this->hitPoints <= 0)
		std::cout << "FragTrap " << getName() << " is death." << std::endl;	
}

void	FragTrap::beRepaired(unsigned int amount) {
	
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << "FragTrap " << getName() << " repaired " << amount;
		std::cout << " hit points." << std::endl;
		this->energyPoints--;
		this->hitPoints += amount; 
	}
	if (this->energyPoints <= 0 && this->hitPoints)
	{
		std::cout << "FragTrap " << getName() << " can't do anything without energy.";
		std::cout << std::endl;
	}
	if (this->hitPoints <= 0)
		std::cout << "FragTrap " << getName() << " is death." << std::endl;
}