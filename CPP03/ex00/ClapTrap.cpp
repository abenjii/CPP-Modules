/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:17:46 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/15 20:34:36 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap() : name("NULL") {
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string setname) : name(setname) {
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << "Copy Constructer called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &o_copy) {
	this->name = o_copy.name;
	this->attackDamage = o_copy.attackDamage;
	this->energyPoints = o_copy.energyPoints;
	this->hitPoints = o_copy.hitPoints;
	return (*this);
}

std::string	ClapTrap::getName() const {
	return this->name;
}

void	ClapTrap::setName(const std::string name) {
	this->name = name;
	return ;
}

void	ClapTrap::setDamage(const int nbr) {
	this->attackDamage = nbr;
	return ;
}

void	ClapTrap::setEnergyPoints(const int nbr) {
	this->energyPoints = nbr;
	return ;
}

void	ClapTrap::setHitPoints(const int nbr) {
	this->hitPoints = nbr;
	return ;
}

int	ClapTrap::getDamage() const {
	//std::cout << "ClapTrap " << getName() << " (attack damage)";
	return (this->attackDamage);
}

int ClapTrap::getEnergy() const {
	//std::cout << "ClapTrap " << getName() << " (energy) ";
	return (this->energyPoints);
}

int	ClapTrap::getHit() const {
	//std::cout << "ClapTrap " << getName() << " (hit points) ";
	return (this->hitPoints);
}

void	ClapTrap::attack(const std::string& target) {
	if (this->energyPoints <= 0 && this->hitPoints)
	{
		std::cout << "ClapTrap " << getName() << " can't do anything without energy ";
		std::cout << std::endl;
	}
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << getName() << " died";
	}
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << "ClapTrap " << getName() << " attacks ";
		std::cout << target << ", causing " << getDamage();
		std::cout << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}	

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints)
	{
		std::cout << "ClapTrap " << getName() << " got hit by " << amount;
		std::cout << " damage." << std::endl;
		this->hitPoints -= amount;
	}
	if (!this->hitPoints)
		std::cout << "ClapTrap " << getName() << " is death." << std::endl;	
}

void	ClapTrap::beRepaired(unsigned int amount) {
	
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << "ClapTrap " << getName() << " repaired " << amount;
		std::cout << " hit points." << std::endl;
		this->energyPoints--;
		this->hitPoints += amount; 
	}
	if (this->energyPoints <= 0 && this->hitPoints)
	{
		std::cout << "ClapTrap " << getName() << " can't do anything without energy.";
		std::cout << std::endl;
	}
	if (!this->hitPoints)
		std::cout << "ClapTrap " << getName() << " is death." << std::endl;
}