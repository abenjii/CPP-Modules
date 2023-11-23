/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:18:52 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/15 16:15:05 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main()
{
	std::string name = "Alex";
	std::string evaluator = "Unknown";
	ClapTrap me(name);
	ClapTrap you;
	
	std::cout << me.getName() << std::endl;
	std::cout << you.getName() << std::endl;

	you.setName(evaluator);
	std::cout << you.getName() << std::endl;
	
	std::cout << me.getEnergy() << std::endl;
	std::cout << me.getHit() << std::endl;
	me.beRepaired(2);
	std::cout << me.getEnergy() << std::endl;
	std::cout << me.getHit() << std::endl;

	std::cout << you.getHit() << std::endl;
	me.attack(you.getName());
	std::cout << you.getHit() << std::endl;
	std::cout << me.getEnergy() << std::endl;

	me.getDamage();
	me.attack(you.getName());
	me.attack(you.getName());
	me.attack(you.getName());
	me.attack(you.getName());
	me.attack(you.getName());
	me.attack(you.getName());
	me.attack(you.getName());
	me.attack(you.getName());
	//me.attack(you.getName());

	std::cout << me.getHit() << std::endl;
	me.takeDamage(4);
	std::cout << me.getHit() << std::endl;
	me.takeDamage(4);
	me.takeDamage(4);


	

	return (0);
}