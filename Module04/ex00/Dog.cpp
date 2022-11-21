/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:20:10 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/14 17:35:26 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	type = copy.getType();
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}

Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

Dog & Dog::operator=(const Dog &assign)
{
	type = assign.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "woof, woof, woof, woof, woof" << std::endl;
}