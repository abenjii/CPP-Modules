/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:01:12 by alex              #+#    #+#             */
/*   Updated: 2023/11/28 15:02:48 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include <string>
# include <fstream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria *learned[4];
    public:
        MateriaSource();
        MateriaSource(std::string &type);
        MateriaSource(const MateriaSource &copy);
        MateriaSource &operator=(const MateriaSource &o_copy);
        ~ MateriaSource();

        void learnMateria(AMateria *tolearn);
        AMateria* MateriaSource::createMateria(std::string const & type);

};

#endif