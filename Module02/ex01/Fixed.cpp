/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:43:01 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/12 17:43:02 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_FixedNb = 0;
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int FixedNb)
{
	_FixedNb = FixedNb << _NbBits;
	std::cout << "\e[0;33mInt Constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const float FixedNb)
{
	_FixedNb = roundf(FixedNb * (1 << _NbBits));
	std::cout << "\e[0;33mFloat Constructor called\e[0m" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_FixedNb = assign._FixedNb;
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _FixedNb;
}

void Fixed::setRawBits( int const raw )
{
	_FixedNb = raw;
}
 
float Fixed::toFloat( void ) const
{
	return ((float)(_FixedNb) / (1 << _NbBits));
}

int Fixed::toInt( void ) const
{
	return ( _FixedNb >> _NbBits);
}

std::ostream &operator<<(std::ostream &outputStream, Fixed const &FixedPoint) {
	outputStream << FixedPoint.toFloat();
	return (outputStream);
}
