/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:17:42 by alex              #+#    #+#             */
/*   Updated: 2023/10/31 16:18:37 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int ac, char **av)
{
    Harl myHarl;
    
    if (ac != 2)
    {
        std::cout << "Please just one argument" << std::endl;
        return (0);
    }
    myHarl.complain(av[1]);
    return (0);
}