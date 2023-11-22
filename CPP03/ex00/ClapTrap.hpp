/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:17:50 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/16 13:43:46 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <cmath>
# include <fstream>
# include <string>

class ClapTrap {
	private:
		std::string name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
	public:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap(); //default contructor
		ClapTrap(std::string setname); //constructor
		ClapTrap(const ClapTrap& copy); //copy constructor
		ClapTrap & operator=(ClapTrap const &o_copy);
		~ClapTrap(); //destructor
		void		setName(const std::string name);
		void		setDamage(const int nbr);
		void		setEnergyPoints(const int nbr);
		void		setHitPoints(const int nbr);
		std::string	getName() const;
		int			getDamage() const;
		int			getEnergy() const;
		int			getHit() const;
};

/* std::ostream& operator<<(std::ostream & o, const ClapTrap &clap) {
	return o;
} */

#endif