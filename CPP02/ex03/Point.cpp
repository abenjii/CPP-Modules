/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:43:23 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/09 20:56:49 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Point::Point() : x(0), y(0) {
	std::cout << "Default Point Constructor called" << std::endl;
}

Point::Point(float const &xVal, float const &yVal) : x(xVal), y(yVal) {
	std::cout << "Point Constructor called" << std::endl;
}

Point::~Point() {
	std::cout << "Point destructor called" << std::endl;
}

Point::Point(Point const & copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Point& Point::operator=(Point const & nbr) {
	std::cout << "Copy assignment called" << std::endl;
	(const_cast<Fixed&>(this->x)) = nbr.x;
	(const_cast<Fixed&>(this->y)) = nbr.y;
	return (*this);
}

float  Point::getX() const {
	return (this->x.toFloat());
}

float	Point::getY() const {
	return (this->y.toFloat());
}