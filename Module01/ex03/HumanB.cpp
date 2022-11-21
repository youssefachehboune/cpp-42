/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:53:31 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/24 22:00:01 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weaponB = NULL;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weaponB = &weapon;
}

HumanB::~HumanB(){}