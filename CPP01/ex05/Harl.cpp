/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:20:48 by alex              #+#    #+#             */
/*   Updated: 2023/10/31 11:22:16 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void    Harl::debug()
{
    std::cout << 
    "I love having extra bacon for my" 
    " 7XL-double-cheese-triple-pickle-special-ketchup burger." 
    " I really do!" 
    << std::endl;
}

void    Harl::info()
{
    std::cout << 
    "I cannot believe adding extra bacon costs more money. You didn’t put"
    " enough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << std::endl;
}

void    Harl::warning()
{
    std::cout <<
    "I think I deserve to have some extra bacon for free. I’ve been coming for"
    " years whereas you started working here since last month."
    << std::endl;
}

void    Harl::error()
{
    std::cout <<
    "This is unacceptable! I want to speak to the manager now."
    << std::endl;
}


void Harl::complain(std::string level)
{
	std::string arr[4] = {
		"DEBUG",
		"ERROR",
		"WARNING",
		"INFO",
	};

	void	(Harl::*funcArr[4])(void) = {
		&Harl::debug,
		&Harl::error,
		&Harl::warning, 
		&Harl::info,
	};

	for (int i = 0; i < 4; i++)
	{
		if (!arr[i].compare(level))
		{
			(this->*funcArr[i])();
			break ;
		}	
	}
}
