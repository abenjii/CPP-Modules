/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:32:33 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/18 18:58:10 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <fstream>
# include <cmath>
# include <string>
# include "Animal.hpp"

class Brain {
    public:
        Brain();
        Brain(std::string *newIdeas);
        Brain(const Brain &copy);
        Brain& operator=(const Brain &o_copy);
        ~Brain();
    protected:
        std::string ideas[100];
};

#endif