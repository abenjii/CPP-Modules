/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:55:13 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/27 20:34:57 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>
# include "ICharacter.hpp"

class AMateria {
    protected:
        std::string const type;
    public:
        AMateria ();
        AMateria (std::string const &type);
        AMateria(const AMateria &copy);
        AMateria& operator=(const AMateria &o_copy); 
        virtual ~AMateria();
        
        
        std::string const & getType() const;
        //void    setType(std::string const &set);
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif