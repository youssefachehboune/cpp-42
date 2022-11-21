/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:12:31 by yachehbo          #+#    #+#             */
/*   Updated: 2022/07/26 18:22:01 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int main()
{
    Harl test;
    Harl test1;
    test.complain("DEBUG");
    test1.complain("INFO");
    test.complain("WARNING");
    test.complain("ERROR");
    return (0);
}