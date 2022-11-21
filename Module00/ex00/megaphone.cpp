/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:38:33 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/17 11:41:36 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j; 

    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else
    {
        i = 1;
        while(i < ac)
        {
            j = 0;
            while(av[i][j])
            {
               std::cout << (char) toupper(av[i][j]);
               j++; 
            }
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
