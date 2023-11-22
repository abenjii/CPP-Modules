/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:48:56 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/09 21:08:46 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

/* Formula
	( x1*(y2 - y3) 
	+ x2*(y3 - y1) 
	+ x3*(y1 - y2) ) / 2
*/	

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float	area;
	float	oneT;
	float	twoT;
	float	threeT;

	area = (((a.getX() * (b.getY() - c.getY()))
				+ (b.getX()	* (c.getY() - a.getY()))
				+ (c.getX() * (a.getY() - b.getY()))) / 2);

	oneT = (((a.getX() * (b.getY() - point.getY()))
				+ (b.getX()	* (point.getY() - a.getY()))
				+ (point.getX() * (a.getY() - b.getY()))) / 2);
	
	twoT = (((a.getX() * (point.getY() - c.getY()))
				+ (point.getX()	* (c.getY() - a.getY()))
				+ (c.getX() * (a.getY() - point.getY()))) / 2);
	
	threeT = (((point.getX() * (b.getY() - c.getY()))
				+ (b.getX()	* (c.getY() - point.getY()))
				+ (c.getX() * (point.getY() - b.getY()))) / 2);
	
	if (area < 0)
		area *= -1;
	if (oneT < 0)
		oneT *= -1;
	if (twoT < 0)
		twoT *= -1;
	if (threeT < 0)
		threeT *= -1;

	if ((a.getX() == point.getX() && a.getY() == point.getY()) ||
		(b.getX() == point.getX() && b.getY() == point.getY()) ||
		(c.getX() == point.getX() && c.getY() == point.getY()))
	{
		std::cout << "I'm a vertex" << std::endl;
		return false;
	}
	if (area == (oneT + twoT + threeT))
	{
		if (!oneT || !twoT || !threeT)
		{
			std::cout << "I'm on a edge" << std::endl;
			return false;
		}
		return true;
	}
	return false;
}
	