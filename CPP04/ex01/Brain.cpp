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

void    Brain::setIdea(std::string &idea) {
    for(int i = 0; i < 100; i++)
    {
        if (this->ideas[i] == "")
            this->ideas[i] = idea;
        else if (this->ideas[i] != "" && i == 99)
            std::cout << "Full brain" << std::endl;
    }
}

std::string Brain::getIdea(int pos) const {
    std::string failMessage = "Idea not Set or Pos not between 0 - 99\n";

    if (pos >= 0 && pos < 100)
        return (this->ideas[pos]);
    else
        return (failMessage);
}

Brain::~Brain() {
    std::cout << "Brain Destructor called." << std::endl;
}