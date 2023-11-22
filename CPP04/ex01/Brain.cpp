/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:31:27 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/18 19:08:59 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "";
    std::cout << "Brain Default Constructor called." << std::endl;
}

Brain::Brain(std::string *newIdeas) {
    for (int i = 0; i < 100; i++)
        this->ideas[i] = newIdeas[i];
    std::cout << "Brain Constructor called." << std::endl;
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain Copy Constructor called." <<std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &o_copy) {
    std::cout << "Brain Assigment operator called." << std::endl;
    if (this == &o_copy)
		return (*this);
    for (int i = 0; i < 100; i++)
	    this->ideas[i] = o_copy.ideas[i];
	return (*this);
}

Brain::~Brain() {
    std::cout << "Brain Destructor called." << std::endl;
    delete [] this->ideas;
}