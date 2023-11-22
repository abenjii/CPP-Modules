/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:44:34 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/09 21:05:15 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int	main()
{
	Point const a(0, 0);
	Point const b(0, 5);
	Point const c(5, 5);
	Point const d(0, 4);

	if (bsp(a, b, c, d))
		std::cout << "[ TRUE ]" << std::endl;
	else
		std::cout << "[ FALSE ]" << std::endl;
	return (0);
}