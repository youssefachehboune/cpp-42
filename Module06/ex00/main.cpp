/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:08:43 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/17 10:55:25 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        Convert convert(av[1]);
        
        convert.toChar();
        convert.toInt();
        convert.toFloat();
        convert.toDouble();
    }
}