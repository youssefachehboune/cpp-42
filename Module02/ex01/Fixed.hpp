/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:43:05 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/12 17:43:06 by yachehbo         ###   ########.fr       */
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