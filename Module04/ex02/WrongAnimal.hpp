/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:20:30 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/14 17:41:53 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);

		~WrongAnimal();

		WrongAnimal & operator=(const WrongAnimal &assign);
		
		std::string getString() const;
		void setString(std::string string);

		void makeSound() const;
		
	protected:
		std::string _string;
		
};

#endif