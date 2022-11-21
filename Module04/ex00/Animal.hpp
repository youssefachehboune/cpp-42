/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:19:57 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/14 17:41:12 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal & operator=(const Animal &assign);

		std::string getType() const;
		void setType(std::string type);

		virtual void makeSound() const;
	protected:
		std::string type;
};

#endif
