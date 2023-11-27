/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:32:33 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/27 13:38:38 by alex             ###   ########.fr       */
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
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string *newIdeas);
        Brain(const Brain &copy);
        Brain& operator=(const Brain &o_copy);
        ~Brain();

        void        setIdeas(std::string idea);
        std::string getIdeas(int pos) const;
};

#endif