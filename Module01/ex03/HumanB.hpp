/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:53:35 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/24 21:58:41 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "./Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weaponB;
    public:
        void attack();
        void setWeapon(Weapon &weapon);
        HumanB(std::string name);
        ~HumanB();
};


#endif