/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:47:42 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/13 16:08:46 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap(const std::string &Name);

		~ClapTrap();

		ClapTrap & operator=(const ClapTrap &assign);

		std::string getName() const;
		void setName(std::string Name);
		int getHitPoints() const;
		void setHitPoints(int HitPoints);
		int getEnergyPoints() const;
		void setEnergyPoints(int EnergyPoints);
		int getAttackDamage() const;
		void setAttackDamage(int AttackDamage);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string _Name;
		int _HitPoints;
		int _EnergyPoints;
		int _AttackDamage;
		
};

#endif