/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:20:10 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/14 17:52:45 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	_brain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	type = copy.getType();
	_brain = new Brain();
	*(_brain) = *(copy._brain);
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

Dog & Dog::operator=(const Dog &assign)
{
	type = assign.getType();
	if(_brain)
		delete _brain;
	_brain = new Brain();
	*(_brain) = *(assign._brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "woof, woof, woof, woof, woof" << std::endl;
}