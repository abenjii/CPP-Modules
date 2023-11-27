/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:19:30 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/27 20:59:58 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTRE_HPP
# include <iostream>
# include <string>
# include <cmath>
# include <fstream>
# include "AMateria.hpp"

class ICharacter {
    protected:
        std::string const &name;
        AMateria* materia[4];
    public :
        ICharacter();
        ICharacter(std::string const &name);
        ICharacter(const ICharacter &copy);
        ICharacter &operator=(const ICharacter &o_copy);
        virtual ~ICharacter();

        virtual std::string const &getName() const = 0;
        virtual void equip(AMateria *m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter &target) = 0;
};


#endif