/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:53:27 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/27 15:10:15 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "./Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    Weapon      &weaponA;
    std::string name;
public:
    void    attack();
    HumanA(std::string name, Weapon &weaponA);
    ~HumanA();
};

#endif