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

	std::cout << me.getName() << std::endl;
	me.guardGate();
	me.setName("alex");
	std::cout << me.getEnergy() << std::endl;
	std::cout << me.getHit() << std::endl;
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