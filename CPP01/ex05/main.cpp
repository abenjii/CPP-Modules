/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:20:13 by alex              #+#    #+#             */
/*   Updated: 2023/10/31 11:20:59 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int ac, char **av)
{
	Harl myHarl;
	
	if (ac == 1)
	{
		std::cout << "Please use the follow arguments\n"
		"'DEBUG'\n" "'ERROR'\n" "'WARNING'\n" "'INFO'" << std::endl;
		return (0);
	}
	else {
	
		for (int i = 1; i < ac; i++)
			myHarl.complain(av[i]);
	}
	return (0);
}
