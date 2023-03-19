/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:17:02 by yachehbo          #+#    #+#             */
/*   Updated: 2023/03/18 12:09:33 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (str[i] == ' ')
			continue;
		if (str[i] >= '0' && str[i] <= '9')
		{
			int num = 0;
			num = str[i] - '0';	
			_stack.push(num);
		}
		else if ((str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') && _stack.size() >= 2)
		{
			int num2 = _stack.top();
			_stack.pop();
			int num1 = _stack.top();
			_stack.pop();
			if (str[i] == '+')
				_stack.push(num1 + num2);
			else if (str[i] == '-')
				_stack.push(num1 - num2);
			else if (str[i] == '*')
				_stack.push(num1 * num2);
			else if (str[i] == '/')
				_stack.push(num1 / num2);
		}
		else
		{
			std::cerr << "Error" << std::endl;
			exit(0);
		}
	}
	if(_stack.size() != 1)
	{
		std::cout << "Error" << std::endl;
		exit(0);
	}
}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN::~RPN()
{}

RPN & RPN::operator=(const RPN &assign)
{
	this->_stack = assign._stack;
	return *this;
}

std::stack<int> RPN::getStack() const
{
	return _stack;
}

void RPN::print()
{
	std::cout << _stack.top() << std::endl;
}