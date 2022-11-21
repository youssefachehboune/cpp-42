/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:20:02 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/14 17:33:44 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	type = copy.getType();
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}

Cat & Cat::operator=(const Cat &assign)
{
	type = assign.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow, Meow, Meow, Meow, Meow" << std::endl;
}