/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:53:24 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/27 15:09:33 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon): weaponA(Weapon)
{
    this->name = name;    
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weaponA.getType() << std::endl;
}

HumanA::~HumanA(){}