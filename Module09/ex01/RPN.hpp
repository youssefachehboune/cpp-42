/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:17:04 by yachehbo          #+#    #+#             */
/*   Updated: 2023/03/16 18:20:48 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
class RPN
{
	private:
		std::stack<int> _stack;
	public:
		RPN(std::string str);
		RPN(const RPN &copy);
		std::stack<int> getStack() const;
		~RPN();
		RPN & operator=(const RPN &assign);
		void print();
		
		
};

#endif