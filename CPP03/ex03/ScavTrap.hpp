/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:23:50 by alex              #+#    #+#             */
/*   Updated: 2023/11/16 13:13:39 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <cmath>
# include <fstream>
# include <string>
# include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string &name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap &o_copy);
        ~ScavTrap();
		void	attack(const std::string &target);
        void	takeDamage(unsigned int amount);
        void	beRepaired(unsigned int amount);
        void    guardGate();
};

#endif