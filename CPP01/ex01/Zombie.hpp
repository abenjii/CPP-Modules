/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:00:57 by alex              #+#    #+#             */
/*   Updated: 2023/09/03 15:04:28 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
  private:
    std::string name;
  public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie();
    void nameIt(std::string name);
    void announce();
};

//Zombie* newZombie(std::string name);
Zombie* zombieHorde(int n, std::string name);

#endif