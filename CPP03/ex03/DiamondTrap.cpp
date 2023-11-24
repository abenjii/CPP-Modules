/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:21:44 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/16 16:13:20 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
	this->name = "default_clap_name";
	this->hitPoints = FragTrap::getHit();
	this->energyPoints = ScavTrap::getEnergy();
	this->attackDamage = FragTrap::getDamage();
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap() {
	this->name = name;
	this->hitPoints = FragTrap::getHit();
	this->energyPoints = ScavTrap::getEnergy();
	this->attackDamage = 30;
	std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) {
	std::cout << "Copy Constructor called." << std::endl;
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &o_copy) {
	this->name = o_copy.name;
	this->hitPoints = o_copy.hitPoints;
	this->energyPoints = o_copy.energyPoints;
	this->hitPoints = o_copy.hitPoints;
	std::cout << "DiamondTrap Assigment operator called" << std::endl;
	return *this;
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
	std::cout << "FragTrap name: " << FragTrap::name << std::endl; 
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->name << " Destructor called." << std::endl; 
}