/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexfern <alexfern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:23:39 by alexfern          #+#    #+#             */
/*   Updated: 2023/11/09 19:54:53 by alexfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(float const &xVal, float const &yVal);
		Point(Point const & copy);
		Point& operator=(Point const & nbr);
		float	getY() const;
		float	getX() const;
		//Fixed	setX(Point const & nbr) const;
		~Point();
};

#endif