/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:18:52 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/16 01:56:37 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
	FragTrap me;
	std::string name = "Alexandre";
	std::string target = "Alexandre";

	me.setName(name);
	std::cout << me.getHit() << std::endl;
	std::cout << me.getEnergy() << std::endl;
	while (me.getEnergy())
		me.attack(target);
	std::cout << me.getEnergy() << std::endl;
	me.highFiveGuys();
	return (0);
}