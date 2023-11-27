/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:49:19 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/27 13:41:56 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <fstream>
# include <cmath>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *brain;
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog &copy);
		Dog& operator=(const Dog &o_copy);
		~Dog();
		void	makeSound() const;
		void    setType(std::string type);
        std::string getType() const;

		Brain &getDbrain() const;
};

#endif