/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:12:40 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/07 14:42:38 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
# include <fstream>
# include <string>

class Fixed {
	private:
		int fixedPoint;
		static const int fractPoint;
	public:
		Fixed(void);
		Fixed(int n);
		Fixed(float f);
		~Fixed();
		Fixed(const Fixed& copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed&	operator=(Fixed const &nbr);
		float toFloat(void) const;
		int	toInt(void) const;

		bool operator>(Fixed const &nbr) const;
		bool operator>=(Fixed const &nbr) const;
		bool operator<(Fixed const &nbr) const;
		bool operator<=(Fixed const &nbr) const;
		bool operator==(Fixed const &nbr) const;
		bool operator!=(Fixed const &nbr) const;
		
		Fixed operator+(Fixed const &nbr) const;
		Fixed operator-(Fixed const &nbr) const;
		Fixed operator*(Fixed const &nbr) const;
		Fixed operator/(Fixed const &nbr) const;

		Fixed & operator++();
		Fixed	operator++(int);
		Fixed & operator--();
		Fixed	operator--(int);
		static const Fixed& max(Fixed const &a, Fixed const &b);
		static const Fixed& min(Fixed const &a, Fixed const &b);
};

std::ostream& operator<<(std::ostream & o, Fixed const &nbr);

#endif