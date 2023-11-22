/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:07:01 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/07 18:32:01 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <fstream>

class Fixed
{
	private:
		int	fixedPoint;
		static const int fractionalBits;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const & copy);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &	operator=(Fixed const &nbr);
};

#endif