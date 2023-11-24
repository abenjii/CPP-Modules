/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:05:14 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/16 16:12:06 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include <cmath>
# include <fstream>
# include <string>
# include "ScavTrap.h"
# include "FragTrap.h"
# include "ClapTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string &name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap &operator=(const DiamondTrap &o_copy);
		~DiamondTrap();
		using ScavTrap::attack;
		void	whoAmI();
};

#endif