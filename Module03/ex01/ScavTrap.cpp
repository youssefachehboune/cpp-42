/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:08:08 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/13 16:24:34 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_Name = "";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	_Name = copy.getName();
	_HitPoints = copy.getHitPoints();
	_EnergyPoints = copy.getEnergyPoints();
	_AttackDamage = copy.getAttackDamage();
	std::cout << "\e[0;33mCopy Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
	_Name = Name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "\e[0;33mFields Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mDestructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	_Name = assign.getName();
	_HitPoints = assign.getHitPoints();
	_EnergyPoints = assign.getEnergyPoints();
	_AttackDamage = assign.getAttackDamage();
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (_HitPoints == 0)
		std::cout << _Name << " is out of hit points" << std::endl;
	else if ( _EnergyPoints == 0)
		std::cout << _Name << " is out of energypoints" << std::endl;
	else
	{
		std::cout << "ScavTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints -= 1;	
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _Name << " is now in Gate keeper mode." << std::endl;
}
