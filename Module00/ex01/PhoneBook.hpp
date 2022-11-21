/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:16:37 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/23 12:51:57 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"
#include <string>
#include <iomanip>
#include <sstream>

# define BOLDGREEN		"\033[1m\033[32m"
# define BOLDBLUE		"\033[1m\033[34m"
# define RESET			"\033[0m"
# define BOLDCYAN		"\033[1m\033[36m"
# define BWHT           "\e[1;37m"

std::string check_l(std::string str);

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        int     n_contact;
        int     add_one();
        void    rm_oldest();
        int     Add();
        void    P_table();
        void    Search(int i);
        int     aff();

        PhoneBook();
        ~PhoneBook();
};

#endif