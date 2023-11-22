/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:48:22 by alex              #+#    #+#             */
/*   Updated: 2023/09/10 12:43:24 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "HumanB.h"
# include "Weapon.h"


class HumanB{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon *weapon);
        void attack();
};

#endif