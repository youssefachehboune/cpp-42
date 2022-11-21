/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:02:11 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/19 11:06:37 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_N = 0;
}

Span::Span(const Span &copy)
{
	_N = copy.getN();
	_vect = copy._vect;
}

Span::Span(unsigned int N)
{
	_N = N;
}

Span::~Span(){}

Span & Span::operator=(const Span &assign)
{
	_N = assign.getN();
	_vect = assign._vect;
	return *this;
}

unsigned int Span::getN() const
{
	return _N;
}

void Span::addNumber(int nb)
{
	if(_vect.size() == _N)
		throw std::range_error("Out of rang");
	_vect.push_back(nb);
}

int Span::shortestSpan()
{
	if (_vect.size() == 0 || _vect.size() == 1)
		throw(std::range_error("Span can't be found!"));
	int span;
	std::vector<int>::iterator it;
	std::vector<int>::iterator tmp;
	std::sort(_vect.begin(), _vect.end());
	
	span = *(_vect.end() - 1) - *(_vect.begin());
	it = _vect.end();
	while(--it > _vect.begin())
	{
		tmp = it;
		while(--tmp > _vect.begin())
		{
			if(span > (*it - *tmp))
				span = (*it - *tmp);
		}
	}
	return span;
}

int Span::longestSpan()
{
	if (_vect.size() == 0 || _vect.size() == 1)
		throw(std::range_error("Span can't be found!"));
	std::vector<int>::iterator it;
	std::sort(_vect.begin(), _vect.end());
	it = _vect.begin();
	return (*(_vect.end() - 1) - *it);
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if((int)(_N - _vect.size()) < (int)(end - begin))
		throw(std::range_error("Out of rang!"));
	_vect.insert(_vect.begin() ,begin, end);
}