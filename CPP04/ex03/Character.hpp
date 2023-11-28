/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:45:22 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/28 14:59:46 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <cmath>
# include <fstream>
# include <string>


/* Your Character must have a constructor taking its name as a parameter. Any copy
(using copy constructor or copy assignment operator) of a Character must be deep.
During copy, the Materias of a Character must be deleted before the new ones are added
to their inventory. Of course, the Materias must be deleted when a Character is destroyed.
 */

class Character {
    private:
        std::string name;  
        AMateria* materia[4];  
    public:
        Character();
        Character(std::string name);
        Character(const Character &copy);
        Character &operator=(const Character &o_copy);
        ~Character();
};

#endif