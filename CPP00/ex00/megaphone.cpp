/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:33:56 by alex              #+#    #+#             */
/*   Updated: 2023/11/14 15:46:10 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    
    if (ac == 1)
    {
	    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
    while (av[i])
    {
		std::string str = av[i];
		int j = 0;
		while (str[j])
		{
			str[j] = std::toupper(str[j]);
			std::cout << str[j];
			j++;
		}
		i++;
	}
    std::cout << std::endl;
    return 0;
}
