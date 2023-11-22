/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:18:32 by alex              #+#    #+#             */
/*   Updated: 2023/11/11 16:20:58 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <cstring>
# include "contract.hpp"
#include <cctype>

//colors
# define RESET   "\033[0m"
# define BLACK   "\033[30m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"
# define BOLD    "\033[1m"
# define BLINK    "\033[5m"

//using namespace std;

class PhoneBook
{
    public:
        void    add();
        void    search();
        int     getInd() {
            return (this->index);
        }
		void	setIndex(int nbr) {
			index = nbr;
		}
    private:
        Contact arr[8];
		int		index;
};

void    startMessage();

#endif