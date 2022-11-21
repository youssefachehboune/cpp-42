/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:36:28 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/24 21:20:26 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"
#include <new>

Zombie* newZombie( std::string name )
{
    Zombie *var = new(std::nothrow) Zombie(name);
    if (var == NULL)
    {
        std::cout << "Error in malloc" << std::endl;
        return NULL;
    }
        
    return(var);
}