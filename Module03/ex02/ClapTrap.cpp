/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:47:36 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/13 16:22:35 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_Name = "";
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_Name = copy.getName();
	_HitPoints = copy.getHitPoints();
	_EnergyPoints = copy.getEnergyPoints();
	_AttackDamage = copy.getAttackDamage();
	std::cout << "\e[0;33mCopy Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const std::string &Name)
{
	_Name = Name;
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << "Constructor called of ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_Name = assign.getName();
	_HitPoints = assign.getHitPoints();
	_EnergyPoints = assign.getEnergyPoints();
	_AttackDamage = assign.getAttackDamage();
	return *this;
}

std::string ClapTrap::getName() const
{
	return _Name;
}
void ClapTrap::setName(std::string Name)
{
	_Name = Name;
}

int ClapTrap::getHitPoints() const
{
	return _HitPoints;
}
void ClapTrap::setHitPoints(int HitPoints)
{
	_HitPoints = HitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return _EnergyPoints;
}
void ClapTrap::setEnergyPoints(int EnergyPoints)
{
	_EnergyPoints = EnergyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return _AttackDamage;
}
void ClapTrap::setAttackDamage(int AttackDamage)
{
	_AttackDamage = AttackDamage;
}

void ClapTrap::attack(const std::string& target)
{
	if (_HitPoints == 0)
		std::cout << _Name << " is out of hit points" << std::endl;
	else if ( _EnergyPoints == 0)
		std::cout << _Name << " is out of energypoints" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints -= 1;	
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _Name << " it lose " << amount << " hit points." << std::endl;
	_HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoints == 0)
	{
		std::cout << _Name << " is out of energypoints" << std::endl;
	}
	else
	{
		std::cout << _Name << " repairs itself." << " it gets " << amount << " hit points back" << std::endl;
		_HitPoints += amount;
		_EnergyPoints -= 1;
	}
}