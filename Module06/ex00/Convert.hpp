/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:55:06 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/17 10:55:07 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class Convert
{
	public:
		Convert();
		Convert(const Convert &copy);
		Convert(std::string String);
		~Convert();
		Convert & operator=(const Convert &assign);

		std::string getString() const;
		void toChar();
		void toInt();
		void toFloat();
		void toDouble();
	private:
		std::string _String;
		
};

#endif