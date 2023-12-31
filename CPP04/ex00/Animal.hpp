/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:39:35 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/27 19:46:52 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <cmath>
# include <fstream>
# include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &o_copy);
		virtual ~Animal();
		
		std::string	getType() const;
		void	setType(std::string &type);
		virtual void	makeSound() const;
};

#endif