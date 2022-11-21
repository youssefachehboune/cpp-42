/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:56:14 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/24 15:29:45 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>

class Zombie
{
    private:
        std::string name;
    public:
		Zombie();
        void announce( void );
		void setName(std::string name);
    	Zombie(std::string name);
    	~Zombie();
};
Zombie* zombieHorde( int N, std::string name );
#endif