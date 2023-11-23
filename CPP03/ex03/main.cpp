/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:18:52 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/16 15:59:12 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

int main()
{
	std::string name = "Alexandre";
	
	DiamondTrap me(name);

	std::cout << me.getHit() << std::endl;;
	std::cout << me.getEnergy() << std::endl;
	std::cout << me.getDamage() <<std::endl;
	return (0);
}