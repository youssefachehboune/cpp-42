/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:47:31 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/13 15:34:40 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
    ClapTrap    foo("foo");
    FragTrap    boo("boo");

    std::cout << std::endl;
    std::cout << foo.getName() << " " << foo.getHitPoints() << " " << foo.getEnergyPoints() << " " << foo.getAttackDamage() << std::endl; 
    std::cout << boo.getName() << " " << boo.getHitPoints() << " " << boo.getEnergyPoints() << " " << boo.getAttackDamage() << std::endl; 
    std::cout << std::endl;
    
    foo.setAttackDamage(10);
    boo.setAttackDamage(5);

    std::cout << std::endl;
    std::cout << foo.getName() << " " << foo.getHitPoints() << " " << foo.getEnergyPoints() << " " << foo.getAttackDamage() << std::endl; 
    std::cout << boo.getName() << " " << boo.getHitPoints() << " " << boo.getEnergyPoints() << " " << boo.getAttackDamage() << std::endl; 
    std::cout << std::endl;

    foo.attack(boo.getName());
    boo.takeDamage(foo.getAttackDamage());
    boo.attack(foo.getName());
    foo.takeDamage(boo.getAttackDamage());

    std::cout << std::endl;
    std::cout << foo.getName() << " " << foo.getHitPoints() << " " << foo.getEnergyPoints() << " " << foo.getAttackDamage() << std::endl; 
    std::cout << boo.getName() << " " << boo.getHitPoints() << " " << boo.getEnergyPoints() << " " << boo.getAttackDamage() << std::endl; 
    std::cout << std::endl;

    boo.beRepaired(20);
    boo.attack(foo.getName());
    foo.takeDamage(boo.getAttackDamage());


    std::cout << std::endl;
    std::cout << foo.getName() << " " << foo.getHitPoints() << " " << foo.getEnergyPoints() << " " << foo.getAttackDamage() << std::endl; 
    std::cout << boo.getName() << " " << boo.getHitPoints() << " " << boo.getEnergyPoints() << " " << boo.getAttackDamage() << std::endl; 
    std::cout << std::endl;

    foo.attack(boo.getName());
    boo.setEnergyPoints(0);
    boo.attack(foo.getName());
    boo.highFivesGuys();
    
}