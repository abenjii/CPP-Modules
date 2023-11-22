/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:18:46 by alex              #+#    #+#             */
/*   Updated: 2023/11/06 18:50:15 by alexfern         ###   ########.fr       */
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
		Fixed &	operator=(Fixed const &nbr);
		float toFloat(void) const;
		int	toInt(void) const;
};

std::ostream& operator<<(std::ostream & o, const Fixed &nbr);

#endif