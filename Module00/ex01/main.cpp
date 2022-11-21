/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:02:12 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/23 12:50:37 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_h(void)
{
	std::cout << "********************************************" << std::endl;
	std::cout << "**                                        **" << std::endl;
	std::cout << "**   \t\x1b[1mWellcome in ur PhoneBook\x1b[0m          **" << std::endl;
	std::cout << "**                                        **" << std::endl;
	std::cout << "********************************************" << std::endl << std::endl;
	std::cout << "Allowed Command :" << std::endl;
	std::cout << "\t\x1b[1mADD\x1b[0m: save a new contact." << std::endl;
	std::cout << "\t\x1b[1mSEARCH\x1b[0m: display a specific contact." << std::endl;
	std::cout << "\t\x1b[1mEXIT\x1b[0m: exit and the contacts are lost forever!." << std::endl << std::endl;
}

std::string check_l(std::string str)
{
	if (str.length() >= 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	return (str);
}

int PhoneBook::Add()
{
    if (n_contact < 8)
	{
		if(add_one())
			return (1);
		n_contact++;
	}
	else
	{
		rm_oldest();
		if(add_one())
			return (1);
		n_contact++;
	}
	return (0);
}


int PhoneBook::aff()
{
	int i;
	std::string	index;

	i = 0;
	P_table();
	std::cout << BOLDBLUE << "Put the index of the name : " << RESET;
	std::cin >> index;
	if(std::cin.eof())
		return (1);
	else
	{
		std::stringstream swa;
		swa << index;
		swa >> i;
		Search(i - 1);
	}
	return (0);
}

int main()
{
	std::string	command;
	PhoneBook	phonebook;

	print_h();
	while(1)
	{
		std::cout << "\x1b[31m➜\x1b[0m  ";
		std::cin >> command;
		if (std::cin.eof())
			return (1);
		else if (command == "ADD")
		{	
			if(phonebook.Add())
				return (1);
		}
		else if(command == "SEARCH")
		{
			if(phonebook.aff())
				return (1);
		}
		else if(command == "EXIT" )
			return (0);
		else
			std::cout << "command not found: " << command << std::endl;	
	}
	return (0);
}