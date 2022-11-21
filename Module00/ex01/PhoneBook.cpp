/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:19:20 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/20 17:44:50 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){n_contact = 0;}
PhoneBook::~PhoneBook(){std::cout << "Bye...👋\n";}

int PhoneBook::add_one()
{
	std::cout << BOLDCYAN <<"\tADD A NEW CONTACT" << RESET << std::endl;
	std::cout << BOLDBLUE << "First Name : " << RESET;
	if (!(std::cin >> contacts[n_contact].f_name))
        return (1);
	std::cout << BOLDBLUE << "Last Name : " << RESET;
	if (!(std::cin >> contacts[n_contact].l_name))
        return (1);
	std::cout << BOLDBLUE << "Nick Name : " << RESET;
	if(!(std::cin >> contacts[n_contact].n_name))
        return (1);
	std::cout << BOLDBLUE << "Phone Number : " << RESET;
	if(!(std::cin >> contacts[n_contact].p_number))
        return (1);
    std::cout << BOLDBLUE << "Darkest secret : " << RESET;
	if(!(std::cin >> contacts[n_contact].d_secret))
        return (1);
	std::cout << BOLDGREEN << contacts[n_contact].f_name << " Contact has been Added." << RESET << std::endl;
	return (0);
}

void PhoneBook::rm_oldest()
{
    int x = 1;
    while (x < n_contact)
    {
        contacts[x - 1] = contacts[x];
        x++;
    }
    n_contact--;
}

void PhoneBook::P_table()
{
    int i;
	
	i = 0;
    std::cout << BOLDCYAN << " -------------------------------------------" << RESET << std::endl;
	std::cout << BOLDCYAN << "|" << RESET << BWHT << "   Index  " << RESET;
	std::cout << BOLDCYAN << "|" << RESET << BWHT << "FirstName " << RESET;
	std::cout << BOLDCYAN << "|" << RESET << BWHT << " LastName " << RESET;
	std::cout << BOLDCYAN << "|" << RESET << BWHT << " NickName " << RESET;
	std::cout << BOLDCYAN << "|" << std::endl;
    while(i < n_contact)
	{
		std::cout << BOLDCYAN << " -------------------------------------------" << RESET << std::endl;
		std::cout << BOLDCYAN << "|" << RESET << "     " << i + 1 << "    ";
		std::cout << BOLDCYAN << "|" << RESET << std::setw(10) << check_l(contacts[i].f_name);
		std::cout << BOLDCYAN << "|" << RESET << std::setw(10) << check_l(contacts[i].l_name);
		std::cout << BOLDCYAN << "|" << RESET << std::setw(10) << check_l(contacts[i].n_name);
		std::cout << BOLDCYAN << "|" << RESET << std::endl;
		i++;
	}
	std::cout << BOLDCYAN << " -------------------------------------------" << RESET << std::endl;
}

void PhoneBook::Search(int i)
{
	if(i < n_contact && i >= 0)
	{
		std::cout << BOLDGREEN << "First Name ➜ " << RESET << contacts[i].f_name << std::endl;
		std::cout << BOLDGREEN << "Last Name ➜ " << RESET << contacts[i].l_name << std::endl;
		std::cout << BOLDGREEN << "Nick Name ➜ " << RESET << contacts[i].n_name << std::endl;
		std::cout << BOLDGREEN << "Phone Number ➜ " << RESET << contacts[i].p_number << std::endl;
		std::cout << BOLDGREEN << "Darkest secret ➜  " << RESET << contacts[i].d_secret << std::endl;
	}
	else
		std::cout << "Wrong Index" << std::endl;	

}