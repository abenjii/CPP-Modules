/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:34:02 by alex              #+#    #+#             */
/*   Updated: 2023/09/10 12:32:38 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include "Weapon.h"

class Weapon{
    private:
        std::string type;
    public:
        Weapon(void);
        Weapon(std::string weapon);
        ~Weapon();
        const std::string &getType();
        void setType(std::string str);
};

#endif
