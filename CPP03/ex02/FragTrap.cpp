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
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setDamage(30);
    std::cout << "FragTrap Constructor called." << std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    std::cout << "FragTrap Copy Constructor called." << std::endl;
    return ;
}

FragTrap &FragTrap::operator=(const FragTrap &o_copy) {
    std::cout << "FragTrap Assigment operator called." << std::endl;
    ClapTrap::operator=(o_copy);
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called." << std::endl;
    return ;
}

void    FragTrap::highFiveGuys() {
    std::cout << "Positive Hight fives request" << std::endl;
	return ;
}