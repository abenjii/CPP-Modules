/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:33:40 by alex              #+#    #+#             */
/*   Updated: 2023/10/31 17:43:46 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {
  private:
    std::string name;
  public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif