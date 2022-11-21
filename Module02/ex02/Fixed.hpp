/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:43:22 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/12 17:43:23 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <math.h>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int FixedNb);
		Fixed(const float FixedNb);

		~Fixed();

		Fixed & operator=(const Fixed &assign);

		bool operator>(Fixed const &FixedPoint);
		bool operator<(Fixed const &FixedPoint);
		bool operator>=(Fixed const &FixedPoint);
		bool operator<=(Fixed const &FixedPoint);
		bool operator==(Fixed const &FixedPoint);
		bool operator!=(Fixed const &FixedPoint);

		float operator*(Fixed const &FixedPoint);
		float operator+(Fixed const &FixedPoint);
		float operator-(Fixed const &FixedPoint);
		float operator/(Fixed const &FixedPoint);

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static Fixed &max(Fixed const &FixedPoint1, Fixed const &FixedPoint2);
		static Fixed &max(Fixed &FixedPoint1, Fixed &FixedPoint2);
		static Fixed &min(Fixed const &FixedPoint1, Fixed const &FixedPoint2);
		static Fixed &min(Fixed &FixedPoint1, Fixed &FixedPoint2);
		int getRawBits() const;
        void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int _FixedNb;
		static const int _NbBits = 8;
};
std::ostream &operator<<(std::ostream &outputStream, Fixed const &FixedPoint);
#endif