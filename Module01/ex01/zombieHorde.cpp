/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:56:05 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/24 20:47:15 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name )
{
	
	std::stringstream convert;

	Zombie *var = new(std::nothrow) Zombie[N];
	if (var == NULL)
	{
		std::cout << "Error in malloc" << std::endl;
        return NULL;
	}
	int i = 0;
	while (i < N)
	{
		convert << i;
		var[i].setName(name + convert.str());
		var[i].announce();
		convert.str("");
		i++;
	}
	return var;
}