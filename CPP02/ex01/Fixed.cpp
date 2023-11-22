/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:26:08 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/07 18:28:17 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int Fixed::fractPoint = 8;

Fixed::Fixed() : fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(n * (1 << this->fractPoint));
}

Fixed::Fixed(float f) {
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(f * (1 << this->fractPoint)));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy contructor called" << std::endl;
	*this = copy;
}

Fixed & Fixed::operator=(Fixed const &nbr) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPoint = nbr.fixedPoint;
	return *this;
}

float	Fixed::toFloat(void) const {
	return ((float)this->fixedPoint / (1 << this->fractPoint));
}

int	Fixed::toInt(void) const {
	return ((int)this->fixedPoint / (1 << this->fractPoint));
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void	Fixed::setRawBits(int const raw) {
	this->fixedPoint = raw;
}

std::ostream& operator<<(std::ostream & o, const Fixed &nbr) {
	o << nbr.toFloat();
	return o;
}