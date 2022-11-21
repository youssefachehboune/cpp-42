/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:55:01 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/17 12:57:29 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
	_String = "";
}

Convert::Convert(const Convert &copy)
{
	_String = copy.getString();
}

Convert::Convert(std::string String)
{
	_String = String;
}

Convert::~Convert(){}

Convert & Convert::operator=(const Convert &assign)
{
	_String = assign.getString();
	return *this;
}

std::string Convert::getString() const
{
	return _String;
}

void Convert::toChar()
{
	try
	{
		if(_String[0] == '.')
			_String = "0" + _String;
		int i = std::stoi(_String);
		if (std::isprint(i))
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	catch(...)
	{
		std::cerr << "char: impossible" << '\n';
	}
}

void Convert::toInt()
{
	try
	{
		if(_String[0] == '.')
			_String = "0" + _String;
		int i = std::stoi(_String);
		std::cout << "int: " << i << std::endl;
		
	}
	catch(...)
	{
		std::cerr << "int: impossible" << '\n';
	}
	
}

void Convert::toFloat()
{
	try
	{
		float i = std::stof(_String);
 		std::cout.precision(1);
		std::cout << "float: " << std::fixed  << i  << "f" << std::endl;
	}
	catch(...)
	{
		std::cerr << "float: impossible" << '\n';
	}
}

void Convert::toDouble()
{
	try
	{
		std::cout.precision(1);
		double i = std::stod(_String);
		std::cout << "double: " << std::fixed << i << std::endl;
	}
	catch(...)
	{
		std::cerr << "double: impossible" << '\n';
	}
}