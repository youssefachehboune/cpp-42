/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:43:17 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/12 17:43:18 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_FixedNb = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::Fixed(const int FixedNb)
{
	_FixedNb = FixedNb << _NbBits;
}

Fixed::Fixed(const float FixedNb)
{
	_FixedNb = roundf(FixedNb * (1 << _NbBits));
}

Fixed::~Fixed(){}

Fixed & Fixed::operator=(const Fixed &assign)
{
	_FixedNb = assign._FixedNb;
	return *this;
}

int Fixed::getRawBits() const
{
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

bool Fixed::operator>(Fixed const &FixedPoint)
{
	if (_FixedNb > FixedPoint._FixedNb)
		return true;
	return false;
}
bool Fixed::operator<(Fixed const &FixedPoint)
{
	if (_FixedNb < FixedPoint._FixedNb)
		return true;
	return false;
}
bool Fixed::operator>=(Fixed const &FixedPoint)
{
	if (_FixedNb >= FixedPoint._FixedNb)
		return true;
	return false;
}
bool Fixed::operator<=(Fixed const &FixedPoint)
{
	if (_FixedNb <= FixedPoint._FixedNb)
		return true;
	return false;
}
bool Fixed::operator==(Fixed const &FixedPoint)
{
	if (_FixedNb == FixedPoint._FixedNb)
		return true;
	return false;
}
bool Fixed::operator!=(Fixed const &FixedPoint)
{
	if (_FixedNb != FixedPoint._FixedNb)
		return true;
	return false;
}



float Fixed::operator*(Fixed const &FixedPoint)
{
	return (this->toFloat() * FixedPoint.toFloat());
}

float Fixed::operator-(Fixed const &FixedPoint)
{
	return (this->toFloat() - FixedPoint.toFloat());
}

float Fixed::operator+(Fixed const &FixedPoint)
{
	return (this->toFloat() + FixedPoint.toFloat());
}

float Fixed::operator/(Fixed const &FixedPoint)
{
	return (this->toFloat() / FixedPoint.toFloat());
}



Fixed Fixed::operator++()
{
	(this->_FixedNb) += 1;
	return *this;
}

Fixed Fixed::operator--()
{
	(this->_FixedNb) -= 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp._FixedNb = this->_FixedNb;
	(this->_FixedNb) += 1;
	return (tmp);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp;
	tmp._FixedNb = this->_FixedNb;
	(this->_FixedNb) -= 1;
	return (tmp);
}


Fixed &Fixed::max(Fixed const &FixedPoint1, Fixed const &FixedPoint2)
{
	if((Fixed)FixedPoint1 > (Fixed)FixedPoint2)
		return (Fixed &)FixedPoint1;
	else
		return (Fixed &)FixedPoint2;
}

Fixed &Fixed::max(Fixed &FixedPoint1, Fixed &FixedPoint2)
{
	if(FixedPoint1 > FixedPoint2)
		return FixedPoint1;
	else
		return FixedPoint2;
}

Fixed &Fixed::min(Fixed const &FixedPoint1, Fixed const &FixedPoint2)
{
	if((Fixed)FixedPoint1 < (Fixed)FixedPoint2)
		return (Fixed &)FixedPoint1;
	else
		return (Fixed &)FixedPoint2;
}

Fixed &Fixed::min(Fixed &FixedPoint1, Fixed &FixedPoint2)
{
	if(FixedPoint1 < FixedPoint2)
		return FixedPoint1;
	else
		return FixedPoint2;
}