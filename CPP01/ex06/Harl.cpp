/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:08:12 by alex              #+#    #+#             */
/*   Updated: 2023/10/31 16:18:07 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void    Harl::debug()
{
    std::cout << "[ DEBUG ]\n"
    "I love having extra bacon for my"
    " 7XL-double-cheese-triple-pickle-special-ketchup burger."
    " I really do!"
    << std::endl;
}

void    Harl::info()
{
    std::cout << "[ INFO ]\n"
    "I cannot believe adding extra bacon costs more money. You didn’t put"
    " enough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << std::endl;
}

void    Harl::warning()
{
    std::cout << "[ WARNING ]\n"
    "I think I deserve to have some extra bacon for free. I’ve been coming for"
    " years whereas you started working here since last month."
    << std::endl;
}

void    Harl::error()
{
    std::cout << "[ ERROR ]\n"
    "This is unacceptable! I want to speak to the manager now."
    << std::endl;
}

void    Harl::message()
{
    std::cout << "[ Probably complaining about insignificant problem ]" << 
    std::endl;
}

int    Harl::number(std::string level)
{
    std::string arr[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
    };
    
    for (int r = 0; r < 4; r++)
    {
        if (!arr[r].compare(level))
            return (r);
    }
    return (4);
}

void    Harl::complain(std::string level)
{
    void    (Harl::*funcArr[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };
	
    int i = Harl::number(level);
	switch (i)
    {
        case 0:
            (this->*funcArr[i++])();
        case 1:
            (this->*funcArr[i++])();
        case 2:
            (this->*funcArr[i++])();
        case 3:
            (this->*funcArr[i++])();
			break ;
        default:
            std::cout << "[ Probably complaining about insignificant problem ]" << 
    		std::endl;
    }
}