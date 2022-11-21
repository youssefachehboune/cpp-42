/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:50:53 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/26 18:40:00 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int main(int ac, char **av)
{
    int i;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    if(ac != 2)
    {
        std::cout << "Program take tow parametres" << std::endl;
        return (1);
    } 
    else
    {
        i = 0;
        while(i < 4)
        {
            if(levels[i] == av[1])
            {
                Harl filter;
                switch (i)
                {
                    case 0:
                        filter.complain("DEBUG");
                        i += 1;
                    case 1:
                        filter.complain("INFO");
                        i += 1;
                    case 2:
                        filter.complain("WARNING");
                        i += 1;
                    case 3:
                        filter.complain("ERROR");
                }
                break ;
            }
            i++;
        }
        if(i == 4)
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    }
    return (0);
}