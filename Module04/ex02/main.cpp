/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:43:01 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/14 18:10:31 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal *animal[10];
	
	int i;
	i = -1;
	while(++i < 10)
	{
		if(i < 5)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	i = -1;
	while(++i < 10)
		animal[i]->makeSound();
	i = -1;
	while(++i < 10)
		delete animal[i];
	// Animal anim;
	// std::cout << anim.getType() << std::endl;
	// anim.makeSound();
	return (0);
	
}