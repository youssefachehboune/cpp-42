/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:09:37 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/12 17:13:05 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);

		~Fixed();

		Fixed & operator=(const Fixed &assign);

		int getRawBits() const;
        void setRawBits( int const raw );
		
	private:
		int _FixedNb;
		static const int _NbBits = 8;
};

#endif
