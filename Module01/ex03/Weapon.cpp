/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:53:40 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/24 19:48:06 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string type_name){
    this->type = type_name;
}

std::string Weapon::getType(void)
{
    return(this->type);
}

void Weapon::setType(std::string new_type)
{
    this->type = new_type;
}

Weapon::~Weapon(){}