/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:20:34 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/14 17:44:01 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_string = "WrongCat";
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	_string = copy.getString();
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	_string = assign.getString();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow Meow Meow Meow" << std::endl;
}