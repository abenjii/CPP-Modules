/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:18:52 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/16 00:29:27 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

int main()
{
	ScavTrap me;
	const std::string name = "alex";

	std::cout << me.getName() << std::endl;
	me.guardGate();
	me.setName(name);
	std::cout << me.getEnergy() << std::endl;
	std::cout << me.getHit() << std::endl;
	me.attack("evaluator");
	while (me.getEnergy())
	{
		me.takeDamage(2);
		me.beRepaired(2);
	}
	me.guardGate();
	std::cout << me.getEnergy() << std::endl;
	std::cout << me.getHit() << std::endl;
	
	return (0);
}