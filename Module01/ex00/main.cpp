/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:36:40 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/24 21:20:06 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void    randomChump( std::string name );
Zombie* newZombie( std::string name );

int main()
{
    Zombie z1("FOO");
    z1.announce();
    Zombie *z2 = newZombie("BOO");
    if(z2 == NULL)
        return(1);
    z2->announce();
    delete(z2);
    randomChump("BOO2");
}