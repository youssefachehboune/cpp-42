/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:20:02 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/14 17:51:12 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	_brain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	type = copy.getType();
	_brain = new Brain();
	*(_brain) = *(copy._brain);
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}

Cat & Cat::operator=(const Cat &assign)
{
	type = assign.getType();
	if(_brain)
		delete _brain;
	_brain = new Brain();
	*(_brain) = (*assign._brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow, Meow, Meow, Meow, Meow" << std::endl;
}