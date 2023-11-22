/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:55:10 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/18 19:19:31 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

int	main()
{
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	
	delete d;
	delete c;
	return (0);
}